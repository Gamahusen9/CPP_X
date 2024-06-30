#include <iostream>
using namespace std;

struct jam{
    int d, m, j;
};

int main(){
    jam waktu;
    int detik;

    cout << "Masukkan detik : "; cin >> detik;

    waktu.j = detik/3600;
    detik = detik - (waktu.j * 3600);
    waktu.m = detik/60;
    waktu.d = detik - (waktu.m * 60);

    cout << waktu.j << " jam " << waktu.m << " menit " << waktu.d << " detik" << endl;

    return 0;
}
