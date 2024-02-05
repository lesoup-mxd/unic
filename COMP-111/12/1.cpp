#pragma region init
#include <iostream>

using namespace std;
#pragma endregion init

#pragma region template_1
bool evenOrOdd(int);
#pragma endregion template_1

#pragma region template_2
double factorial(int);
double fac_div_num(int);
double recursive(int);
#pragma endregion template_2

#pragma region template_3
void print_pyramid(int);
#pragma endregion template_3

#pragma region template_4
double circumference(double);
double circle_area(double);
#pragma endregion template_4

#pragma region main
int main(){
    cout <<  "Enter a number: ";
    int n;
    cin >> n;
    cout << "Running test 1: " << endl;
    if (evenOrOdd(n)) cout << "Even" << endl;
    else cout << "Odd" << endl;
    cout << "Running test 2: " << endl;
    cout << "Result: " << recursive(n) << endl;
    cout << "Running test 3: " << endl;
    print_pyramid(n);
    cout << "Running test 4: " << endl;
    cout << "Circumference: " << circumference(n) << endl;
    cout << "Circle area: " << circle_area(n) << endl;

    return 0;
}
#pragma endregion main

#pragma region func_1
bool evenOrOdd(int n){
    if (n%2==0) return true;
    else return false;
}
#pragma endregion func_1

#pragma region func_2
double factorial(int n){
    if (n==0) return 1;
    else return n * factorial(n-1);
}
double fac_div_num(int n){
    return factorial(n) / n;
}
double recursive(int n){
    if (n==1) return 1;
    else return recursive(n-1) + fac_div_num(n);
}
#pragma endregion func_2

#pragma region func_3
void print_pyramid(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
#pragma endregion func_3

#pragma region func_4
double circumference(double r){
    return 2 * 3.14 * r;
}
double circle_area(double r){
    return 3.14 * r * r;
}
#pragma endregion func_4