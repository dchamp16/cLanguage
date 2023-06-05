#include <iostream>
using namespace std;

int main()
{
    /* myArray[rows][column]
                --      |
            vertical horizontal
    */
    int myArray[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 9; i++)
    {
        cout << i << "\n";
    }

    return 0;
}