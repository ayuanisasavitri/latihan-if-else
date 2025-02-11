#include <iostream>
using namespace std;

int main() {
    int bil1,bil2,pilihan;
    double hasil;
    
    cout<<"Masukkan bilangan pertama:";
    cin >> bil1;
    cout<<"Masukkan bilangan kedua:";
    cin >> bil2;
    
    cout<<"Menu Matematika\n";
    cout<<"1.Penjumlahan\n";
    cout<<"2.Pengurangan\n";
    cout<<"3.Perkalian\n";
    cout<<"4.Pembagian\n";
    cout<<"Masuka pilihan:";
    cin>>pilihan;
    
      if (pilihan == 1) {
          hasil=bil1+bil2;
          cout<<"Hasil oprasi tersebut =" << hasil << endl;
      } else if (pilihan == 2 ){
          hasil=bil2-bil1;
          cout<<"Hasil oprasi tersebut =" << hasil <<endl;
      } else if (pilihan == 3){
          hasil=bil1*bil2;
          cout<<"Hasil oprasi tersebut = "<< hasil <<endl;
      } else if  (pilihan == 4){
          hasil=bil1%bil2;
          cout<<"Hasil oprasi tersebut = "<< hasil <<endl;
      }
      return 0;
    }