#include <iostream>
using namespace std;

int main() {
    int v, loop, in, res;


    cout << "Tambah    (1)" << endl;
    cout << "Kali      (2)" << endl;
    cout << "Kurang    (3)" << endl;
    cout << "Pembagian (4)" << endl;
    cout << "Pilih metode yang ingin digunakan: "; cin >> in;

    cout << "Masukan jumlah pengulangan yang ingin dilakukan: "; cin >> loop;

    if (in = 1) {
        for (int i = 1; i <= loop; i++) {
            cout << "Masukan angka ke " << i << ": "; cin >> v;
            res = res + v;
        }
        cout << res;

    }

}
