#include <iostream>
using namespace std;

int main()
{
    int x = 2; // 0010
    x &= 6;    // 6 = 0110
               /*
               0010 = 2
               0110 = 6
           
               2 &= 6
           
               0010
               0110
               compare from right to left
               0 0 1 0 <- 2
               & & & &
               0 1 1 0 <- 6
               = = = =
               0 0 1 0 <-2
           
           
               answer: 0010 = 2
               */

    cout << x; // 0010 = 2
    return 0;  // end
}