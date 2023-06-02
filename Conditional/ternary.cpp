#include <iostream>
#include <string>

using namespace std;

int main()
{

    cout << "what is your name? \n";
    string name;
    getline(cin, name);
    string welcomeNote = (name == "peter" || name == "justine") ? "hello " + name : "i dont know you " + name;
    cout << welcomeNote;

    return 0;
}
