/* is a header file library that lets us work with input and output objects, such as cout (used in line ). Header files add functionality to C++ programs. */
#include <iostream>

/* means that we can use names for objects and variables from the standard library. */
using namespace std;
// A blank line. C++ ignores white space. But we use it to make the code more readable.

/* This is called a function. Any code inside its curly brackets {} will be executed. */
int main()
{
    /* assign */
    int myNum1 = 15; // every statement end with ;
    int myNum2 = 10;
    int i = 0;
    /* ------- */

    /* cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Hello World!". */
    cout << myNum1 << myNum2 << i << endl; // output: 15100

    return 0; /* ends the main function */
}