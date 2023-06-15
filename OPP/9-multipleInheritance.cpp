#include <iostream>

using namespace std;

// Base class A
class A
{
public:
    void printA()
    {
        cout << "A" << endl;
    }
};

// Base class B
class B
{
public:
    void printB()
    {
        cout << "B" << endl;
    }
};

// Derived class C inheriting from A and B
class C : public A, public B
{
public:
    void printC()
    {
        cout << "C" << endl;
    }
};

int main()
{
    C obj;
    obj.printA(); // Accessing member function from class A
    obj.printB(); // Accessing member function from class B
    obj.printC(); // Accessing member function from class C
    return 0;
}
