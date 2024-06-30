#include <iostream>
using namespace std;
int main()
{
    int baris;
    int kolom;
    int jumlah;

    cout << "Masukan baris: ";
    cin >> baris;

    cout << "Masukan kolom: ";
    cin >> kolom;

    int arr[baris][kolom];

    for(int i = 0; i < baris; i++)
    {
        for (int a = 0; a < kolom; a++)
        {
            cout << "Masukan data: "<<endl;
            cin >> arr[i][a];

        }
    }


    for(int i = 0; i < baris; i++)
    {
        cout << endl;
        cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+"<<endl;
        for (int a = 0; a < kolom; a++)
        {
            jumlah= arr[i][a]*arr[i][a]*arr[i][a];
            cout << jumlah<< " ";

            if(jumlah%2)
            {
                cout << "ganjil"<<endl;
            }
            else
            {
                cout << "genap"<<endl;
            }

        }
    }




}
