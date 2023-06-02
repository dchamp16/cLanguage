#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fname, lname, fullName;
    fname = "Peter ";
    lname = "Ramos";
    fullName = fname + lname;
    cout << "name character count: " << fullName.length() << endl;

    cout << "how old are you? ";
    string ageStr;
    getline(cin, ageStr);

    int age = stoi(ageStr);

    cout << "Your age is: " << age << typeid(age).name() << endl;

    return 0;
}
