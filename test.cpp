#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Peter Ramos";
    // pointer is a variable that you can store reference address
    string *nameAddress = &name;
    //------------
    cout << "ptr: " << nameAddress << " &name: " << &name;
    return 0;
}