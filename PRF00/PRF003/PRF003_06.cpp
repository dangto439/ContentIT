#include <iostream>

using namespace std;

int main () 
{	
	int day = 5;
	
	switch (day) {
	case 0:
        cout << "Hom nay la chu nhat" << endl;
        break;
    case 1:
        cout << "Hom nay la thu hai" << endl;
        break;
    case 2:
        cout << "Hom nay la thu ba" << endl;
        break;
    case 3:
        cout << "Hom nay la thu tu" << endl;
        break;
    case 4:
        cout << "Hom nay la thu nam" << endl;
        break;
    case 5:
        cout << "Hom nay la thu sau" << endl;
        break;
    case 6:
        cout << "Hom nay la thu bay" << endl;
        break;
    default:
        cout << "Khong biet" << endl;
        break;
	}
	
	return 0;
}
