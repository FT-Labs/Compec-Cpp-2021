#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int> v = {1, 3, 8};

	for (auto i : v)
		cout << i << ' ';


	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << ' ';
	}

	string s = "COMPEC";

	for (string::iterator it = s.begin(); it != s.end(); it++)
		cout << *it;


	return 0;
}
