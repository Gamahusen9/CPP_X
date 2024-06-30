#include <iostream>
using namespace std;
int main ()
{
    int sukupertama;
    int beda;
    int jumlahsuku;
    int hasil1;
    int hasil2;
    int hasil3;
    int hasil4;

    cout <<endl;
    cout <<endl;
    cout << "++++++++++++KALKULATOR BARIS ARITMATIKA++++++++++++++"<<endl<<endl;
    cout << "Diketahui: "<<endl;

    cout << "Suku pertama: ";
    cin >> sukupertama;

    cout << "Beda: ";
    cin >> beda;

    cout << "Sn: ";
    cin >> jumlahsuku;
    cout <<endl;
    cout <<endl;

    cout << "Diketahui Rumus Baris Aritmatika= "<<"Sn=n/2(2a+n-1)b"<<endl<<endl;

    cout << "Maka Hasilnya Adalah: "<<endl<<endl;

    hasil1=jumlahsuku-1;
    hasil2=hasil1*beda;
    hasil3=hasil2+sukupertama*2;
    hasil4=hasil3*jumlahsuku/2;

    cout << hasil4<<endl;
}
