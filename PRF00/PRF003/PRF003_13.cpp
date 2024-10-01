#include <iostream>
#include <math.h>

using namespace std;

int main () 
{	
	int n ;
	cout << "n = ";
	cin >> n;
	int s = 0;
	for (int i = 1 ; i <= n; i++) {
//		s += (i*i);
		s += pow(i, 2); // dung thu vien math
	}
	cout << "s = " << s;

	return 0;
}
