#include <iostream>
#include <cmath>
using namespace std;


string asalmiDegilmi(int n)
{
	if (n == 1)
		return "HAYIR";
	else
	{
		//optimize edilmemis
		//for (int i=2; i<n/2+1; i++)
		/*for (int i=2; i<n/2+1; i++)
		{
			// return edildigi zaman fonksiyon direk biter
			if (n%i == 0)
				return "HAYIR";
		}*/
		// Alttaki yontem en hizli yontem
		// sqrt fonksiyonu ile yontem
		//for (int i=2; i<sqrt(n)+1; i++)
		for (int i=2; i*i<n+1; i++)
		{
			// return edildigi zaman fonksiyon direk biter
			if (n%i == 0)
				return "HAYIR";
		}
	}
	return "EVET";
}


int main()
{
	cout << "Lutfen bir sayi girin" << endl;

	int n;
	cin >> n;

	cout <<  asalmiDegilmi(n) << endl;


	return 0;
}
