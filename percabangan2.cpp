#include <iostream>

using namespace std;

int main()
{
    int biaya ,total;

    cout << "pengeluaran anda";
    cin >> biaya;

    if(biaya>5000){
         total =biaya-1000;
          cout << "anda mendapatkan potongan sebesar ="<< endl;
          cout << "biaya awal="<<biaya<<endl;

    }

    else {

        total +biaya;
        cout << "anda tidak mendapatkan potongan harga x"<<endl;

    }
    cout << "potongan harga ="<<total<<endl;
    cout << "total="<<total<<endl;
}
