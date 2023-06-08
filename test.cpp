#include <iostream>
#include <string>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// main
int main()
{
    int myArray[] = {1, 2, 3, 4, 5};
    int length = sizeof(myArray) / sizeof(myArray[0]);

    printArray(myArray, length);
    return 0;
}
