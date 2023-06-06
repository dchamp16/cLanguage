#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct
    {
        int num1, num2, num3;
        string firstName, lastName, middleName;
        bool isMale;
    } person;

    person.num1 = 22;
    person.num2 = 10;
    person.num3 = 33;
    person.firstName = "Peter ";
    person.firstName = "Ramos ";
    person.middleName = "Guevara";
    person.isMale = true;

    cout << "Fullname: " << person.firstName << person.middleName << person.firstName << "Age: " << person.num3 << (person.isMale ? " Male" : " Female");

    return 0;
}