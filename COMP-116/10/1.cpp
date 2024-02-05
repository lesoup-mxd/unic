/*
    11/30/2023 (mm/dd/yyyy)
    Password Generator by Lia Shinitzky, Alexey Skuratov, Maksym Dulich, Timur Titov

    This program generates a password of a given length with the following requirements:
        a. The password length is 8 characters.
        b. The password must contain one upper-case letter.
        c. The password must contain one digit (0-9).
            d. The password must have one of the following special characters: $, *, ^, &, #, _, ?.
        e. The upper-case letter, digit and special character must not always be placed in the same place in the password.

    We are developers UwU
*/

#pragma region init
#include <iostream>
#include <ctime> // DevSkim: ignore DS154189
#include <cstdlib>
#include <string>
using namespace std;
#pragma endregion init

#pragma region template
//Swap two characters in a string
string swapchar(int, int, string);
//shuffle the password around
string shuffler(string);
//Build the password
string password_builder(string, int, string, string);
#pragma endregion template

#pragma region main
int main(){
    int password_length = 8;
    string password = "";
    static string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    static string symbols = "$*^&#_?";

    //Seed the random number generator
    srand(time(0)); // DevSkim: ignore DS149435
    password = password_builder(password, password_length, uppercase, symbols);
    //Shuffle the password
    password = shuffler(password);
    cout << "Your password is: '" << password << "'" << endl;

    return 0;
}
#pragma endregion main

#pragma region func
string swapchar(int pos1, int pos2, string password){
    char _temp;
    _temp = password[pos1];
    password[pos1] = password[pos2];
    password[pos2] = _temp;
    return password;
}
string shuffler(string password){
    char _temp, c1, c2;
    for (int i = 0; i < password.length(); i++){
        password = swapchar(i, rand() % password.length(), password); // DevSkim: ignore DS148264
    }

    return password;
}

string password_builder(string password, int password_length, string uppercase, string symbols){
    //Seed the random number generator
    password += uppercase[rand() % uppercase.length()]; // DevSkim: ignore DS148264
    password += (rand() % 10); // DevSkim: ignore DS148264
    password += symbols[rand() % symbols.length()]; // DevSkim: ignore DS148264
    //Fill the rest of the password with random numbers
    for (int i = 0; i <= password_length - 3; i++){
        password += uppercase[rand() % uppercase.length()]+32; //Adding 32 to convert to lowercase // DevSkim: ignore DS148264
    }

    return password;
}
#pragma endregion func