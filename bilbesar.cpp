#include <iostream>
using namespace std;

int main (){
    int bil1;
    int bil2;
    int bil3;

    cout << "Bilangan 1: "<<endl;
    cin >> bil1;

    cout << "Bilangan 2: "<<endl;
    cin >> bil2;

    cout << "Bilangan 3: "<<endl;
    cin >> bil3;

    if(bil1 > bil2 && bil1 > bil3){
        cout << "Bilangan terbesar adalah Bilangan 1 : " << bil1;

    } else if(bil2  > bil3) {
        cout << "Bilangan terbesar adalah Bilangan 2 :  "<<bil2;
    } else {
        cout << "Bilangan terbesar adalah Bilangan 3  : "<<bil3;
    }

}


