#include <iostream>
using namespace std;


int main()
{
	int sayi;
	cin >> sayi;

	int i = 0;

	// i = i+2 -> i += 2
	while (i<sayi)
	{
		cout << i << ' ';

		i += 2;
	}
	cout << endl;

	string s = "Compec";

	i = 0;

	while (i < s.size())
	{
		cout << s[i] << endl;

		i++;
	}


	return 0;
}
