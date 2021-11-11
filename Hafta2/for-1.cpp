#include <iostream>
using namespace std;


int main()
{
	cout << "Lutfen bir sayi girin " << endl;
	int sayi;
	cin >> sayi;

	int i;
	for (i = 0; i<sayi; i = i+1)
	{
		cout << i << ' ';
	}
	cout << endl;
	cout << "==================";
	cout << i << endl;
	cout << "==================" << endl;

	// ++, --
	// ++ sayinin degerini bir arttir, yani i = i+1
	// -- sayinin degerini bir azalt, yani i = i-1

	for (int j = 0; j<sayi; j++)
	{
		cout << j << ' ';
	}

	// int forun icinde tanimlanirsa dis kisimda erisilemez
	/*cout << endl;
	cout << "==================";
	cout << j << endl;
	cout << "==================" << endl;*/


	return 0;
}
