#pragma region init
#include <iostream>

using namespace std;
#pragma endregion init


#pragma region template
void swapper(float&, float&);
#pragma endregion template

#pragma region main
int main(){
    float x1 = 5.5, x2 = -3.5; 
    cout << "Before swap: " << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    swapper(x1, x2);
    cout << "After swap: " << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    return 0;
}
#pragma endregion main

#pragma region func
void swapper(float& x1, float& x2){
    float temp = x1;
    x1 = x2;
    x2 = temp;
}
#pragma endregion func