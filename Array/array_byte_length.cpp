#include <iostream>
#include <string>

using namespace std;

int main()
{
  string arrs[3] = { "Peter", "Justine", "Ramos", };
  /* output: Total byte size of arrs: 96 Total byte size of data type string: 32*/
  cout <<"Total byte size of arrs: " << sizeof(arrs) << " Total byte size of data type string " <<sizeof(string) << endl;
  cout << sizeof(arrs) / sizeof(string) << "\n"; //output: 96 / 32 = 3

for (string s:arrs)
    {

      if (s == "Peter")
	{


	  s = "Lauren";
	}
      else if (s == "Justine")
	{
	  s = "Jerei";
	}
      cout << s << endl;
    }


  return 0;
}
