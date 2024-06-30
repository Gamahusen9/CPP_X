#include <iostream>

using namespace std;

int main ()
{

  int i,j;

  for (i = 1; i<=10; i++)
  {
      for(j = i; j<= i*i; j+=i)
      {
          cout << j << " ";
      }
      cout << endl;
  }




}
