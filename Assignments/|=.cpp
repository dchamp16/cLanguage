#include <iostream>
using namespace std;

int main()
{
    int x = 5; // 0101
    x |= 3;    // 3 = 0011

    /*
    if it comparing 0 to 0 = 0
    if its 1 to 1 = 1
    if its 1 to 0 = 1
    0 1 0 1 = 5
    | | | |
    0 0 1 1 = 3
    = = = =
    0 1 1 1 = 7


    */
    cout << x; // = 7
    return 0;
}
