#include <iostream>
#include <cmath>
using namespace std;


void asalCarpanlariBul(int n)
{
	int i = 2;

	while (n != 1)
	{
		if (n % i == 0)
		{
			cout << i << ' ';
			n /= i;
		}
		else
		{
			i++;
		}
	}
}

void asalCarpanlariBulOptimize(int n)
{
	while (n%2 == 0)
	{
		cout << 2 << ' ';
		n /= 2;
	}

	// ornek
	// 3 5 7 9
	// 54
	// 2, 27
	// 3, 27 -> 9, 9/3, 3 3/3
	//for (int i=3; i<sqrt(n)+1; i+=2)
	for (int i=3; i*i<n+1; i+=2)
	{
		while (n % i == 0)
		{
			cout << i << ' ';
			n /= i;
		}
	}

	if (n > 2)
		cout << n;
}


int main()
{
	cout << "Lutfen asal carpanlarinin bulunmasini istediginiz bir sayi girin" << endl;

	int n; cin >> n;


	asalCarpanlariBul(n);

	asalCarpanlariBulOptimize(n);



	return 0;
}
