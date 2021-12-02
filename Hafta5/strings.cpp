#include <iostream>
using namespace std;


int main()
{
	string s = "COMPEC";

	cout << s << endl;

	// Buradan asagisi C stili stringler
	char s1[] = "COMPEC";
	char s2[] = {'C', 'O', 'M', 'P', 'E', 'C', '\0'};

	cout << s1 << endl;

	cout << s2 << endl;

	const char* s3 = "STRING";

	cout << s3 << endl;


	return 0;
}
