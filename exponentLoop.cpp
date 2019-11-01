// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Oct 2019
// This is program loop number exponent

#include <iostream>
#include <string>

main() {
    // This will calculate the number added up to number

    // variables
    int answer = 1;
    int repeater = 0;
    int number;

    // Welcome statement
    std::cout << "Welcome, I will give you the square of your"
                 " number." << std::endl;
    std::cout << "Ex. 2² = 4" << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    // input
    std::cout << "What is your number: " << std::endl;
    std::cin >> number;

    // process & output
    for (repeater = 0; repeater <= number; repeater++) {
        answer = repeater * repeater;
        std::cout << repeater << "² = " << answer << "." << std::endl;
    }
}
