    #include <iostream>
using namespace std;

int Penjumlahan(int x, int y) {
return x + y;
}

int Pengurangan(int x, int y){
return x - y;
}

int Total(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;

}

double RataRata(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    double rata_rata = (double) total / size;
    return rata_rata;
}
int main() {

    int a,b,i;

    int arr[] = {1, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);


    cout << "\nMasukan Nilai pertama "; cin >> a;
    cout << "\nMasukan Nilai kedua: "; cin >> b;
    cout << "\n---------------------------------------------------------------------------";
    cout << "\nHasil Penjumlahan dari Nilai pertama  dan Nilai kedua  adalah " << Penjumlahan(a, b) << endl;
    cout << "\nHasil Pengurangan dari Nilai pertama  dan Nilai kedua adalah " << Pengurangan(a, b) << endl;
    int tot = Total(arr,size);
    double rata_rata = RataRata(arr, size);
    cout << "\nHasil penjumlahan dari nilai array[1,3,4,5] Adalah: " << tot << endl;
    cout << "\nhasil rata-rata dari nilai array [1,3,4,5] adalah: " << rata_rata << endl;

return 0;
}
