#include <iostream>
#include <string>

using namespace std;

// Create a class called Calculator
class Calculator
{
public:
    double num1, num2; // Declare two variables to store numbers

    // Constructor that initializes the numbers
    Calculator(const double &problemOne, const double &problemTwo) : num1(problemOne), num2(problemTwo) {}

    // Method to solve the math problem
    double solveMathProblem()
    {
        return this->num1 + this->num2; // Return the sum of the two numbers
    }
};

// Create a class called Add which inherits from Calculator
class Add : public Calculator
{
public:
    // Constructor that calls the Calculator constructor
    Add(const double &problemOne, const double &problemTwo) : Calculator(problemOne, problemTwo) {}

    // Method to solve the math problem
    double solveMathProblem()
    {
        return this->num1 + this->num2; // Return the sum of the two numbers
    }
};

// Create a class called Multi which inherits from Calculator
class Multi : public Calculator
{
public:
    // Constructor that calls the Calculator constructor
    Multi(const double &problemOne, const double &problemTwo) : Calculator(problemOne, problemTwo) {}

    // Method to solve the math problem
    double solveMathProblem()
    {
        return this->num1 * this->num2; // Return the product of the two numbers
    }
};

// Create a class called Minus which inherits from Calculator
class Minus : public Calculator
{
public:
    // Constructor that calls the Calculator constructor
    Minus(const double &problemOne, const double &problemTwo) : Calculator(problemOne, problemTwo) {}

    // Method to solve the math problem
    double solveMathProblem()
    {
        return this->num1 - this->num2; // Return the difference of the two numbers
    }
};

// Create a class called Divide which inherits from Calculator
class Divide : public Calculator
{
public:
    // Constructor that calls the Calculator constructor
    Divide(const double &problemOne, const double &problemTwo) : Calculator(problemOne, problemTwo) {}

    // Method to solve the math problem
    double solveMathProblem()
    {
        return this->num1 / this->num2; // Return the division result of the two numbers
    }
};

// The main function, where the program execution starts
int main()
{
    // Create an instance of Calculator class with numbers 3 and 7
    Calculator problemOne(3, 7);                       // output: 10
    double defaultAns = problemOne.solveMathProblem(); // Solve the math problem and store the result

    // Create an instance of Add class with numbers 11 and 9
    Add problemTwo(11, 9);                           // output: 20
    double addition = problemTwo.solveMathProblem(); // Solve the math problem and store the result

    // Create an instance of Multi class with numbers 2 and 50
    Multi problemThree(2, 50);                         // output: 100
    double multiply = problemThree.solveMathProblem(); // Solve the math problem and store the result

    // Create an instance of Minus class with numbers 10 and 5
    Minus problemFour(10, 5);                            // output: 5
    double subtraction = problemFour.solveMathProblem(); // Solve the math problem and store the result

    // Create an instance of Divide class with numbers 200 and 10
    Divide problemFive(200, 10); // 20
    double division = problemFive.solveMathProblem();
    // Print the results
    cout << "Default: " << defaultAns << "\nAddition: " << addition << "\nMultiplication: " << multiply << "\nSubtraction:  " << subtraction << "\nDivision:  " << division << endl;

    // Return 0 to indicate successful program execution
    return 0;
}