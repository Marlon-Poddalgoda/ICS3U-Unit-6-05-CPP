// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created in January 2021
// This program finds the average of a list of marks

#include <iostream>
#include <list>
#include <cmath>
#include <string>


float average(std::list<int> listOfMarks) {
    // This function finds the average

    float total = 0;
    float average_number;
    float number_of_elements = listOfMarks.size();
    float rounded_average;

    for (int single_element : listOfMarks) {
        total += single_element;
    }


    average_number = total / number_of_elements;

    rounded_average = average_number * pow(10, 0) + 0.5;
    rounded_average = static_cast<int>(rounded_average);
    rounded_average = rounded_average / pow(10, 0);

    return rounded_average;
}


int main() {
    // This function handles input and output

    std::cout << "This program accepts a list of marks and"
                 " calculates the average. Enter -1 to calculate"
                 " the average."
              << std::endl;
    std::cout << "" << std::endl;

    std::list<int> listOfMarks;
    float average_number;
    std::string marks;
    int a_single_mark;

    while (true) {
        std::cout << "Enter a mark (%): ";
        std::cin >> marks;
        try {
            a_single_mark = std::stoi(marks);
            if (a_single_mark < 0) {
                if (a_single_mark == -1) {
                    break;
                }
            }
        listOfMarks.push_back(a_single_mark);
        } catch (std::invalid_argument) {
            std::cout << "Please enter a valid percentage. Try again."
                      << std::endl;
        }
    }

    average_number = average(listOfMarks);

    // Output
    std::cout << "" << std::endl;
    std::cout << "The average is: " << average_number << "%" << std::endl;
}
