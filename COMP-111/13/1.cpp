#pragma region init
#include <iostream>

using namespace std;
#pragma endregion init

#pragma region template
void factorial(int, double &);
#pragma endregion template

#pragma region main
int main()
{
    double result = 0;
    cout << "5! = ";
    factorial(5, result);
    cout << result << endl;
    return 0;
}
#pragma endregion main

#pragma region function

void factorial(int n, double &result)
{
    result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
}

#pragma endregion function