#include <iostream>

/* the double colons "::" in C++ are not equivalent to a namespace. They are used to access elements within namespaces, classes, or static members, allowing you to specify the location of a particular element. */

class Person
{
public:
    static int count; // static member variable

    Person()
    {
        count++; // increment count when a new person is created
    }

    static void displayCount()
    { // static member function
        std::cout << "Total number of persons: " << count << std::endl;
    }
};

// Initializing the static member variable outside the class
int Person::count = 0;

int main()
{
    Person p1;
    Person p2;
    Person p3;

    Person::displayCount(); // Accessing the static member function using double colons

    return 0;
}
