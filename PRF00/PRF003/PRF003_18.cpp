#include <iostream>
using namespace std;

int main() {
    int n;
    int tong = 0; // Bien tong la so le

    // Nhap so nguyên duong n
    do {
        cout << "Nhap so nguyen duong n (n <= 100): ";
        cin >> n;
        if (n <= 0 || n > 100) {
            cout << "Vui long nhap so nguyen duong n <= 100!" << endl;
        }
    } while (n <= 0 || n > 100);

    // Tính tong cac so le 
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { 
            tong += i;
        }
    }

    // Hi?n th? t?ng
    cout << "Tong cac so le tu 1 den " << n << " la: " << tong << endl;

    return 0;
}

