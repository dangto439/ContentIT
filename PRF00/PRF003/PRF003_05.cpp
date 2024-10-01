#include <iostream>

using namespace std;

int main () 
{	
	int x = 5;
	
//	if ( x == 1) {
//		cout << "x = 1" << endl;
//	} else if (x == 2) {
//		cout << "x = 2" << endl;
//	} else if (x == 3) {
//		cout << "x = 3" << endl;
//	} else if (x == 4) {
//		cout << "x = 4" << endl;
//	} else {
//		cout << "Unknow" << endl;
//	}
	
	switch (x) {
    case 1:
        cout << "x = 1" << endl;
        break;
    case 2:
        cout << "x = 2" << endl;
        break;
    case 3:
        cout << "x = 3" << endl;
        break;
    case 4:
        cout << "x = 4" << endl;
        break;
    default:
        cout << "Unknown" << endl;
        break;
	}
	
	return 0;
}
