#pragma region init
#include <iostream>

using namespace std;
#pragma endregion init


#pragma region template
void swap(float&, int&, int, bool, bool&);
#pragma endregion template

#pragma region main
int main(){
    float x1 = 5.5;
    int x2 = -3, x3 = 5;
    bool x4 = true, x5 = true;
    cout << "Before swap: " << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;
    cout << "x4 = " << x4 << endl;
    cout << "x5 = " << x5 << endl;
    swap(x1, x2, x3, x4, x5);
    cout << "After swap: " << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;
    cout << "x4 = " << x4 << endl;
    cout << "x5 = " << x5 << endl;

    return 0;
}
#pragma endregion main

#pragma region func
void swap(float& x1, int& x2, int x3, bool x4, bool& x5){
    float temp = x1;
    x1 = x2;
    x2++;
    x3++;
    x4 = false;
    x5 = false;

    cout << "Inside swap: " << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;
    cout << "x4 = " << x4 << endl;
    cout << "x5 = " << x5 << endl;
}
#pragma endregion func