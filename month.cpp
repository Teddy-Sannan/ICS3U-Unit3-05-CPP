// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This program takes user number
//   and displys the month

#include <iostream>

int main() {
    // variable declaration
    int number;

    // input
    std::cout << "Enter a number between 1 and 12" << std::endl;
    std::cout << "1 being January and 12 being December: ";
    std::cin >> number;

    // process & output
    switch (number) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "Febuary" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        default :
            if (number == 10) {
            std::cout << "October" << std::endl;
            } else if (number == 11) {
                std::cout << "November" << std::endl;
            } else if (number == 12) {
                std::cout << "December" << std::endl;
            } else {
                std::cout << "Please enter a valid response" << std::endl;
            }
    }
}
