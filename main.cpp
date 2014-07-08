//no purpose to create this program just practicing with c++
//written by alaminaji
#include <iostream>
using namespace std;

void printResult( char nam[], int number[]);

int main()
{
  char name[50];
  int numb[10];
  
  cout <<"Silahkan masukkan Nama dan Nomor telfon( pisahkan dengan spasi atau enter):";
  cin >> name >> numb;
  printResult(name, numb);
  
  system("PAUSE");
  return 0;
}

void printResult( char nam[], int number[])
{
  if(number[3] && number[4] == 8)
  {
    cout <<"Selamat anda telah mengisi ulang nomor **** anda.\n";
    cout <<"Datang kembali"<<nam;
  }
}
