#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

struct Transaction {
    char type;
    std::string payer;
    std::string recipient;
    int amount;
};

void processExpenses(std::map<std::string, int>& balances, const Transaction& transaction) {
    int share = transaction.amount / (transaction.recipient.length() + 1);
    balances[transaction.payer] -= transaction.amount - share;
    for (char person : transaction.recipient) {
        balances[std::string(1, person)] += share;
    }
}

void processLoans(std::map<std::string, int>& loans, const Transaction& transaction) {
    if (transaction.type == 'L') {
        loans[transaction.payer] += transaction.amount;
    }
}

void settleLoans(std::map<std::string, int>& balances, std::map<std::string, int>& loans) {
    for (auto it_lender = loans.begin(); it_lender != loans.end(); ++it_lender) {
        if (it_lender->second <= 0) continue; // No pending loan
        for (auto it_borrower = balances.begin(); it_borrower != balances.end(); ++it_borrower) {
            if (it_lender->second == 0) break; // Loan settled
            int pay = std::min(it_lender->second, it_borrower->second);
            balances[it_lender->first] -= pay;
            balances[it_borrower->first] += pay;
            it_lender->second -= pay;
        }
        loans[it_lender->first] = it_lender->second;
    }
}

void processTransactions(const std::vector<Transaction>& transactions) {
    std::map<std::string, int> balances;
    std::map<std::string, int> loans;

    for (const auto& transaction : transactions) {
        if (transaction.type == 'E') {
            processExpenses(balances, transaction);
        } else if (transaction.type == 'L') {
            processLoans(loans, transaction);
        }
        settleLoans(balances, loans);
    }

    bool printed = false;
    for (const auto& person_balance : balances) {
        if (person_balance.second != 0) {
            std::cout << person_balance.first << "/";

            if (person_balance.second > 0) {
                std::cout << "NO DUES./" << person_balance.second << "\n";
            } else {
                std::cout << "Owes/" << std::abs(person_balance.second) << "\n";
            }

            printed = true;
        }
    }

    if (!printed) {
        std::cout << "NO DUES." << std::endl;
    }
}

int main() {
    int N;
    std::cin >> N;

    std::vector<Transaction> transactions(N);
    for (int i = 0; i < N; ++i) {
        char type;
        std::string payer, recipient;
        int amount;

        std::cin >> type >> payer;

        if (type != 'E') {
            std::cin >> recipient;
        }

        if (type != 'L') {
            std::cin >> amount;
        }

        transactions[i] = {type, payer, recipient, amount};
    }

    processTransactions(transactions);

    return 0;
}

