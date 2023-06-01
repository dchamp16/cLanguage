#include <iostream>
#include <string>
using namespace std;

int main()
{
    /* declared answer to empty string & question to What is your name */
    string answer, question = "What is your name? ";
    cout << question; // outputs what is your name

    cin >> answer; // asking for input and store it to answer
    /* declared greeting to "hello " and what ever name you input */
    string greeting = "hello " + answer;

    /* declared greeting to "who are you? " and what ever name you input */
    string wrongName = "who are you? " + answer;

    if (answer == "peter" || answer == "justine") // if the input is peter or justine
    {
        cout << greeting; // will initiate hello peter or justine
    }
    else // if either the 2 names
    {
        cout << wrongName; // will initiate who are you? what ever the name
    }

    return 0; // end
}