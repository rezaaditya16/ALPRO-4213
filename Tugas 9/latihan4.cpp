#include <iostream>
using namespace std;

 struct data{
    std::string nama, jurusan, nim;
    int tahun;
} ;

int main() {
    int j;
    cout <<"masukkan jumlah mahasiswa : ";
    cin >> j;
    data mhs[j];

    for (int i = 0; i < j; i++) {
        cout << "Data mahasiswa ke-" << i + 1 << endl;
        cout << "Masukkan nim: ";
        cin >> mhs[i].nim;
        cout << "Masukkan nama: ";
        cin >> mhs[i].nama;
        cout << "Masukkan jurusan: ";
        cin >> mhs[i].jurusan;
        cout << "Masukkan tahun lulus: ";
        cin >> mhs[i].tahun;
        cout << endl;
    }

    cout << "Data Orang:" << endl;
    for (int i = 0; i < j; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "nim: " << mhs[i].nim << endl;
        cout << "nama: " << mhs[i].nama << endl;
        cout << "jurusan: " << mhs[i].jurusan << endl;
        cout << "tahun: " << mhs[i].tahun << endl;
        cout << endl;
    }

    return 0;
}
