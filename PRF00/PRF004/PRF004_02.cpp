#include <iostream>
using namespace std;

int main() {

	const int SO_HANG = 2;
	const int SO_COT = 3;
	
//	int arr[SO_HANG][SO_COT] = {
//		{1,2,3},
//		{4,5,6}
//	};
//	
//	cout << arr[1][1];

	int arr[SO_HANG][SO_COT];
	
	for(int i = 0; i < SO_HANG; i++) {
		for (int j =0; j < SO_COT; j++) {
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0; i < SO_HANG; i++) {
		for (int j =0; j < SO_COT; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
		    
    return 0;
}

