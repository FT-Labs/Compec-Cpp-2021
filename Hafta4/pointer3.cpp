#include <iostream>
using namespace std;


// Fonksiyonlarin icine her zaman kopyalari gonderilir.
// Siz degiskeni ne kadar degistirseniz bile, fonksiyonun icinde kalir. Dis kisima hic bir sey yansimaz
void degis(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void degis(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}



int main()
{
	// Fonksiyon 2 eleman alicak (a,b) sonra bunlari a = b ve b = a olacak sekilde degistirecek
	int a = 5, b = 3;

	cout << a << ' ' << b << endl;

	degis(a, b);

	cout << a << ' ' << b << endl;

	int* aptr = &a, *bptr = &b;
	degis(aptr, bptr);

	swap(a, b);

	cout << a << ' ' << b << endl;
	return 0;
}
