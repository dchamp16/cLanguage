#include <iostream>
#include <string>
using namespace std;

double calculator(char operation, double num1, double num2)
{
    double answer;
    switch (operation)
    {
    case '+':
        answer = num1 + num2;
        break;
    case '-':
        answer = num1 - num2;
        break;
    case '/':
        answer = num1 / num2;
        break;
    case '*':
        answer = num1 * num2;
        break;
    default:
        cout << "end";
        break;
    }
    return answer;
}

// main
int main()
{
    char operation;
    double num1, num2;
    cout << "Enter operation ";
    cin >> operation;
    cout << "Enter first number ";
    cin >> num1;
    cout << "Enter second number ";
    cin >> num2;
    cout << "Answer: " << calculator(operation, num1, num2);
    return 0;
}
