#include <iostream>
using namespace std;


int main()
{
	string s = "Compec2021";

	cout << s.size() << endl;
	cout << s[1] << endl;
	cout << sizeof(s[0]) << endl;

	for (int i=0; i<s.size(); ++i)
	{
		cout << s[i] << endl;
	}

	return 0;
}
