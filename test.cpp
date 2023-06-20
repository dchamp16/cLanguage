#include <iostream>
#include <string>

int foo(int &num)
{
    return num = 70;
}

int main()
{
    int num = 32;
    int &ref = num;
    int *ptr = &ref;
    ref = 100;
    num = 9999;
    foo(ref);

    std::cout << num << "\t" << ref << "\t" << ptr;
    return 0;
}