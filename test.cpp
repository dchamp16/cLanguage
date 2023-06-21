#include <iostream>
#include <string>

class Calculator
{
public:
    int num1, num2;
    Calculator(int &prob1, int &prob2) : num1(prob1), num2(prob2) {}
    int add()
    {
        return this->num1 + this->num2;
    }
    int multi()
    {
        return this->num1 * this->num2;
    }
    int minus()
    {
        return this->num1 - this->num2;
    }
    int divide()
    {
        return this->num1 / this->num2;
    }
};

int main()
{
    int a, b;
    std::cout << "First Number: ";
    std::cin >> a;
    std::cout << "Second Number: ";
    std::cin >> b;
    Calculator prob1(a, b);
    std::cout << "+= " << prob1.add() << "\n";
    std::cout << "/= " << prob1.divide() << "\n";
    std::cout << "-= " << prob1.minus() << "\n";
    std::cout << "*= " << prob1.multi() << "\n";
    return 0;
}
