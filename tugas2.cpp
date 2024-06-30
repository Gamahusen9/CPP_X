#include <iostream>
using namespace std;
int main()
{
    int nilai[100],ac,min_mum,i;

    cout << "input element array =";
    cin >> ac;

    cout << "input "<<ac<< " angka" << endl;

    for (i = 0; i < ac; i++)
    {
        cin >> nilai[i];
    }

    min_mum = nilai[0];
    for (i = 1; i < ac; i++)
    {
        if(nilai[i]<min_mum)
        {
            min_mum = nilai[i];
        }
    }
    cout << "angka terkecil adalah ="<< min_mum;
    cout << endl;
    return 0;
}
