#include <iostream>
#include <stack>
using namespace std;

int main() {
    int decimal, temp;
    char repeat;

    do {
        cout << "Masukkan angka Decimal: ";
        cin >> decimal;

        cout << "Angka Binary nya adalah: ";

        // Membalik urutan bit menggunakan stack sementara
        stack<int> bits;
        temp = decimal;
        while (temp > 0) {
            bits.push(temp % 2);
            temp /= 2;
        }
        while (!bits.empty()) {
            cout << bits.top();
            bits.pop();
        }
        cout << endl;

        cout << "ingin mengulangi (y/n)";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}