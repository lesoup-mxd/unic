#include <iostream>
using namespace std;

int main() {
    cout << "Please enter first number: ";
    double x = 0;
    cin >> x;
    cout << "Please enter second number: ";
    double y = 0;
    cin >> y;
    if (x > y) {
        cout << "The first number is greater" << endl;
    }
    else{
        cout << "The second number is greater" << endl;
    }
    return 0;
}
