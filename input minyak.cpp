#include <iostream>

using namespace std;


int main (){

int minggu1,minggu2,minggu3,minggu4,dikalikan;


    cout << "Minggu 1 ="<< endl;
    cin >> minggu1;

    cout << "Minggu 2 ="<< endl;
    cin >> minggu2;

    cout << "Minggu 3 ="<< endl;
    cin >> minggu3;

    cout << "Minggu 4 ="<< endl;
    cin >> minggu4;

    dikalikan= minggu1+minggu2+minggu3+minggu4;


    if(dikalikan<20){
        cout << "total ="<<dikalikan<<" liter";
        cout << "(sangat kurang)";
    }

    else {
    if(dikalikan<120){
        cout << "total ="<<dikalikan<<" liter";
        cout << "(kurang)";

    }

        else{

        if (dikalikan<250)
        {
        cout << "total ="<<dikalikan<<" liter";
        cout << "(baik)";
        }
            else{
                    if (dikalikan>250){

                        cout << "total ="<<dikalikan<<" liter";
                        cout << "(sangat baik)";
                    }
            }
        }
    }

}
