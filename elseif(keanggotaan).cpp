#include <iostream>
using namespace std;

int main() {
    string keanggotaan;
    int latihan,sisa;

    cout<<"Masukkan keanggotaan:";
    cin >> keanggotaan;
    cout<<"Masukkan berapa kali latihan:";
    cin >> latihan;

    if (keanggotaan == "silver") {
        sisa = latihan - 10;
        cout<<"sisa latihan :" << sisa << "x lagi di bulan ini";
    } else if (keanggotaan == "gold"){
        sisa = latihan - 20;
        cout<<"sisa latihan :" << sisa << "x lagi di bulan ini";
    } else if (keanggotaan == "platinum"){
        cout<<"tidak terbatas untuk latihan";
    }
    return 0;
}