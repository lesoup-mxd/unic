#pragma region init
#include <iostream>

using namespace std;
#pragma endregion init

#pragma region template

bool calculator(double, double, char, double &);

#pragma endregion template

#pragma region main
int main()
{
    return 0;
}
#pragma endregion main

#pragma region function
bool calculator(double x, double y, char o, double &result)
{
    switch (o)
    {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        if (y == 0)
        {
            return false;
        }
        result = x / y;
        break;
    default:
        return false;
        break;
    }
    return true;
}