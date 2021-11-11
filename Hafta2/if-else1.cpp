#include <iostream>
using namespace std;


int main()
{
	cout << "Lutfen yasinizi giriniz:" << endl;

	int yas;
	cin >> yas;

	// <, >, <=, >=, ==
	// =<, => ikiside hatali yazim

	/*if (yas > 17)
	{
		cout << "Araba kullanmaya yasiniz yeterli." << endl;
	}
	else
	{
		cout << "Uzgunum, ehliyet icin yasiniz yeterli degil." << endl;
	}*/


	// 16 yas -> yaninda ehliyetli biri varken araba kullanabiliyor
	// 18 yas -> araba kullanabiliyor
	// 21 yas -> alkol alabiliyor


	// ve -> &&  (Her 2 ifadeninde dogru olmasi lazim)
	// veya -> || (2 ifadeden birinin dogru olmasi yeterli)


	// Ilk gosterim
	/*if (yas < 16)
	{
		cout << "Hic bir sey kullanamiyorsunuz" << endl;
	}
	else if (yas >= 16 && yas < 18)
	{
		cout << "Yaninizda ehliyetli biri varken araba surebilirsiniz" << endl;
	}
	else if (yas >= 18 && yas < 21)
	{
		cout << "Kendi basiniza araba surebilirsiniz" << endl;
	}
	else if (yas >= 21)
	{
		cout << "Hem alkol alabilirsiniz hemde araba kullanabilirsiniz." << endl;
	}*/


	if (yas < 16)
	{
		cout << "Hic bir sey kullanamiyorsunuz" << endl;
	}
	else if (yas < 18)
	{
		cout << "Yaninizda ehliyetli biri varken araba surebilirsiniz" << endl;
	}
	else if (yas < 21)
	{
		cout << "Kendi basiniza araba surebilirsiniz" << endl;
	}
	else
	{
		cout << "Hem alkol alabilirsiniz hemde araba kullanabilirsiniz." << endl;
	}




	return 0;
}
