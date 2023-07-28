#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Tukar elemen terkecil dengan elemen pertama dalam iterasi
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int a[6];
    int total = 6;

    cout << "Masukkan nilai total array (6): ";
    cin >> total;

    cout << "Masukkan " << total << " elemen array: ";
    for (int i = 0; i < total; i++) {
        cin >> a[i];
    }

    cout << "\nData sebelum diurutkan: ";
    printArray(a, total);

    selectionSort(a, total);

    cout << "\nData setelah diurutkan: ";
    printArray(a, total);

    return 0;
}