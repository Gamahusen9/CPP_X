#include <iostream>
using namespace std;

int main()
{

    int arr[5][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15},
    };
    cout << arr[4][0]<<endl;

    for (int i = 0; i < 5; i++)
    {
        for (int a = 0; a < 3; a++)
        {
            cout << arr[i][a]<<endl;
        }
    }
}
