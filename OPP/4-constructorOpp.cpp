#include <iostream>
#include <string>
using namespace std;

class Car
{ // The class
public:
    // create a container where your constructor will assigned
    string brand, model;
    int year;
    // -------

    // add contructor
    Car(string brandName, string modelName, int modelYear)
    {
        // assigning the contructor from the container earlier
        brand = brandName;
        model = modelName;
        year = modelYear;
    };
    // function that print the info
    void printInfo()
    {
        cout << "| Brand: " << brand << " | Model: " << model
             << " | Year: " << year << " |" << endl;
    }
};

int main()
{
    // create a object
    Car firstCar("BMW", "M2 coupe", 2023);
    firstCar.printInfo();

    Car secondCar("Honda", "Civic", 1990);
    secondCar.printInfo();
    return 0;
}
