// Creator:  Lesoup-mxd

#include <iostream>
using namespace std;

int main() {
    int one, two, five, ten, twenty, fifty, euro, twoeuro;
    double total;
    string s1, s2;
    s1 =  "Enter the number of ";
    s2 = " coins you have: ";

    cout << s1 << "one cent" << s2;
    cin >> one;

    cout << s1 << "two cent" << s2;
    cin >> two;

    cout << s1 << "five cent" << s2;
    cin >> five;

    cout << s1 << "ten cent" << s2;
    cin >> ten;

    cout << s1 << "twenty cent" << s2;
    cin >> twenty;

    cout << s1 << "fifty cent" << s2;
    cin >> fifty;

    cout << s1 << "one euro" << s2;
    cin >> euro;

    cout << s1 << "two euro" << s2;
    cin >> twoeuro;

    total = (one * 0.01) + (two * 0.02) + (five * 0.05) + (ten * 0.1) + (twenty * 0.2) + (fifty * 0.5) + euro + (twoeuro * 2);

    cout << "You have " << total << " euro in total." << endl;

    return 0;
}
