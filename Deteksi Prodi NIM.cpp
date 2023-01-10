//Judul
//Deteksi Prodi
//Husin Fadhil A
//6 sept 2022

#include <iostream>
using namespace std;

//Kamus
char nim;
int angka,tahun,digit;


//Deskripsi
main()
{

    cout << "===============================================" << endl;
    cout << "-----------Masukkan Kode Prodi Anda------------" << endl;
    cout << "         A11                      A21        " << endl;
    cout << "         B11                      B21        " << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "===============================================" << endl;
    cout << "MASUKKAN KODE PRODI                      :";
    cin >> nim >> angka;

    cout << "MASUKKAN TAHUN DITERIMA                  :" ;
    cin  >> tahun;

    cout << "MASUKKAN 5 DIGIT NIM TERAKHIR            :" ;
    cin  >> digit;

    if(nim=='A' && angka==11) {
        cout << "-------------------------" << endl;
        cout << "BERIKUT PRODI ANDA     : ";
        cout << "FIK S1 Teknik Informatika" << endl;
        cout << "NIM ANDA               : ";
        cout << nim << angka << "." << tahun << "." << digit << endl;
        cout << "-------------------------" << endl;
    }
    else if(nim=='B' && angka==11) {
        cout << "-------------------------" << endl;
        cout << "BERIKUT PRODI ANDA     : ";
        cout << "FEB S1 Manajemen" << endl;
        cout << "NIM ANDA               : ";
        cout << nim << angka << "." << tahun << "." << digit << endl;
        cout << "-------------------------" << endl;
    }
    else if(nim=='A' && angka==21) {
        cout << "-------------------------" << endl;
        cout << "BERIKUT PRODI ANDA     : ";
        cout << "FIK D3 Manajemen Informatika" << endl;
        cout << "NIM ANDA               : ";
        cout << nim << angka << "." << tahun << "." << digit << endl;
        cout << "-------------------------" << endl;
    }
    else if(nim=='B' && angka==21) {
        cout << "-------------------------" << endl;
        cout << "BERIKUT PRODI ANDA     : ";
        cout << "FEB D3 Akutansi" << endl;
        cout << "NIM ANDA               : ";
        cout << nim << angka << "." << tahun << "." << digit << endl;
        cout << "-------------------------" << endl;

    return 0;
    }





}
