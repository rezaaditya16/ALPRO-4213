#include <iostream>
#include <ctime>
using namespace std;

/
int sequentialSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 9, 4, 2, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;


    clock_t start = clock();

    int index = sequentialSearch(arr, size, target);

    clock_t end = clock();

    double timeTaken = double(end - start) / CLOCKS_PER_SEC;

    if (index != -1) {
        cout << "Target di temukan di index ke: " << index << endl;
    } else {
        cout << "Target tidak di temukan " << endl;
    }

    cout << "waktu yang di butuhkan: " << timeTaken << " detik" << endl;

    return 0;
}
