#include <iostream>

using namespace std;

int main () 
{	
	int x = 4;
	int y;
	
//	if (x % 2 == 1) {
//		y = 1;
//	} else {
//		y = 0;
//	}

	y = (x % 2 == 1) ? 1 : 0;
		
	cout << y;
	
	return 0;
}
