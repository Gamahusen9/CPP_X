#include <iostream>
using namespace std;
int main (){

    int convers, detik, j, m ,n, hsl1 ,hsl2, hsl3;

    cout << "Inputkan detik: "<<endl;
    cin >> detik;

    j = detik / 3600;
    hsl1 =  detik - j * 3600;

    m = hsl1 / 60;
    hsl2 = hsl1 - m * 60;

    n = hsl2;



    cout << "Maka total detik yang di konvers menjadi: "<< j << "jam" << m << "menit" << n <<"detik";


}

