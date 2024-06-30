#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int input,diskon,dibayar;

    cout << "total belanja anda: RP ";
    cin >> input;

    if(input < 100000)
    {
        cout << "Anda tidak mendapatkan diskon !!"<<endl;
    }

    else
    {
        if(input < 500000)
        {
            diskon = input-(0.1*input);
            cout << "Anda mendapatkan diskon 10%"<<endl;
        }

        else
        {
            if(input < 1000000)
            {
                diskon= input-(0.2*input);
                cout << "Anda mendapat diskon 20%"<<endl;
            }
            else
            {
                if(input > 1000000)
                {
                    diskon= input-(0.3*input);
                    cout << "Anda mendapatkan diskon 30%"<<endl;
                }
            }
        }
    }

    cout << "anda harus membayar: "<<diskon;




}
