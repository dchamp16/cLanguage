#include <iostream>
using namespace std;

int main()
{
    int x = 9; // 1 0 0 1
    x >>= 1;   // meaning shift 1 to right

    /*
    1  0  0  1 = 9
    -> -> -> ->
    =  =  =  =
    0  1  0  0 = output: 4
    --------------
    */

    int y = 5; // 0 1 0 1
    y >>= 3;   // meaning shift 3 to right

    /*
    0  1  0  1 = 5
    -> -> -> ->
    =  =  =  =
    0  0  0  0 = output: 0
    --------------
    */

    int z = 15; // 0 1 0 1
    z >>= 3;    // meaning shift 3 to right

    /*
    1  1  1  1 = 15
    -> -> -> ->
    =  =  =  =
    0  0  0  1 = output: 1
    --------------
    */

    cout << x << " " << y << " " << z; // 4 0 1
    return 0;
}
