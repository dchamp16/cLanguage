#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle
{
public:
    string brand;
    Vehicle(string brandName)
    {
        brand = brandName;
    }

    void honk()
    {                             // Define a function named "honk"
        cout << "Tuut, tuut! \n"; // Print the string "Tuut, tuut!"
    }
};

// Derived class
class Car : public Vehicle
{ // Define a class "Car" derived from the "Vehicle" class
public:
    string model;
    /*
    Car(string modelName, string brandName) is the constructor declaration for the Car class. It takes two parameters: modelName of type string and brandName of type string.
    : Vehicle(brandName) is an initialization list. It is used to call the constructor of the base class Vehicle and pass the brandName parameter to it. This ensures that the brand member variable of the base class is initialized with the provided brandName value.
    */
    Car(string modelName, string brandName) : Vehicle(brandName)
    {
        model = modelName;
    }
};

int main()
{
    Car myCar("mustang", "ford");            // Create an instance of the "Car" class named "myCar"
    myCar.honk();                            // Call the "honk" function of the "myCar" object, which prints "Tuut, tuut!"
    cout << myCar.brand + " " + myCar.model; // Concatenate the "brand" and "model" strings and print the result
    return 0;                                // Return 0 to indicate successful program execution
}
