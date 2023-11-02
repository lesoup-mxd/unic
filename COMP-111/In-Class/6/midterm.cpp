/*
Author: Maksym Dulich
Date: 2023/01/11 (YYYY/DD/MM)

*/
#include <iostream>
#include <tuple>

using namespace std;


string scoretable(double score){
    if (score >= 90){
        return "A";
    }
    else if (score >= 80){
        return "B";
    }
    else if (score >= 70){
        return "C";
    }
    else if (score >= 60){
        return "D";
    }
    else{
        return "F";
    }
}

string lookup_cout_string(int number){
    switch (number){
        case 0:
            return "Please enter your midterm score: ";
        case 1:
            return "Please enter your assignment 1 score: ";
        case 2:
            return "Please enter your assignment 2 score: ";
        case 3:
            return "Please enter your assignment 3 score: ";
        case 4:
            return "Please enter your final score: ";
        default:
            return "Program error!";
    }
}

double input_handler(){
    double input = 0;
    int _count = 0;
    double midterm_score = 0; //25%
    double assignment_1 = 0; //5%
    double assignment_2 = 0; //5%
    double assignment_3 = 0; //5%
    double final_score = 0; //60%
    cout << "Welcome to the grade calculator!" << endl;
    while (_count < 5){
        cout << lookup_cout_string(_count);
        cin >> input;
        if (input < 0 || input > 100){
            cout << "Invalid input! Please enter a number between 0 and 100!" << endl;
            _count--;
        }
        _count++;
        cout << "Loop count: " << _count << endl;
        switch (_count)
        {
        case 1:
            midterm_score = input * 0.25;
        case 2:
            assignment_1 = input * 0.05;
        case 3:
            assignment_2 = input * 0.05;
        case 4:
            assignment_3 = input * 0.05;
        case 5:
            final_score = input * 0.60;
        }
    }
    return midterm_score + assignment_1 + assignment_2 + assignment_3 + final_score;
}

int main(){
    double total_score = 0; //total score
    total_score = input_handler();
    cout << "Your total score is: " << scoretable(total_score) << endl;
    return 0;
}
