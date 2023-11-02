#include <iostream>
#include <string>

using namespace std;

int main() {
    int num, sum = 0;
    string input;

    // Ask for input and validate it
    while (true) {
        cout << "Enter an integer between 0 and 1000: ";
        getline(cin, input);

        // Check if input is a valid integer
        try {
            num = stoi(input);
        } catch (invalid_argument) {
            cout << "Invalid input. Please enter a valid integer." << endl;
            continue;
        }

        // Check if input is within range
        if (num < 0 || num > 1000) {
            cout << "Invalid input. Please enter an integer between 0 and 1000." << endl;
            continue;
        }

        break;
    }

    // Sum up the digits
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    // Output the sum
    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
