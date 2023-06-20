#include <iostream>
#include <string>

int foo(int &num)
{
    num = 70;
    return num;
}
class Calculator
{
public:
    int num1, num2;
    Calculator(int &prob1, int &prob2) : num1(prob1), num2(prob2) {}
    int add()
    {
        return this->num1 + this->num2;
    }
};

int main()
{
    Calculator prob1(1, 2);
    std::cout << prob1.add() << "\n";

    int num = 32;
    const int &ref = num;

    std::cout << num << "\t" << foo(num) << "\n";
    std::cout << num << "\t" << ref;
    return 0;
}
