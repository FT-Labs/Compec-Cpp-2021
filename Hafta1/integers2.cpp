#include <iostream>
using namespace std;


int main()
{
	short int x = 32767;

	cout << x << endl;

	x = x + 1;

	// Integer overflow
	cout << x << endl;


	unsigned short int y = 65535;

	y = y + 1;

	cout << y << endl;



	return 0;
}
