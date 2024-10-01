#include <iostream>
using namespace std;

int main() {
    float F, C;

    // Nhap nhiet do F
    cout << "Nhap nhiet do (do F): ";
    cin >> F;

    // Chuyen doi do F sang do C
    C = (5.0 / 9) * (F - 32);

    // Hien thi ket qua
    cout << "Nhiet do tuong ung o do C: " << C << " do C" << endl;

    return 0;
}

