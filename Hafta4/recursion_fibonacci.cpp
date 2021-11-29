#include <iostream>
using namespace std;


int fibo(int n)
{
	if (n <= 1)
		return n;

	return fibo(n-2) + fibo(n-1);
}


int main()
{
	cout << "Bulunmasini istediginiz fibonacci sayisini girin" << endl;
	int n; cin >> n;

	cout << fibo(n) << endl;


	return 0;
}
