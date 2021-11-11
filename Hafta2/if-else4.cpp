#include <iostream>
using namespace std;


int main()
{
	int x = 5;

	if (x == 5)
	{
		int y = 10;
		x = y;
	}

	cout << x << endl;

	if (x == 5)
	{
		int y = 10;
	}

	// Suslu parantezler icerisinde olusturulan tum degiskenler suslu parantez bittigi
	// an yok edilirler
//	cout << y << endl;


	return 0;
}
