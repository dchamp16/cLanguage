#include <iostream>
using namespace std;

/* returning to c++ */
int main()
{
    int myNum1 = 15;
    int myNum2 = 10;
    int i = 0;

    if (myNum1 == 10)
    {
        cout << "it is number: " << myNum1 << endl;
    }
    else
    {
        while (i <= 10)
        {

            cout << "no its not number: " << myNum1 << " counting: " << i << endl;
            i++;
        }
    }
    cout << myNum1 + myNum2 << endl;
    cout << "\tHello World!" << endl; // this is just a comment
    cout << "I am learning C++";
    return 0;
}