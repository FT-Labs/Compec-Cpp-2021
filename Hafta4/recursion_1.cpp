#include <iostream>
using namespace std;


int faktoriyel(int n)
{
	if (n == 1)
		return n;

	return n * faktoriyel(n-1);
}

int toplam(int n)
{
	if (n == 1)
		return n;

	return n + toplam(n-1);
}

int ikiUzeri(int n)
{
	if (n == 0)
		return 1;

	return 2 * ikiUzeri(n-1);
}


int main()
{
	cout << "Faktoriyelini bulunmasini istediginiz sayiyi girin" << endl;
	int n; cin >> n;

	cout << faktoriyel(n) << endl;
	cout << toplam(n) << endl;
	cout << ikiUzeri(n) << endl;


	return 0;
}
