#include <iostream>
using namespace std;

int main ()
{
    int p;
    for (int i = 0; i <= 50; i++)
    {
        if (i %2 == 0)
        {
            cout << i << "genap"<<endl;
        } else {
        cout << i << "ganjil"<<endl;
        }
    }
}
