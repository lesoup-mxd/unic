#include <iostream>
using namespace std;

int main(){
    double a = 0, b = 0;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if (((a>=0)&&(b>=0))||((a<0)&&(b<0))){
        a=-a; b=-b;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    else{
        cout << "Numbers have different signs" << endl;
    }
}