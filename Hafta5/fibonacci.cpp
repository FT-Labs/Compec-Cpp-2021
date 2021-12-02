#include <iostream>
#include <cstring>
#include <time.h>
using namespace std;

unsigned long long arr[1000];


int fiboRecursive(int n)
{
	if (n <= 1)
		return n;
	return fiboRecursive(n-1) + fiboRecursive(n-2);
}



int fibo(int n)
{
	if (n <= 1)
	{
		arr[n] = n;
		return arr[n];
	}
	if (arr[n] != -1)
		return arr[n];

	// return fibo(arr, n-1) + fibo(arr, n-2); bunun yerine alttakini kullanip arrayin elemanina atiyoruz
	arr[n] = fibo(n-1) + fibo(n-2);
	return arr[n];
}



int main()
{
	//Dynamic programming

	cout << "Kac fibonacci sayisinin bulunmak istedigini giriniz" << endl;
	int n; cin >> n;

	int arr[n];

	memset(::arr, -1, sizeof(::arr));

	clock_t currentTime = time(0);

	/*fibo(n);

	for (int i=0; i<n; i++)
		cout << ::arr[i] << ' ';*/

	fiboRecursive(50);

	cout << "Passed time is: " << ((double)time(0) - (double) currentTime)/CLOCKS_PER_SEC;


	return 0;
}
