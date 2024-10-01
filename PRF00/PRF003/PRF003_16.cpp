#include <iostream>

using namespace std;

//break : dung
//continue : tiep theo (bo qua cac lenh)
//goto : nhay den doan lenh mong muon

int main () 
{		
//	for (int i = 1 ; i <= 10; i++) {
//		cout << i << endl;
//		if (i == 5) {
//			break;
//		}
//	}
	
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5) {
//			break;
//		}
//		cout << i << endl;
//		i++;
//	}

//	for (int i = 1 ; i <= 10; i++) {
//		cout << i << endl;
//		if (i == 5) {
//			continue;
//		}
//	}

//	int i = 1;
//	while (i <= 10) {
//		if (i == 5) {
//			i++;
//			continue;
//		}
//		cout << i << endl;
//		i++;
//	}

	int n;
	
	try_again: // label - nhan ( dung de dinh vi )
	cout << "n = ";
	cin >> n;
	
	if (n <= 0 || n % 2 == 0) {
		goto try_again;
	}
	
	cout << "Gia tri cua n la " << n;

	return 0;
}
