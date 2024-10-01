#include <iostream>
using namespace std;

int main() {
//    int numbers[5] = { 1, 2, 3, 4, 5};
	int numbers[5];
	
//	cin >> numbers[0];
//	cin >> numbers[1];
//	cin >> numbers[2];
//	cin >> numbers[3];
//	cin >> numbers[4];
//	
//	cout << "numbers[0] = " << number[0] << endl;
//	cout << "numbers[1] = " << number[1] << endl;
//	cout << "numbers[2] = " << number[2] << endl;
//	cout << "numbers[3] = " << number[3] << endl;
//	cout << "numbers[4] = " << number[4] << endl;

	for (int i = 0; i < 5; i++) {
		cout << "numbers["<<i<<"] = ";
		cin >> numbers[i];
	}
	
	for (int i = 0; i < 5; i++) {
		cout << "numbers["<<i<<"] = " << numbers[i] << endl;
	}
	    
    return 0;
}

