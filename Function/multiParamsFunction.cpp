#include <iostream>
#include <string>
using namespace std;

void personInfo(string name, int age, char gender, bool isMarried)
{
    cout << name << " " << age << " " << gender << (isMarried ? " Stay home\n" : " Great your good to date\n");
}

// main
int main()
{
    personInfo("Peter", 32, 'm', true);
    personInfo("Gary", 8, 'f', false);
    personInfo("Danny", 72, 'm', true);
    return 0;
}
