#include <iostream>
using namespace std;



void birseylerYap(int a)
{
	cout << a << endl;
	// maindeki 'a' degiskeni ile fonksiyondaki a degiskeni ayni degil. addresslere bakarakda bunu anlayabiliriz
	cout << &a << endl;
}


int main()
{
	int a = 5;
	cout << &a << endl;

	birseylerYap(a);

	// HATALI GOSTERIM, her zaman ayni degisken tipini kullanin
	void* aptr = &a;


	return 0;
}
