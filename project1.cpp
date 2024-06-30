#include <iostream>
using namespace std;
int main()
{
    int remedial[11];
    int inputremedial;
    string nilai[11]={"Prod","P5tema2", "MTK","SEJARAH", "PABP", "PIPAS","INFORMATIKA" , "B.INDO", "B.SUNDA", "B.INGRRIS", "PKN"  };

    for(int i = 0; i < 11; i++)
    {
        cout << "Masukan Nilai: "<<nilai[i]<<endl;
        cin >> remedial;


    }
    if(75<remedial)
            {
                for (int i = 0; i < remedial; i++)
                {
                    cout << "Nilai anda buruk";
                }
            }

            else
            {
                cout << "anda kompeten";
            }


}
