/*
    Author: Maksym Dulich
    Date: 2023/01/11 (YYYY/DD/MM)
*/

#include <iostream>
using namespace std;

int main() {
    int celsius = 5;
    double fahrenheit = 0.0;

    cout << "Celsius\tFahrenheit\n";
    cout << "-------\t----------\n";

    while (celsius <= 50) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        cout << celsius << "\t" << fahrenheit << endl;
        celsius += 5;
    }

    return 0;
}
