#pragma region init
#include <iostream>
#include <limits>
using namespace std;
#pragma endregion init

#pragma region prototype
void printRectangle(int, int);
int inputHandler();
#pragma endregion prototype

#pragma region main
int main(){
    int display_times = 0, width = 0, height = 0;
    char input;
    do{
        cout << "Please enter the number of times to display the rectangle" << endl;
        display_times = inputHandler();
        cout << "Please enter the width of the rectangle" << endl;
        width = inputHandler();
        cout << "Please enter the height of the rectangle" << endl;
        height = inputHandler();
        for(int i = 0; i < display_times; i++){
            printRectangle(width, height);
            cout << endl;
        }
        cout << "Do you want to continue? (y/n)" << endl;
        cin >> input;
    }
    while (input == 'y' || input == 'Y');
    return 0;
}
#pragma endregion main

#pragma region function
void printRectangle(int width, int height){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int inputHandler(){
    int input;
     while (true) {
        cin >> input;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, Please try again:" << endl;
        } else {
            if (input < 0) {
                cout << "Invalid input, Please try again:" << endl;
                continue;
            }
            break;
        }
    }
    return input;
}
#pragma endregion function