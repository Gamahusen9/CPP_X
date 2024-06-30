#include <iostream>
using namespace std;

int main()
{

    int input[100],nilai,i;
    float total,rata2;

    //input array
    cout << "masukan element: ";
    cin  >> nilai;

    for(int i = 0; i < nilai; i++)
    {
        cin >> input[i];
    }

    //total array
    total = 0;
    for (int i = 0; i < nilai; i++)
    {
        total= total+input[i];
    }

    //ratarata
    rata2= (total/nilai);

    cout << "NILAI RATA RATA ADALAH: "<<rata2<<endl;
}
