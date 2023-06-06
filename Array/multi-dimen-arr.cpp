#include <iostream>
#include <string>
using namespace std;

int main()
{

    string letters[2][2][2] = {
        {{"A", "B"},
         {"C", "D"}},
        {{"E", "F"},
         {"G", "H"}}};
    /*
    letters[blue][yellow][inside yellow]
    letters[blue][yellow][inside yellow]
    letters[0][0][1] output : B
    letters[1][1][1] output : H
    letters[1][0][0] output : E
    */

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << "LETTERS[" << i << "][" << j << "][" << k << "] = " << letters[i][j][k] << "\n";
            }
        }
    }

    return 0;
}