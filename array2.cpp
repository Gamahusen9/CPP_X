#include <iostream>
using namespace std;
int main ()
{
    int input;


    string nama[5] ;
    int nilai [5] ;

    cout << "masukan jumlah index = ";
    cin >> input;


    for (int i = 0; i <= input; i++)
    {
        cout << "masukan nama anda = ";
        cin >> nama[i];

        cout << "masukan nlai = ";
        cin >> nilai[i];

    }

    cout << "=====================================" <<endl;
    for (int i = 0; i <= input; i++)
    {
        cout << "nama anda adalah = "<< nama[i]<<endl;
        cout << "nilai anda adalah = "<<nilai[i]<<endl;
    }

}
