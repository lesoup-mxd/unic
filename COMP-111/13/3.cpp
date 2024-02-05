#pragma region init
#include <iostream>

using namespace std;
#pragma endregion init

#pragma region template

void calculator(double, double, char, double &result, bool &status);

#pragma endregion template

#pragma region main
int main()
{
    return 0;
}
#pragma endregion main

#pragma region function
void calculator(double x, double y, char o, double &result, bool &status)
{
    status = false;
    switch (o)
    {
    case '+':
        result = x + y;
        status = true;
        break;
    case '-':
        result = x - y;
        status = true;
        break;
    case '*':
        result = x * y;
        status = true;
        break;
    case '/':
        if (y == 0)
        {
            status = false;
        }
        result = x / y;
        status = true;
        break;
    default:
        status = false;
        break;
    }
    status = true;
}
#pragma endregion function