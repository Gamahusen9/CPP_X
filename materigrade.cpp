#include <iostream>
using namespace std;
int main (){

int matematika, pabp, dpk;

cout << "Masukan nilai matematika: "<<endl;
cin >> matematika;

cout << "Masukan nilai pabp: "<<endl;
cin >> pabp;

cout << "Masukan nilai dpk: "<<endl;
cin >> dpk;

int jumlah = matematika + pabp + dpk;
int ratarata = jumlah / 3;

if (ratarata > 80 && ratarata < 100)
{
    cout << "Nilai anda : A";
} else if (ratarata > 75 && ratarata < 80){
    cout << "Nilai anda : B";
} else if (ratarata > 65 && ratarata < 75) {
    cout << "Nilai anda : C";

} else if (ratarata > 45 && ratarata < 65)
{
    cout << "Nilai anda : D";
} else if (ratarata < 45) {
    cout << "Nilai anda : E";
} else {
    cout << "Nilai anda : K";
}

}
