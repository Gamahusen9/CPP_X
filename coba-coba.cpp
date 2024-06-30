#include <iostream>
using namespace std;
int main ()
{
    int input1;

    cout << "inputkan element : ";
    cin >> input1;

    cout << "inputkan "<<input1<< " element"<<endl;


    int angka[input1],minimum;

    for (int a = 0; a < input1; a++)
    {
        cin >> angka[a];
    }

    minimum=angka[0];

    for(int i = 0; i < input1; i++)
    {
        if(angka[i]<minimum)
        {
            minimum = angka[i];
        }
    }
    cout << "angka terkecil adalah: "<<minimum;
    cout << endl;

}
