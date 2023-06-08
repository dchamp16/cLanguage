#include <iostream>
#include <string>
using namespace std;

/* return a added integer */
int plusFunc(int x, int y)
{
    return x + y;
}

/* return a added double */
double plusFunc(double x, double y)
{
    return x + y;
}

/* return a concatenate string */
string plusFunc(string x, string y)
{
    return x + y;
}

/* MAIN */
int main()
{
    int myNum1 = plusFunc(8, 5);
    double myNum2 = plusFunc(4.3, 6.26);
    string myNum3 = plusFunc("6", "30");
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2 << "\n";
    cout << "String: " << myNum3;
    return 0;
}