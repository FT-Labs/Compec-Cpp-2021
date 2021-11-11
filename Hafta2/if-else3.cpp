#include <iostream>
using namespace std;

int main()
{
	float x;
	cin >> x;

	// 0 disindaki tum sayilar true doner.
	if (x)
	{
		cout << "If'e girildi" << endl;
	}
	if (x)
	{
		cout << "If'e girildi" << endl;
	}

	bool dogrumuYanlismi = true;
	dogrumuYanlismi = false;

	cout << dogrumuYanlismi << endl;


	if (dogrumuYanlismi)
	{
		cout << "Dogru" << endl;
	}


	return 0;
}
