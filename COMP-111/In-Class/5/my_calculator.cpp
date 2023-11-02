#include <string>
#include <iostream>
#include <stdio.h>
#include <tuple>
#include <sstream>
#include <cmath>

using namespace std;

char op_mode(){ //Function to get the operation mode
    printf("Welcome to the ultimate fraction calculator!\nPlease choose your operation:\n'+' : Addition\n'-' : Subtraction\n'*' : Multiplication\n'/' : Division\n'%' : Modulo\n"); // DevSkim: ignore DS154189
    char op_mode;
    cin >> op_mode;
    if (op_mode != '+' && op_mode != '-' && op_mode != '*' && op_mode != '/' && op_mode != '%'){
        printf("Invalid input! Exiting..."); // DevSkim: ignore DS154189
        exit(1);
    }
    return op_mode;
}

tuple<double, double, double, double, char> fraction_handler(char mode){ //Function to handle the fractions
    double a, b, c, d;
    printf("The program will ask you for two fractions using 4 inputs. please enter a, b and then c, d\n"); // DevSkim: ignore DS154189
    printf("Please enter the variables: \n"); // DevSkim: ignore DS154189
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if (b == 0 || d == 0){
        printf("Invalid input! Exiting...\n"); // DevSkim: ignore DS154189
        exit(1);
    }
    return make_tuple(a,b,c,d,mode);
}

void double_to_fraction(double x, int& num, int& den, int max_den = 1000000) {
    int sign = (x < 0) ? -1 : 1;
    x = abs(x);
    int a = floor(x);
    int h1 = 1, h2 = 0, k1 = 0, k2 = 1;
    int n = 0;
    while (true) { //   !!! Seems impossible to implement without a while loop  !!!
        n++;
        int an = floor(x);
        int hn = an * h1 + h2;
        int kn = an * k1 + k2;
        if (kn > max_den) {
            break;
        }
        h2 = h1;
        h1 = hn;
        k2 = k1;
        k1 = kn;
        if (abs(x - an) < 1e-10 || n > 1000) {
            break;
        }
        x = 1 / (x - an);
    }
    num = sign * h1;
    den = k1;
}

double fraction_calculator(double a, double b, double c, double d, char mode){ //Function to calculate the fractions
    double result;

    switch (mode)
    {
        case '+':
            result = (a*d + b*c)/(b*d);
            break;
        case '-':
            result = (a*d - b*c)/(b*d);
            break;
        case '*':
            result = (a*c)/(b*d);
            break;
        case '/':
            result = (a*d)/(b*c);
            break;
        case '%':
            result = fmod(a*d,b*c);
            break;
        default:
            exit(1);
    }
    return result;
}


int main(){ //Main function, calls the handlers
    double a, b, c, d;
    char mode;
    tie(a,b,c,d,mode) = fraction_handler //Pipes the operation mode to the fraction handler
    (
        op_mode()
    );
    double x = fraction_calculator(a,b,c,d,mode);
    int num, den;
    double_to_fraction(x, num, den);
    cout << "The fraction representation of " << x << " is closest to " << num << "/" << den << endl;
    return 0;
}


/*
    By: Maksym Dulich, 2023
*/