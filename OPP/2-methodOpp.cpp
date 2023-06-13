#include <iostream>
#include <string>

using namespace std;
/* create a animal */
class Animal
{
public:
    string name, gender, type;
    int age;
    void printInfo()
    {
        int animalRealAge = age *= 15;

        if (type == "kittie")
        {
            cout
                << "Cat name: "
                << name
                << "\nCat gender: "
                << gender
                << "\nCat age: "
                << animalRealAge << endl;
        }
        else if (type == "doggie")
        {
            cout
                << "Dogs name: "
                << name
                << "\nDog gender: "
                << gender
                << "\nDog age: "
                << animalRealAge << endl;
        }
        else
        {
            cout << type << ": Type of animal doesnt exist yet!\n";
        }
        cout << "------------------\n";
    }
};
/* ------------ */

int main()
{
    /* CREATE CAT*/
    int catAge = 15;
    Animal cat;
    cat.name = "cookie";
    cat.gender = "famale";
    cat.type = "kittie";
    cat.age = 9;
    // output the cat
    cat.printInfo();

    /* CREATE DOG */
    int dogAge = 15;
    Animal dog;
    dog.name = "Pute";
    dog.gender = "male";
    dog.type = "doggie";
    dog.age = 2;
    dog.printInfo();

    // output the dog

    Animal horse;
    horse.name = "John";
    horse.age = 3;
    horse.type = "horse";
    horse.gender = "male";
    horse.printInfo();

    return 0;
}