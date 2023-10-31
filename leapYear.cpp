// Created By: Finn Kitor
// Created On: October 31st (Halloween) 2023
// This program is a nested if statement about leap years
#include <iostream>
// user inputs the leap year into the terminal
int main() {
    int leap_year;
    std::cout << "enter the leap year: ";
    std::cin >> leap_year;
    std::cout << std::endl;
    // the terminal will process if the user inputted a leap year
    if (leap_year >= 2024) {
        if (leap_year < 2028) {
            std::cout << "2024 is the upcoming leap year!." << std::endl;
        } else {
            std::cout << "2028 is the next upcoming leap year!." << std::endl;
        }
    } else {
        std::cout << "error, not a leap year." << std::endl;
    }

    return 0;
}
