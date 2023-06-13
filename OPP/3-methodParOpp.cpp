#include <iostream>
#include <string>

using namespace std;
/* create a animal */
class Animal
{
public:
    string name, gender, type;
    int age, numberOfLegs(int numleg);
    void printInfo()
    {
        cout << name << " " << gender << " " << type << " " << age << endl;
    };
};

/*if you want to have a parameter like this,
it has to be access using scope resolution operator (::)
int Animal::numberOfLegs(parameter) its just saying that
i want to access (using ::) numberOfLegs(parameter) in Animal
so you need to create a sort of a function*/
int Animal::numberOfLegs(int numLegs)
{
    return numLegs;
}
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

    int numLegs = cat.numberOfLegs(4);
    cout << "Number of Legs: " << numLegs << endl;

    return 0;
}