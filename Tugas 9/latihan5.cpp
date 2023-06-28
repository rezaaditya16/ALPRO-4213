#include <iostream>
using namespace std;

struct Sepeda {
    string Merk = "polygon";
    string Type = "Sepeda Gunung";
    int Tahun = 2013;
    string Harga = "2.000.000";
};
struct Sepeda s;
struct Sepeda* ptrSepeda;

int main() {
    ptrSepeda = &s;
    // Mengakses data sepeda menggunakan pointer
    cout << "Merk: " << ptrSepeda->Merk << endl;
    cout << "Type: " << ptrSepeda->Type << endl;
    cout << "Tahun: " << ptrSepeda->Tahun << endl;
    cout << "Harga: " << ptrSepeda->Harga << endl;

    return 0;
}
