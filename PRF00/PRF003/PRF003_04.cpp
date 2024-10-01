#include <iostream>

using namespace std;

int main () 
{	
	int i = 50;
	
	if (i % 5 == 0) {
		cout << "i chia het cho 5";
	} else if (i % 2 == 0) {
		cout << "i chia het cho 2";
	} else {
		cout << "i khong chia het cho 2 va 5";
	}
	
	return 0;
}
