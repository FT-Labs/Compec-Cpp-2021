#include <iostream>
using namespace std;



// Operatorler : <<, >>, [], +, -, *, /, ++, --, ||, &&, !, ==
// Bitwise operatorler: &, |, ^, ~  (Bit olarak islem yapmak icin)


// 1 -> (8 bit diyelim) 00000001

// 0010101 & 0000101 -> 0000101
// 0010101 | 0000101 -> 0010101


// % -> modulus


// Alttaki bir global degisken ornegi
int arr[7] = {3, 2, 1, 7, 12, 10, 11};

int main()
{
	for (int i=0; i<7; i++)
	{
		if (arr[i] % 2 != 0)
			cout << arr[i] << ' ';
	}


	cout << endl;


	return 0;
}
