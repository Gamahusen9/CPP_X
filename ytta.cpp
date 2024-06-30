#include <iostream>
using namespace std;

int main () {

    string notelp;
    string op[4] = {"Axis", "Telkomsel", "Indosat", "Smartfren"};
    char opr;
    int nominal[11] = {5000, 10000, 20000, 25000,50000,70000,75000,100000};
    int nomi;
    int hasil;
    int hsln;
    int none [14] = {15000, 30000,35000, 40000,45000,55000,60000,65000,70000,75000,80000,85000,90000,95000};



    cout << "+++++++++TRANSAKSI PEMBAYARAN PULSA MURAH DAN CEPAT++++++++++++"<<endl<<endl<<endl;


    cout << " Harap masukan nomor telepon anda: "<<"+62 ";
    cin >> notelp;

    cout << endl;
    cout << endl;
    cout <<"DAFTAR OPERATOR"<<endl<<endl;
        for(int i = 0; i < 4; i++)
    {
        cout <<i<<" ."<< op[i]<<endl;
    }


    cout << "Masukan Nama Operator Anda: (0/1/2/3) "<<endl;
    cin >> opr;




    switch (opr)
    {

    case '0':

        cout << endl<<endl;
    cout << "Anda Menggunakan Operator "<<op[0]<<endl;
    for (int i = 0; i < 8; i++)
    {
        cout <<"- "<< "RP. "<<nominal[i]<<",00  ";

        if(i < 4)
        {
            cout << "Biaya Admin RP 3000"<<endl;
        } else{
        cout << "Biaya Admin RP 5000"<<endl;
        }
    }
    cout << "NOTE: ISI  0 JIKA NOMINAL TIDAK ADA DI DAFTAR"<<endl;
    cout << "Masukan nominal pulsa yang akan diisi: "<<endl<<"RP. ";
    cin >> nomi;


    if(nomi == 0)
    {


        cout << "Masukan Nominal Yang Diinginkan: RP. ";
        cin >> hsln;




        if(hsln&5000)
        {
            cout << "Anda dikenakan biaya sebesar : RP 4000,00"<<endl<<endl;
            nomi = hsln + 4000;
            hasil = nomi;
            cout << "Nota pembayaran: "<<endl;
            cout << "Nomor Telepon: "<<"0"<<notelp<<endl;
            cout << "Nama Operator: "<< op[0]<<endl;
            cout << "Total Pembayaran: "<<"RP. "<<hasil<<endl;
        }

        return 0;
    }


    if (nomi <= 50000)
    {
        hasil = nomi+3000;
        cout<< endl<<endl;
        cout << "Nota pembayaran: "<<endl;
            cout << "Nomor Telepon: "<<"0"<<notelp<<endl;
            cout << "Nama Operator: "<< op[0]<<endl;
            cout << "Total Pembayaran: "<<"RP. "<<hasil<<endl;
    } else
    {
        if (nomi <= 100000)
        {
            cout << endl <<endl;
            hasil = nomi + 5000;
            cout << "Nota pembayaran: "<<endl;
            cout << "Nomor Telepon: "<<"0"<<notelp<<endl;
            cout << "Nama Operator: "<< op[0]<<endl;
            cout << "Total Pembayaran: "<<"RP. "<<hasil<<endl;


        }
    }

    break;
    case '1':
       cout << "Anda Menggunakan Operator "<<op[1];

    break;

    case '2':
       cout << "Anda Menggunakan Operator "<<op[2];
    break;

    case '3':
       cout << "Anda Menggunakan Operator "<<op[3];
        cout << "Anda Menggunakan Operator "<<op[0]<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "RP. "<<nominal[i]<<",00  ";

        if(i < 4)
        {
            cout << "Biaya Admin RP 3000"<<endl;
        } else{
        cout << "Biaya Admin RP 5000"<<endl;
        }
    }
    cout << "NOTE: ISI  0 JIKA NOMINAL TIDAK ADA DI DAFTAR"<<endl<<endl;
    cout << "Masukan nominal pulsa yang akan diisi: RP. "<<endl;
    cin >> nomi;



    if(nomi == 0)
    {


        cout << "Masukan Nominal Yang Diinginkan: RP. ";
        cin >> hsln;




        if(hsln&5000)
        {
            cout << "Anda dikenakan biaya sebesar : RP 6000,00"<<endl<<endl;
            nomi = hsln + 6000;
            hasil = nomi;
            cout << "Nota pembayaran: "<<endl;
            cout << "Nomor Telepon: "<<"0"<<notelp<<endl;
            cout << "Nama Operator: "<< op[0]<<endl;
            cout << "Total Pembayaran: "<<hasil<<endl;
        }

        return 0;
    }


    if (nomi < 50000)
    {
        hasil = nomi+3000;
        cout << "Nota pembayaran: "<<endl;
        cout << "Nomor Telepon: "<<notelp<<endl;
        cout << "Nama Operator: "<< op[0]<<endl;
        cout << "Total Pembayaran: "<<hasil<<endl;
    } else
    {
        if (nomi < 100000)
        {
            hasil = nomi + 5000;
            cout << "Anda dikenakan biaya admin 5000"<<endl;
            cout << "Nota pembayaran: "<<endl;
            cout << "Nomor Telepon: "<<notelp<<endl;
            cout << "Nama Operator: "<< op[0]<<endl;
            cout << "Total Pembayaran: "<<hasil<<endl;


        }
    }
    break;

    default :
        cout << "Maaf operator tidak tersedia !! atau Keyword anda salah !! ";

    }
    return 0;
}
