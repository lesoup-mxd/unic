#include <iostream>

using namespace std;

int main() {
    cout << "Please enter your exam score" << endl;
    int score;
    cin >> score;
    if (score < 60) {
        cout << "F" << endl;
    }
    else if (score < 70) {
        cout << "D" << endl;
    }
    else if (score < 80) {
        cout << "C" << endl;
    }
    else if (score < 90) {
        cout << "B" << endl;
    }
    else {
        cout << "A" << endl;
    }
    return 0;
}