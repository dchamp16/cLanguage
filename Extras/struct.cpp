#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct // Structure declaration
    {
        int num1, num2, num3;                   // Member (int variable)
        string firstName, lastName, middleName; // Member (string variable)
        bool isMale;                            // Member (bool variable)
    } person;                                   // Structure variable

    // Assign values to members of myStructure
    person.num1 = 22;
    person.num2 = 10;
    person.num3 = 33;
    person.firstName = "Peter ";
    person.firstName = "Ramos ";
    person.middleName = "Guevara";
    person.isMale = true;

    // output
    cout << "Fullname: " << person.firstName << person.middleName << person.firstName << "Age: " << person.num3 << (person.isMale ? " Male" : " Female");

    return 0;
}

/*
   possibles

   struct {
   string brand;
   string model;
   int year;
   } myCar1, myCar2; // We can add variables by separating them with a comma here

   ---------

   // Create a car structure and store it in myCar1;
   car myCar1;
   myCar1.brand = "BMW";
   myCar1.model = "X5";
   myCar1.year = 1999;

   // Create another car structure and store it in myCar2;
   car myCar2;
   myCar2.brand = "Ford";
   myCar2.model = "Mustang";
   myCar2.year = 1969;

   // Print the structure members
   cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
   cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

   */