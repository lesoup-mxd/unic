#pragma region init

#include <iostream>
using namespace std;
#pragma endregion init

#pragma region template

int displayNumbers(int, int);
int sumBetweenNumbers(int, int);
double factorial(int);
char grade(int);
double farenheitToCelcius(int);
int testEvenOdd(int);
int timeToSeconds(int, int, int);
#pragma endregion template

#pragma region main

int main(){
    int x = 0, y = 0, sum = 0;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    // Call functions here
    return 0;
}
#pragma endregion main

#pragma region function
//displays all numbers between x and y
int displayNumbers(int x, int y){
    for (int i = x; i <= y; i++){
    }
    return 0;

}
//returns the sum of all numbers between x and y
int sumBetweenNumbers(int x, int y){
    int sum = 0;
    for (int i = x; i <= y; i++){
        sum += i;
    }
    return sum;
}
//returns the factorial of x
double factorial(int x){
    int sum = 1;
    for (int i = x; i>0; i--){
        sum*=i;
    }
    return sum;
}
//returns the grade of x, lookup grading scale
char grade(int x){
    if (x >= 90){
        return 'A';
    }
    if (x >= 80){
        return 'B';
    }
    if (x >= 70){
        return 'C';
    }
    if (x >= 60){
        return 'D';
    }
    else{
        return 'F';
    }
}
//returns the celcius equivalent of farenheit x
double farenheitToCelcius(int x){
    return (x - 32) * 5 / 9;
}
//returns 1 if x is even, 0 if x is odd
int testEvenOdd(int x){
    return x % 2;
}
//returns the number of seconds in x hours, y minutes, and z seconds
int timeToSeconds(int x, int y, int z){
    return x * 3600 + y * 60 + z;
}
#pragma endregion function