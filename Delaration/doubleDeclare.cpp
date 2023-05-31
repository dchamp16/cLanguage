#include <iostream>

int main()
{
    int a, b, c, d, e, f;
    a = 1;
    b = 2;
    c = 3;

    const double pi = 3.14;
    // pi = 3.15; not doing to work since its a constant || undeclarable

    d = e = f = 10; // d = 10, e = 10, f = 10
    std::cout << "PI: " << pi << std::endl;
    std::cout << a << b << c << std::endl;
    std::cout << d + e + f; // d + e + f || 10 + 10 + 10 = 30

    return 0;
}