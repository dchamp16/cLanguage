#include <iostream>
#include <string>
using namespace std;

class Pet
{
public:
    string name, gender;
    int age;
    // Constructor for the Pet class
    Pet(const string petName, const string petGender, const int petAge) : name(petName), gender(petGender), age(petAge) {}
    // {
    //     name = petName;
    //     gender = petGender;
    //     age = petAge;
    // }
    // Method to print pet information
    void printPetInfo()
    {
        cout << name << " | " << gender << " | " << age << "\n";
    }
};

class Dog : public Pet
{
public:
    string breed;
    // Constructor for the Dog class, derived from Pet class

    /*
    Dog(string dogBreed, string petName, string petGender, int petAge): This is the declaration of the constructor for the Dog class. It takes four parameters: dogBreed, petName, petGender, and petAge. These parameters represent the breed, name, gender, and age of the dog, respectively.

    : Pet(petName, petGender, petAge): This part is called an initializer list. It is used to initialize the base class (or superclass) of Dog, which in this case is Pet.
    */
    Dog(const string &dogBreed, const string &petName, const string &petGender, const int &petAge) : Pet(petName, petGender, petAge), breed(dogBreed) {}

    // Method specific to Dog class to make the dog bark
    void bark()
    {
        cout << "WOFF!! WOFF!! I'm a " << breed << endl;
    }
};

class Cat : public Pet
{
public:
    string breed;
    // Constructor for the Cat class, derived from Pet class
    Cat(const string &catBreed, const string &petName, const string &petGender, const int &petAge) : Pet(petName, petGender, petAge), breed(catBreed) {}

    // Method specific to Cat class to make the cat meow
    void meow()
    {
        cout << "Meeeeooowww I'm a " << breed << endl;
    }
};

int main()
{
    // Creating an instance of the Dog class
    Dog firstDog("Shiba Inu", "Toya", "male", 2);
    // Calling the printPetInfo() method of the Pet class (inherited by Dog class)
    firstDog.printPetInfo();
    // Calling the bark() method of the Dog class
    firstDog.bark();
    cout << "\n=====================\n";
    // Creating an instance of the Cat class
    Cat firstCat("Munchkin", "Cookie", "female", 4);
    // Calling the printPetInfo() method of the Pet class (inherited by Cat class)
    firstCat.printPetInfo();
    // Calling the meow() method of the Cat class
    firstCat.meow();
    cout << "\n=====================\n";
    Dog secondDog("Labrador", "Johnny", "male", 8);
    secondDog.printPetInfo();
    secondDog.bark();
    cout << "\n=====================\n";
    Cat secondCat("Munchkin", "Misty", "female", 2);
    secondCat.printPetInfo();
    secondCat.meow();
    return 0;
}
