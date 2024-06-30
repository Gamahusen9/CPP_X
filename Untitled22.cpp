#include <iostream>
#include <string>
using namespace std;
int main (){

string huruf[5][2]={{"1","Tutor-All Progamming"},{"2","Tutorial Bahasa Pemrograman"},
  {"3","Materi Progam C++"},{"4","Array 2 Dimensi"},{"5","Array Multidimensional"}};

  for(int i = 0; i<=4; i++){
 cout<<"\nNilai pada baris ke-"<<i<<endl;
 for(int j = 0; j<=1; j++){
  cout<<"Array ["<<i<<"]["<<j<<"] : "<<huruf[i][j];
  cout<<endl;
 }
 cout<<endl;
}

}
