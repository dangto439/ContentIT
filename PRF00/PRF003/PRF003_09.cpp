#include <iostream>

using namespace std;

int main () 
{	
	int a, b;
	
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	int ket_qua = a < b ? a : b;
	cout << "Gia tri nho hon la " << ket_qua;
	
	return 0;
}
