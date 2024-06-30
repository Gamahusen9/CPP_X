#include <iostream>
using namespace std;
int main ()
{
    int input1;
    int input2;

    cout << "Masukan Baris: "<<endl;
    cin >> input1;

    cout << "Masukan Kolom: "<<endl;
    cin >> input2;

    cout <<endl;

    cout << "+=+=+=+ARRAY PERTAMA+=+=+=+"<<endl;
    cout <<endl;

    int arr[input1][input2];
    int arr2[input1][input2];

    for(int a  = 0; a < input1; a++)
    {
        for (int i = 0;  i < input2; i++)
        {
            cout << "Masukan data: "<<endl;
            cin >> arr[a][i];
        }
    }
    cout << "+=+=+=+ARRAY KEDUA+=+=+=+"<<endl;
    cout <<endl;


    for (int i = 0; i < input1; i++)
    {
        for (int a = 0; a < input2; a++)
        {
            cout << "Masukan data: "<<endl;
            cin >> arr2[i][a];

        }
    }


    cout << arr2[i][a];










}
