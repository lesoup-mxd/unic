#include <iostream>
using namespace std;

int main(){
    double angle = 0;

    cout << "Please enter an angle in degrees: ";
    cin >> angle;
    if (angle != 90)
    {
        cout << "The angle is not a right angle." << endl;
    }
    else
    {
        cout << "The angle is a right angle." << endl;
    }
    double number = 0, positiveNum = 0, negativeNum = 0;
    cout << "Please enter a number: ";
    cin >> number;
    if (number>=0)
    {
        positiveNum += number;
    }
    else
    {
        negativeNum += number;
    }
    cout << "Value of variables: " << endl << "number: " << number << endl << "positiveNum: " << positiveNum << endl << "negativeNum: " << negativeNum << endl;


}