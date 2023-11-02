/*
    * @file ultimate-area-calc.cpp
    * @brief A simple area calculator that calculates the area of a triangle or rectangle
    * @details This program is a simple area calculator that calculates the area of a triangle or rectangle. It is written in C++ and is intended to be compiled with g++.
    * @version 1.0.0
    * @warning This program is not intended to be used for any purpose other than entertainment and torture.
    * @bug This program has bugs do not try to fix them.
    * @copyright Maksym Dulich, 2023, no right reserved really. Sorry for making you suffer through this comment.

*/

//Libraries
#include <stdio.h>
#include <iostream>

using namespace std;

//Main function
int main(){
    printf("Welcome to the ultimate area calculator! Please make your selection: \n't' : Right-sided area calculation\n'r' : Rectangle area caculation\n\nInput: "); // DevSkim: ignore DS154189
    char op_mode; //Variable to store the operation mode
    cin >> op_mode; //Get the operation mode from the user
    switch (op_mode){ //Define the operation modes

    case 't': //Triangle area calculation case
        printf("Please enter the base and height of the triangle:\n"); // DevSkim: ignore DS154189
        int base, height;
        cin >> base >> height;
        if (base <= 0 || height <= 0){
            printf("Invalid input! Exiting...\n"); // DevSkim: ignore DS154189
            return 0;
        }
        printf("The area of the triangle is %d", base * height / 2); // DevSkim: ignore DS154189
        break;

    case 'r': //Rectangle area calculation case
        printf("Please enter the length and width of the rectangle:\n"); // DevSkim: ignore DS154189
        int length, width;
        cin >> length >> width;
        if (length <= 0 || width <= 0){
            printf("Invalid input! Exiting...\n"); // DevSkim: ignore DS154189
            return 0;
        }

        printf("The area of the rectangle is %d", length * width, "\n"); // DevSkim: ignore DS154189
        break;

    default: //Invalid input case
        printf("Invalid input! Exiting...\n"); // DevSkim: ignore DS154189
        break;
    }

    return 0;
}



/*
    Sneaky little comment with no purpose
*/