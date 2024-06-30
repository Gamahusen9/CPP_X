#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

int A[3][4];

for (int b = 0; b < 3; b++)
{
    for (int i = 0; i < 4; i++)
    {
        cout << "A["<<b<<"]["<<i<<"] = ";
        cin >> A[b][i];
    }
    cout <<endl;
}

for (int i = 0; i < 3; i++)
{
    for (int a = 0; a < 4; a++)
    {
        cout <<A[i][a]<< " ";

    }
    cout << endl;
}

getch();


}
