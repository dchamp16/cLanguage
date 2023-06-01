#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    x <<= 3;

    /*
    start with 4 bit if shift more than the 4 bit it will add 0
   0  0  0  1 = 1
   <- <- <- <-
   =  =  =  =
   1  0  0  0     = output: 8
   --------------
   */

    int y = 4;
    y <<= 2;

    /*
    this example starts with 0 1 0 0 = 4 but since we are shifting 2, 1 will jump 2 to left so 1-0-0-0-0-0

   0  1  0  0 = 4
   <- <- <- <-
   =  =  =  =
   1  0  0  0  0   = output: 16
   --------------
   */

    cout << x << y;
    return 0;
}
