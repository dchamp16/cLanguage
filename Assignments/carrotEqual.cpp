#include <iostream>
using namespace std;

int main()
{
    int x = 5; // 0101
    x ^= 3;    // 0011

    /*
    if it comparing 0 to 0 = 0
    if its 1 to 1 = 0
    if its 1 to 0 = 1

    0 1 0 1 = 5
    ^ ^ ^ ^
    0 0 1 1 = 3
    = = = =
    0 1 1 0 = 6


    */

    cout << x; // 0 1 1 0 = 6
    return 0;
}
