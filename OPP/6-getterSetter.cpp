#include <iostream>
#include <string>
#include <cstdlib> // Added for the exit function
using namespace std;

class Employee
{
private:
    int salary, ssn; // Private member variables for salary and social security number

public:
    string name, position, gender; // Public member variables for name, position, and gender
    int age;                       // Public member variable for age

    // Constructor to initialize the employee object with the provided values
    Employee(string employeeName, string employeePosition, string employeeGender, int employeeAge)
    {
        name = employeeName;
        position = employeePosition;
        gender = employeeGender;
        age = employeeAge;
    }

    // Function to print the employee's information
    void printEmployeeInfo()
    {
        cout << "Employee Name: " << name << "\nEmployee Position: " << position << "\nEmployee Gender: " << gender << "\nEmployee Age: " << age << endl;
    }

    // Function to set the employee's salary
    void setSalary(int amount)
    {
        salary = amount;
    }

    // Function to set the employee's social security number
    void setSsn(int socialSecNum)
    {
        ssn = socialSecNum;
    }

    // Function to get the employee's salary
    int getSalary()
    {
        return salary;
    }

    // Function to get the employee's social security number
    int getSsn()
    {
        return ssn;
    }
};

int main()
{
    // Create an instance of the Employee class named foo and provide initial values
    Employee peter("Peter Ramos", "Software Developer", "male", 32);
    peter.printEmployeeInfo(); // Print the employee's information

    char toSeeSalaryAndSsn; // Variable to hold the user's choice

    cout << "Would you like to see the salary and SSN? (y/n): ";
    cin >> toSeeSalaryAndSsn; // Read the user's choice

    if (toSeeSalaryAndSsn == 'y')
    {
        peter.setSalary(100000); // Set the employee's salary
        peter.setSsn(123456789); // Set the employee's social security number

        int firstEmployeeSalary = peter.getSalary(); // Get the employee's salary
        int firstEmployeeSsn = peter.getSsn();       // Get the employee's social security number

        cout << "\nEmployee Salary: " << firstEmployeeSalary << "\nEmployee SSN: " << firstEmployeeSsn << endl; // Print the salary and social security number
    }
    else
    {
        cout << "Thank you"; // If the user doesn't want to see the salary and SSN, print a message
        exit(0);             // Terminate the program
    }

    return 0;
}
