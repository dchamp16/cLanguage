#include <iostream>
#include <string>
using namespace std;

/* & if use in a function this i what you call reference, if its use in a function it wont change the original value from the main
sample:

swapValue("danilo, ramos")
string temp  = a <danilo>
temp = danilo

a = b <ramos>
a = ramos

b = temp <danilo>
b = danilo

*/
void swapValue(string &a, string &b)
{
    string temp = a; // declare temp as a temporary holder of value of a
    a = b;           // so what ever the value of b will change a
    /*
    if b = "ramos"
    the since in this case is a = b
    a will be ramos
    a = "ramos"
     */
    b = temp; // so what ever the value stored in temp from a will change b
              /*
          if a = "danilo"
          then temp = "danilo"
          since in this case is b = temp
          b will become danilo
          b = "danilo"
           */
}

/* ---- MAIN ---- */
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
