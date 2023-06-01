#include <iostream>
#include <string>

int main()
{
/*
data-type   size            description

boolean     1 byte 	        Stores true or false values

char	    1 byte	        Stores a single character/letter/number, or ASCII values

int	        2 or 4 bytes	Stores whole numbers, without decimals

float	    4 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7  decimal digits

double	    8 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
*/

    int nonDec = 10;
    double withDec = 11.1;
    char character = 'P';
    // string hw = "Hello World";
    bool isIt = false; //  false = return 0 if true = return 1

    std::cout << nonDec << withDec << character << std::endl; // output 1011.1P
    std::cout << isIt << std::endl;                           // output 0

    /* checker boolean under the hood integer 0 and 1 true = 1 and false = 0 */
    if (isIt == 1)
    {
        std::cout << "peter";
    }
    else
    {
        std::cout << "justine";
    }

    return 0;
}