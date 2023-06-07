#include <iostream>
#include <string>
using namespace std;

// without parameter
void hello()
{
    string answer;         // container for the answer
    cout << " Konichiwa "; // outputs hello/good afternoon
    cin >> answer;         // inputs the answer

    // if your answe is correct
    if (answer == "konichiwa")
    {
        cout << "nihon jin desu\n"; // will output that your japanese
    }
    // if your answer is wrong
    else
    {
        cout << "iee, nihon jin janai desu\n"; // you are not japanese
    }
}

// with parameter
void myName(string name)
{
    cout << name; // outputs the name
}

// default parameter
void naniwaShushinDesuka(string country = "Philippines")
{
    cout << country << " Shushin desu\n"; // outputs the input countr¥
}

// main
int main()
{
    string name;         // container for the name
    cout << "onamaewa "; // outputs what is your name
    cin >> name;         // inputs what ever name you put in
    myName(name);        // called the myName function since myName has parameter string  and in the previous you stores a name string it will output name
    /* ---------  */
    hello(); // called hello function if your answer you will see its answer
    /* ---------  */
    naniwaShushinDesuka();        // will output the default philippines since that is the default parameter
    naniwaShushinDesuka("Nihon"); // wiil output nihon/japan since there is a parameter
    return 0;
}
