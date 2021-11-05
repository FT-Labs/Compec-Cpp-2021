#include <iostream>
using namespace std;



int main()
{
	// float 32 bit, double 32 bit, long double 64bit

	float x = 0.2;
	float y = 0.5;
	float z = x + y;

	cout << x*y << endl;
	cout << z << endl;
	cout << y/x << endl;

	int x1 = 10;
	float y1 = 0.2;
	int y2 = 3;

	//cout << x1/y1 << endl;
	cout.precision(15);
	cout << fixed << (float)x1/y1 << endl;
	cout << double(x1)/y2 << endl;

	float zz = 2.0/3-1+1.0/3;

	cout << zz << endl;



	return 0;
}
