#include <iostream>
#include <cstdlib>

int main()
{

    std::srand(std::time(NULL));
    int randomNumber = std::rand() % 20;
    std::cout << "Random: " << randomNumber;

    return 0;
}