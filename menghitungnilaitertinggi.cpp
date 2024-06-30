#include <iostream>
using namespace std;

int main() {
    int siswa[10], max_num;

    // Memasukkan 10 nilai siswa
    for (int i = 0; i < 10; i++) {
        cout << "Nomor " << i + 1 << ": Masukan nilai siswa: ";
        cin >> siswa[i];
    }

    // Inisialisasi max_num dengan nilai pertama dalam array
    max_num = siswa[0];

    // Mencari bilangan terbesar
    for (int a = 1; a < 10; a++) {
        if (siswa[a] > max_num) {
            max_num = siswa[a];
        }
    }

    cout << "Bilangan terbesar adalah: " << max_num << endl;

    return 0;
}
