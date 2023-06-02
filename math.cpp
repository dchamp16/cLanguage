#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* MAX and MIN */
    int num1, num2;
    num1 = 5;
    num2 = 10;
    cout << "Max: " << max(num1, num2) << " Min: " << min(num1, num2) << endl;
    /* ------------- */

    cout << "SQUAREROOT: " << sqrt(64) << endl; // squareoot
    /* ------------- */
    cout << "ROUND: " << round(2.6) << endl; // round
    /* ------------- */
    cout << "LOGARITHMIC: " << log(2) << endl; // logarithmic
    /* ------------- */
    return 0;
}

/*
Function	Description
acos(x) 	Returns the arccosine of x
abs(x)	    Returns the absolute value of x
asin(x) 	Returns the arcsine of x
atan(x) 	Returns the arctangent of x
cbrt(x) 	Returns the cube root of x
ceil(x) 	Returns the value of x rounded up to its nearest integer
cos(x)	    Returns the cosine of x
cosh(x) 	Returns the hyperbolic cosine of x
exp(x)	    Returns the value of Ex
expm1(x )	Returns ex -1
fabs(x) 	Returns the absolute value of a floating x
fdim(x, y)	Returns the positive difference between x and y
floor(x)	Returns the value of x rounded down to its nearest integer
hypot(x,y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
fma(x,y,z)	Returns x*y+z without losing precision
fmax(x,y)	Returns the highest value of a floating x and y
fmin(x,y)	Returns the lowest value of a floating x and y
fmod(x,y)	Returns the floating point remainder of x/y
pow(x,y)	Returns the value of x to the power of y
sin(x)	    Returns the sine of x (x is in radians)
sinh(x) 	Returns the hyperbolic sine of a double value
tan(x)	    Returns the tangent of an angle
tanh(x) 	Returns the hyperbolic tangent of a double value
*/