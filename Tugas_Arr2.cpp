#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string huruf[3][4]={{"A","B","C","D"},{"E","F","G","H"},{"I","J","K","L"}};

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int a = 0; a < 4; a++)
        {
            cout <<"|";
            cout << " " <<huruf[i][a]<<" ";
            cout <<"|";
            cout <<"  ";
        }
    }

    cout <<endl;
    cout <<endl;
    cout << "Gama Husen_12209021_pplgx2";
     cout <<endl;
}
