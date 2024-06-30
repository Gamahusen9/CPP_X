#include <iostream>
using namespace std;
int main()
{
    cout << "++++++++++REMED_PRODUKTIF_GAMA HUSEN++++++++++"<<endl<<endl;

    string input; //(+,-,*,/)
    int i;
    int result;
    int angka;
    char pilihan;
    char ulang;



  char nilai;

  cout << "Input Metode Perjumlahan: (+,-,*,/)";
  cin >> nilai;

  switch (nilai) {
  case '+':


    cout << "anda menggunakan metode perjumlahan +" << endl;
    cout << "NOTE: hanya bilangan bulat"<<endl<<endl;
 do {
         cout << "Inputkan Angka : ";
    cin >> angka;

     cout << "inputkan angka yang ditambahkan: ";
     cin >> i;


    result = angka + i;
    cout << "hasil : "<< result<<endl;

     cout << "mau menjumlahkan lagi ? (y/t)";
     cin >> ulang;
     }
     while (ulang!= 't');
     cout << "program selesai.";



    break;


  case '-':


    cout << "anda menggunakan metode perjumlahan -" << endl;
    cout << "NOTE: hanya bilangan bulat"<<endl<<endl;
 do {
         cout << "Inputkan Angka : ";
    cin >> angka;

     cout << "inputkan angka yang dikurangkan: ";
     cin >> i;


    result = angka + i;
    cout << "hasil : "<< result<<endl;

     cout << "mau menjumlahkan lagi ? (y/t)";
     cin >> ulang;
     }


     while (ulang!= 't');
     cout << "program selesai.";



    break;

  case '*':
    cout << "anda menggunakan metode perjumlahan *" << endl;
    cout << "NOTE: hanya bilangan bulat"<<endl<<endl;
    do {
         cout << "Inputkan Angka : ";
    cin >> angka;

     cout << "inputkan angka yang dikalikan: ";
     cin >> i;


    result = angka * i;
    cout << "hasil : "<< result<<endl;

     cout << "mau menjumlahkan lagi ? (y/t)";
     cin >> ulang;
     }
     while (ulang!= 't');
     cout << "program selesai.";
    break;


  case '/':
    cout << "anda menggunakan metode perjumlahan /" << endl;
    cout << "NOTE: hanya bilangan bulat"<<endl<<endl;
    do {
         cout << "Inputkan Angka : ";
    cin >> angka;

     cout << "inputkan angka yang dibagi: ";
     cin >> i;


    result = angka / i;
    cout << "hasil : "<< result<<endl;

     cout << "mau menjumlahkan lagi ? (y/t)";
     cin >> ulang;
     }
     while (ulang!= 't');
     cout << "program selesai.";
    break;


  default:
    cout << "Maaf, format nilai tidak sesuai" << endl;
  }

  return 0;
}








