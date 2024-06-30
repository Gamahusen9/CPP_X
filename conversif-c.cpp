#include <iostream>
using namespace std;
int main (){

int f;

cout << "Iputkan satuan farenheit: "<<endl;
cin >> f;

int c = (f-32) * 5 / 9;

cout << "Dalam satuan celcius: " << c <<endl;

if(c > 300){
    cout << "Kondisi Panas";
}
else if(c < 250){
    cout << "Kondisi dingin";
}

else if(c > 250 && c < 300){
    cout << "Kondisi normal";
} else{

cout << "ERROR";
}




}
