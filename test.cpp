#include <iostream>
#include <string>
using namespace std;

// & if use in a function this i what you call reference, if its use in a function it wont change the original value from the main
void swapValue(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}

// main
int main()
{
    /* in original reference it changes the original value if its reference check reference.cpp  */
    string x = "peter";             // x has value of peter
    string y = "justin";            // y has value of justin
    cout << x << "\t" << y << endl; // outputs the x and y so it will show peter \t justin
    swapValue(x, y);                // since we are using the function swapValue and added the x with the value of peter and y with a value of justin it will swap but it wont affect the original value of x and y
    cout << x << "\t" << y;         // output the swapped values
    return 0;
}
