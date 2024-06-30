#include <iostream>
using namespace std;


int main (){
    int j,m,n,totaldet;

    cout << "Masukan jam: "<<endl;
    cin >> j;

    cout << "Masukan menit: "<<endl;
    cin >> m;

    cout << "Masukan detik: "<<endl;
    cin >> n;

    totaldet = j * 3600 + m * 60 + n * 60;

    cout << "Total detik adalah: " << totaldet;

}
