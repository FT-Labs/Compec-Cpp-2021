#include <iostream>
using namespace std;


int main()
{
	int arr[] = {1,3,2,2,1,1,4,6,7,1,1,2,3,4,5,7,78,10};

	// sizeof -> degiskenin BYTE olarak boyutunu soyler (1 byte = 8 bit)
	int x = 32;

	cout << sizeof(x) << endl;

	char c = 'A';

	cout << sizeof(c) << endl;


	cout << sizeof(arr) << endl;

	int n = sizeof(arr)/sizeof(arr[0]);

	cout << n << endl;

	for (int i=0; i<n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	// arr[-1] -> son elemana ulasirsiniz. C++ ta kesinlikle yok
	// arr[sizeof(arr)/sizeof(arr[0]) - 1] -> son elemani verir

	cout << arr[n-1] << endl;


	return 0;
}
