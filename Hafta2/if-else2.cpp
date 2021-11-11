#include <iostream>
using namespace std;


int main()
{
	int x;
	cout << "Lutfen bir sayi girin:" << endl;
	cin >> x;

	// Eger sayimiz 10'dan buyukse veya 2 ye esit ise veya -2 ye esit ise "Evet" degil ise "Hayir" yazdirin.

	if (x > 10 || x == 2 || x == -2)
	{
		cout << "Evet" << endl;
	}
	else
	{
		cout << "Hayir" << endl;
	}

	// Uc tane sayimiz olsun. Ilk sayimiz 10'dan buyuk ise VE ikinci sayimiz ucuncu sayimiza esit ise veya 3.sayimiz 1.sayimiza esitse "evet" yazdirin,  degil ise hayir yazdirin.

	int x1, x2, x3;

	cout << "Lutfen 3 tane sayi girin "<< endl;

	cin >> x1 >> x2 >> x3;


	// 11
	if (x1 > 10 && (x2 == x3 || x1 == x3))
	{
		cout << "kosul saglandi" << endl;
	}
	else
	{
		cout << "Kosul saglanamadi" << endl;
	}



	return 0;
}
