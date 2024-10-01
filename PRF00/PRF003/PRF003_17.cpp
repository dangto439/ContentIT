#include <iostream>
using namespace std;

int main() {
    float a, b;
    
    // Nh?p h? s? a và b t? bàn phím
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;

    // Gi?i phuong trình b?c nh?t ax + b = 0
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh vo so nghiem." << endl;
        } else {
            cout << "Phuong trinh vo nghiem." << endl;
        }
    } else {
        float x = -b / a;
        cout << "Phuong trinh co nghiem x = " << x << endl;
    }

    return 0;
}

