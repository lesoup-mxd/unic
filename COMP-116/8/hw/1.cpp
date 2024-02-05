/*
A 1D battle ship game
by Maksym Dulich, 2023
*/


#pragma region init
#include <iostream>
#include <list>
using namespace std;
#pragma endregion init


#pragma region template
void render(list<int> &list);
#pragma endregion template

#pragma region main
int main(){
    list<int> battlefield;
    battlefield = {1, 2, 3, 4, 5};
    render(battlefield);
    return 0;
}
#pragma endregion main

#pragma region function
void render(list<int> &battlefield){
    for (const auto &i : battlefield){
        cout << i << " ";
    }
}
#pragma endregion function