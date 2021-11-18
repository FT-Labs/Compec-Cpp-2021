#include <iostream>
#include <numeric>
using namespace std;


#define SIZE(arr) sizeof(arr)/sizeof(arr[0])


// Arrayi fonksiyona yollarken kesinlikle boyutunuda ekstra parametre olarak yollayin
int topla(int arr[], int n)
{
	// Arrayler fonksiyon icinde olsa bile bir elemani degistirildiginde main fonksiyondada o eleman degisir
	//arr[0] = -100000;

	/*for (int i=0; i<n; i++)
		total += arr[i];*/

	int total = 0;

	// Accumulate fonksiyonu tum elemanlari toplar
	total = accumulate(arr, arr+n, 0);

	return total;
}


int main()
{
	// Array olusturucaz, fonksiyonumuz arrayin tum elemanlarinin toplamini donecek

	// Array, primitive (gelismemis) class kullanmaz
	int arr[] = {2, 1, 3, 8, 11, 12, 18, 21, 23};

	cout << topla(arr, SIZE(arr)) << endl;

	return 0;
}
