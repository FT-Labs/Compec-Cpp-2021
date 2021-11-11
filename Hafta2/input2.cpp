#include <iostream>
using namespace std;


int main()
{
	// CamelCase ilk harf kucuk, ondan sonra gelen tum kelimelerin harfleri buyuk
	string isimSoyisim;
	// isim_soyisim -> python tarzi

//	cin >> isimSoyisim;
	getline(cin, isimSoyisim); // \n okumayi birakir

	cout << "Isminiz ve soyisminiz: " << isimSoyisim << endl;


	string x;

	cin >> x;

	cout << x << endl;


	return 0;
}
