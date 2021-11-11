#include <iostream>
using namespace std;

int main()
{
	string a[] = {"asd","123"};

//	cout << a[0] << endl;

	int yaslar[3];

	cout << "Lutfen kullanicilarin yaslarini girin." << endl;

	int x, y, z;
	cin >> x >> y >> z;

	yaslar[0] = x;
	yaslar[1] = y;
	yaslar[2] = z;

	cout << x << ' ' << y << ' ' << z << endl;


	return 0;
}
