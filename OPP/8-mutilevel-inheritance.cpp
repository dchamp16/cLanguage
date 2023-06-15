#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};

// Intermediate class inheriting from Animal
class Mammal : public Animal
{
public:
    void run()
    {
        cout << "Mammal is running." << endl;
    }
};

// Derived class inheriting from Mammal
class Dog : public Mammal
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

int main()
{
    Dog dog;
    dog.eat();  // Accessing eat() from Animal class
    dog.run();  // Accessing run() from Mammal class
    dog.bark(); // Accessing bark() from Dog class

    return 0;
}