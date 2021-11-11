#include <iostream>
using namespace std;

int main()
{
	string s = "Compec";
	int i = 0;

	while (1)
	{
		cout << s << endl;
		i++;

		// break loopu kirmak icin kullanilir
		if (i == 100)
		{
			break;
		}
	}

	return 0;
}
