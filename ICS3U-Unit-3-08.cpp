// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : November 2022
// ICS3U-Unit3-08.cpp File,
// learning nested if statements in C++.

#include <iostream>
#include <string>

int main() {
    // creating variables
    std::string year;
    int yearInt;

    // input
    std::cout << "Input the year: ";
    std::cin >> year;

    // process and output
    std::cout << "\n";
    try {
        yearInt = std::stoi(year);
        if (yearInt % 4 == 0){
            if (yearInt % 400 == 0){
                std::cout << "That is a leap year.";
            } else if (yearInt % 100 == 0) {
                std::cout << "That is a regular year.";
            } else {
                std::cout << "That is a leap year.";
            }
        } else{
            std::cout << "That is a regular.";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, please try again following the requirements";
    }

    std::cout << "\n\n\nDone.\n";
}
