#include <iostream>

using namespace std;

int main () 
{	
	int month = 5;
	
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
        cout << "31 ngay" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
    	cout << "30 ngay" << endl;
        break;
    case 2:
    	cout << "28 ngay" << endl;
        break;
    default:
        cout << "Khong biet" << endl;
        break;
	}
	
	return 0;
}
