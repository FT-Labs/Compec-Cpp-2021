#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;

	cout << __builtin_popcount(n) << endl;
	cout << __builtin_parity(n) << endl;


	return 0;
}
