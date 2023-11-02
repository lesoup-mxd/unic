#include <iostream>
#include <cstdlib>

int main() {
    const char* env_var = std::getenv("var");
    if (env_var) {
        std::cout << "var: " << env_var << std::endl;
    } else {
        std::cout << "var is not set" << std::endl;
    }
    return 0;
}