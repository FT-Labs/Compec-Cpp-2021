#include <iostream>
using namespace std;



int main()
{
	// Alttaki degisken NULL yani tanimlanmamis durumda
	// 40 bytelik yer kapliyor
	/*int arr1[10];
	// bizim icin hafizada 40 bytelik bir yer ayir, fakat hic bir sey tanimlama
	for (int i=0; i<10; i++)
		cout << arr1[i] << ' ';
	// Ustteki gibi elemanlar atanmadan ulasilmaya calisirsa program beklenmedik cevaplar verebilir
	cout << endl;
	return 0;*/

	// Sadece ilk elemani 1, geri kalan hepsini 0 yapar
	// tum veri tipleri icin gecerli, farketmez int, float, string
	int arr[10] = {1};

	for (int i=0; i<10; i++)
		cout << arr[i] << ' ';
	cout << endl;


	string arrString[3] = {"Compec"};

	for (int i=0; i<3; i++)
		cout << arrString[i] << ' ';

	if (arrString[1] == "")
		cout << "IF IFADEMIZ DOGRU " << endl;

	cout << endl;



	return 0;
}
