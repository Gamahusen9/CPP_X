  #include <iostream>
using namespace std;
int main ()
{
    int input1;
    int input2;

    cout << "masukan input pertama: ";
    cin >> input1;

    cout << "masukan input kedua: ";
    cin >> input2;

    //ARRAY MULTIDIMENSI
    int siswa[input1][input2];

    //perulangan untuk menginput data
    for(int i = 0; i < input1; i++)
    {
        for (int a = 0; a < input2; a++)
        {
            cout << "masukan data: "<<endl;
            cin >> siswa[i][a];
        }
    }

    cout<<"========================";
    cout << endl;

    //perulangan untuk menampilkan data
    for (int i = 0; i < input1; i++)
    {
        cout << endl;
        for (int a = 0; a < input2; a++)
        {
            cout << siswa[i][a]<<endl;        }
    }

    //bisa diartikan

    //int siswa[6][2] ={{1,2}{3,4},{5,6},{7,8},{9,10},{11,12}};

    //for (int i = 0;  i < 6; i++)
    //{
    //for(int a = 0; a < 2; a++)
    //{
        //cout << siswa [i][a];
    //}
    //}
}
