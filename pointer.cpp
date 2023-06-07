#include <iostream>
#include <string>
using namespace std;

int main()
{

    // pointer is a variable that you can store reference address
    string name = "Peter Ramos"; // orignal value
    string *nameAddress = &name; // store reference to pointer named *nameAddress
    cout << "\nptr: " << nameAddress << " &name: " << &name << "\n\n";

    *nameAddress = "Lauren Guzman"; // You can also change the pointer's value. But note that this will also change the value of the original variable

    cout << name << endl; // original changes too

    cout << *nameAddress << "\n\n"; // to get the value of the reference stored in the pointer use *

    return 0;
}