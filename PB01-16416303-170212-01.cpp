// NIM/Nama : 16416303
// Nama file: PB01-16416303-170212-01.cpp
// Tanggal  : 12 Febuari 2017
// Deskripsi: program deteksi jenis bilangan
#include <iostream>
using namespace std;

int main(){
    //data
    int input;
    cout << "masukkan nilai N: ";
    cin >> input;
    //cek apakah bilangan berada di dalam batas
    if(input > 100 || input < -100){
        cout << "bilangan berada diluar batas";
    }else{

    //cek apakah bilangan positif
    if(input > 0){
        if(input % 2 == 0){
            cout << "N adalah bilangan genap positif";
        }else{
            cout << "N adalah bilangan ganjil positif";
        };

    //cek apakah bilangan negatif
    }else if(input < 0){
        if(input % 2 == 0){
            cout << "N adalah bilangan genap negatif";
        }else{
            cout << "N adalah bilangan ganjil negatif";
        };
    //jika tidak positif maupun negatif maka netral
    }else{
        cout << "N adalah bilangan netral";
    };
    };
    return 0;
}
