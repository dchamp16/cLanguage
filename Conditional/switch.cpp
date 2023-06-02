#include <iostream>
#include <string>

using namespace std;

int main()
{
    string numStr, greeting;
    greeting = "Enter a number from 1 - 3: ";
    cout << greeting;
    getline(cin, numStr);

    int num = stoi(numStr);

    switch (num)
    {
    case 1:
        cout << "first" << endl;
        break;
    case 2:
        cout << "second" << endl;
        break;
    case 3:
        cout << "third" << endl;
        break;
    }

    return 0;
}
