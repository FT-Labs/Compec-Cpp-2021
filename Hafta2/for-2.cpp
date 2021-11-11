#include <iostream>
using namespace std;


int main()
{
	// 0 dan sayiya kadar simdi tersini yapicaz
	// Sayidan 0 a kadar yazdiracagiz

	cout << "Lutfen bir sayi girin" << endl;
	int x;
	cin >> x;

	for (int i=x-1; i>=0; i--)
	{
		cout << i << ' ';
	}
	cout << endl;



	return 0;
}
