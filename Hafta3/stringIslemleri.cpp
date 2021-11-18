#include <iostream>
using namespace std;



int main()
{
	// Compec 2021 -> getline ile okumak gerekli
	string isim2;
	cin >> isim2;
	// Inputtan sonra gelen ilk karakteri discard et
	cin.ignore();

	string isim;
	getline(cin, isim); // \n


	cout << isim2 << endl;
	cout << isim << endl;


	return 0;
}
