#include <iostream>

int main()
{
    int x;
    double y;
    float z;
    x = 0;
    std::cout << "Size of 'x': " << sizeof(x) << std::endl << "address of 'X': " << &x << std::endl;
    std::cout << "Size of 'y': " << sizeof(y) << std::endl << "address of 'Y': " << &y << std::endl;
    std::cout << "Size of 'z': " << sizeof(z) << std::endl << "address of 'Z': " << &z << std::endl;
    x = x + 1;
    std::cout << x;
    return 0;
}