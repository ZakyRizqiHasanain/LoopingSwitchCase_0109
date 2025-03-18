#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main (){
    int n;
    int perulanganWhile =0;
    int perulanganDo = 0;

    cout << "Peulangan for pencacah naik"<< endl;
    for (n=0;n<5;n++){
        cout << "Nilai n = "<< n << " Selamat Datang"<< endl;
    }
    cout << "Nilai n terakhir = "<< n << endl;
    cout << endl;

    cout << "Perulangan for pencacah turun" << endl;
    
    for (n=5;n>0;n--){
    cout << "Nilai n = " << n << " Selamat Datang"<< endl;
    }
    cout << "Nilai n terakhir = "<< n;
    cout << endl;

    cout << "\nPerulangan While" << endl;

    srand(time(0));

    n = rand() % 10;

    cout << "Nilai awal n = "<< n << endl;

    while (n < 7){
        cout << "Nilai n = "<< "Selamat Datang"<< endl;
        n = rand() % 10;
        perulanganWhile++;
    }
    cout << "Jumlah Perulangan = "<< perulanganWhile << endl;
    cout << "Nilai n terakhir = "<< n <<endl;

    cout << "\nNilai awal = "<< n << endl;

    do{
        cout << "Nilai n = "<< n << endl;
        n = rand() % 10;
        perulanganDo++;
    }while (n < 7);
    cout << "Jumlah perulangan = "<<perulanganWhile << endl;
    cout << "Nilai n terakhir = "<< n << endl;
}