// Copyright Marli Peters 2023 All rights reserved.
// Created By: Marli Peters
// Date: Nov. 13, 2023
// This program asks the user if they are really good looking
// and if they are rich then if they are either of those things the user
// will be given permission to date my grandchild.

#include <iostream>

int main() {
    // introduction statement
    std::cout <<
    "Can you date my grandchild? Find out by answering these questions."
    << std::endl;
    std::cout << "";

    // define variables
    std::string looksStr;
    std::string richStr;

    // get user looks and wealth
    std::cout <<
    "Are you really good looking? Answer with 1 for yes or 2 for no:  "
    << std::endl;
    std::cin >> looksStr;
    std::cout <<
    "Are you rich? Answer with 1 for yes or 2 for no:  "
    << std::endl;
    std::cin >> richStr;
    std::cout << "";

    // catch errors
    try {
        int looksInt;
        int richInt;
        looksInt = std::stoi(looksStr);
        richInt = std::stoi(richStr);

        // give user response
        if (looksInt == 1 || richInt == 1) {
            std::cout << "You may date my grandchild." << std::endl;
        } else if (looksInt == 2 && richInt == 2) {
            std::cout << "You may not date my grandchild." << std::endl;
        } else {
            std::cout << "Please answer with 1 or 2." << std::endl;
        }
        // catch more errors
    } catch (std::invalid_argument) {
        std::cout << "Please answer with 1 or 2.";
    }
}
