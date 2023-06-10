#include <iostream>
#include <string>
using namespace std;

// int recurse(int num)
// {
//     if (num >= 5)
//     {
//         return num;
//     }
//     else
//     {
//         num++;
//         cout << num << endl;
//         recurse(num);
//     }
// }

void loopFoo(int num)
{
    int i = num;
    while (i <= 5)
    {

        i++;
        cout << i << endl;
    }
}

int main()
{
    loopFoo(0);
    return 0;
}