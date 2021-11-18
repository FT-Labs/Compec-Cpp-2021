#include <iostream>
#include <algorithm>
using namespace std;

int x = 13;


void biseylerYazdir()
{
	int x = 199;

	cout << x << endl;
	//Global olani bastirmak yada eristirmek istiyosan
	cout << ::x << endl;
}


int main()
{
	string isim;
	cin >> isim;

	// islower, isupper

	// Iki farkli gosterim
//	if (isupper(isim[0]))
	if (!islower(isim[0]))
		cout << "Ismi dogru girdiniz, isminiz \n" << isim << endl;
	else
		cout << "Lutfen isminizi bas harfi buyuk olacak sekilde girin" << endl;


	/*isim[0] = toupper(isim[0]);

	cout << isim << endl;*/


	// :: 'nin anlamindan bahsedelim
	transform(isim.begin(), isim.begin()+5, isim.begin(), ::toupper);
//	transform(isim.begin(), isim.end(), isim.begin(), ::tolower);


	cout << isim << endl;

	biseylerYazdir();



	return 0;
}
