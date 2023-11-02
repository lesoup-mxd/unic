#include <iostream>
#include <cmath>
using namespace std;

double calculateTotalAmount(double monthlySavings, double annualInterestRate, double months) {
    double rate = annualInterestRate / 100; // convert percentage to decimal
    double n = 12; // number of times interest applied per time period
    double t = months / 12.0; // number of years

    double totalAmount = monthlySavings * pow((1 + rate / n), n * t);
    return totalAmount;
}

int main() {
    cout << "This program calculates the total amount of money after a given time period." << endl;
    cout << "Please enter the initial deposit, annual interest rate and time period." << endl;
    double monthlySavings = 100; // initial deposit is 100 euros
    double annualInterestRate = 5.0; // annual interest rate is 5%
    double months = 12 * 0.5; // 6 months

    double totalAmount = calculateTotalAmount(monthlySavings, annualInterestRate, months);
    cout << "Total amount after " << months << " months is " << totalAmount << " euros." << endl;

    return 0;
}
