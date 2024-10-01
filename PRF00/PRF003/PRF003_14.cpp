#include <iostream>

using namespace std;

int main () 
{	
	int n ;
	cout << "n = ";
	cin >> n;
	unsigned long long s = 1;
	for (int i = 1 ; i <= n; i++) {
		s *= i;
	}
	cout << "s = " << s;

	return 0;
}
