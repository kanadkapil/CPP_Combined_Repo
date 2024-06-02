#include <iostream>
#include <vector>

std::vector<std::pair<int, int> > findNonAdjacentCombinations(const std::vector<int>& arr) {
    std::vector<std::pair<int, int> > combinations;

    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 2; j < arr.size(); ++j) {
            combinations.push_back({arr[i], arr[j]});
        }
    }

    return combinations;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};

    std::vector<std::pair<int, int>> nonAdjacentCombinations = findNonAdjacentCombinations(arr);

    std::cout << "Non-adjacent combinations in the array:" << std::endl;
    for (const auto& pair : nonAdjacentCombinations) {
        std::cout << pair.first << ", " << pair.second << std::endl;
    }

    return 0;
}

