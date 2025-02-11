#include <iostream>
using namespace std;
int main() {
    string warna;
    cout<<"Masukan Warna lampu (merah/kuning/hijau):";
    cin>>warna;
    
      if (warna == "merah") {
          cout<<"Berhenti!"<<endl;
      } else if (warna == "kuning"){
          cout<<"Bersiap!"<<endl;
      } else if (warna == "hijau"){
          cout<<"Jalan!"<<endl;
      } else {
         cout<<"warna tidak valid!"<<endl;
      }
    return 0;
    }
