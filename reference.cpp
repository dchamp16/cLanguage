#include <iostream>
#include <string>
using namespace std;

int main()
{
    // reference
    int original = 10;
    int &ref = original;
    ref = 33;
    original = 40;

    cout << "original: " << original << " ref: " << ref << "\n";
    // ----------------
    string fName, lName;
    fName = "Peter";
    lName = "Ramos";
    cout << "fName Address: " << &fName << " | "
         << "lName Address: " << &lName;

    return 0;
}