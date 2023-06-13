#include <iostream>
#include <string>

using namespace std;
/* create a animal */
class Animal
{
public:
    string name, gender;
    int age;
};
/* ------------ */

int main()
{
    /* CREATE CAT*/
    int catAge = 15;
    Animal cat;

    cat.name = "cookie";
    cat.gender = "famale";
    cat.age = catAge *= 2;
    // output the cat
    cout
        << "Cat name: "
        << cat.name
        << "\nCat gender: "
        << cat.gender
        << "\nCat age: "
        << cat.age;

    cout << "\n---------------------\n";
    /* CREATE DOG */
    int dogAge = 15;
    Animal dog;

    dog.name = "Pute";
    dog.gender = "male";
    dog.age = dogAge *= 2;

    // output the dog
    cout
        << "Dogs name: "
        << dog.name
        << "\nDog gender: "
        << dog.gender
        << "\nDog age: "
        << dog.age;

    return 0;
}