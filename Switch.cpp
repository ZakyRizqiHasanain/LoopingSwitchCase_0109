#include <iostream>
using namespace std;


 float luaspersegipanjang(float a,float b){
    return a * b;
 }

 float luaslingkaran(float a){
    return 3.14 * a *a;
 }

int main() {
int pilihan;
float panjang, lebar, jejari;

do{
    cout << "Menu" << endl;
    cout << "1. Luas Persegi Panjang" << endl;
    cout << "2. Luas Lingkaran" << endl;
    cout << "3. Keluar" << endl;

    cout << "Pilihan (1/2/3) = ";
    cin >> pilihan;
    
    switch (pilihan){
        case 1:
        cout << "Hitung luas persegi panjang"<<endl;
        cout << "Masukkan panjang = ";
        cin >> panjang;
        cout << "Masukkan lebar = ";
        cin >> lebar;
        cout << "Luas persegi panjang = "<< luaspersegipanjang(panjang, lebar)<<endl;
        break;

        case 2:
        cout << "Hitung luas lingkaran"<< endl;
        cout << "Masukkan jari-jari = ";
        cin >> jejari;
        cout << "Luas lingkaran = "<<luaslingkaran(jejari)<<endl;

        case 3:
        break;
    default :
        cout << "Pilihan salah, Pilihan harus di antara 1-3.";
        break;
        }
    }while(pilihan != 3);
}