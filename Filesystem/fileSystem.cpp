#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string someWord;
    cout << "Write anything: ";
    getline(cin, someWord); // Read a whole line of input from the user

    ofstream writeFile("hw.txt"); // Create an output file stream
    writeFile << someWord;        // Write the input to the file
    writeFile.close();            // Close the file stream

    string textFromFile;

    string ansToRead;
    cout << "Would you like to see the content of the created file? y/n: ";
    getline(cin, ansToRead); // Read user's choice to view file content

    if (ansToRead == "y")
    {
        ifstream readFile("hw.txt");            // Create an input file stream
        while (getline(readFile, textFromFile)) // Read each line from the file
        {
            cout << "\nFile Content: " << textFromFile; // Print the content of the file
        }
        readFile.close(); // Close the file stream
    }
    else
    {
        cout << "Ok, thanks for using the program"; // User chose not to view file content
    }

    return 0;
}
