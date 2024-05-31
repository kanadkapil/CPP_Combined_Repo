#include <iostream>
#include <string>

int main() {
    int numStrings;

    // Prompt the user for the number of strings they want to enter
    std::cout << "Enter the number of strings: ";
    std::cin >> numStrings;

    // Clear the input buffer
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Dynamically allocate an array of pointers to strings
    std::string** stringArray = new std::string*[numStrings];

    // Loop to collect strings
    for (int i = 0; i < numStrings; ++i) {
        std::string inputString;

        // Prompt the user for each string
        std::cout << "Enter string #" << i + 1 << ": ";
        std::getline(std::cin, inputString);

        // Dynamically allocate memory for the string and copy it
        stringArray[i] = new std::string(inputString);
    }

    // Display the collected strings
    std::cout << "You entered the following strings:" << std::endl;
    for (int i = 0; i < numStrings; ++i) {
        std::cout << "String #" << i + 1 << ": " << *stringArray[i] << std::endl;

        // Deallocate memory for each string
        delete stringArray[i];
    }

    // Deallocate memory for the array of pointers
    delete[] stringArray;

    return 0;
}

