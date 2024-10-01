#include <iostream>
using namespace std;

int main() {
    int n;
    int tong = 0; 

    
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    
    while (n > 0) {
        tong += n % 10; 
        n /= 10;
    }


    cout << "Tong cac chu so cua so vua nhap la: " << tong << endl;

    return 0;
}

