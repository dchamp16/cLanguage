#include <iostream>
#include <string>
#include <bitset>

int main()
{
    // Write C++ code here
    // std::cout << "Enter a Character: ";
    // int ascii = getchar();
    // char respond = static_cast<char>(ascii);
    std::cout << "Enter a word: ";
    std::string respond;
    getline(std::cin, respond);

    for (char c : respond)
    {
        std::bitset<8> binary(c);
        std::cout << "Binary representation: " << c << " : " << binary << std::endl;
    }

    return 0;
}