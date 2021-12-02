#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<vector<int>> v;

	v.push_back(vector<int>(3,0));
	v.push_back(vector<int>{1,2,3});
	v.push_back(vector<int>(5, -1));


	/*
	   0 0 0
	   1 2 3
	   -1 -1 -1 -1 -1
	*/

	for (int i=0; i<v.size(); i++)
	{
		for (int j=0; j<v[i].size(); j++)
			cout << v[i][j] << ' ';
		cout << endl;
	}

	vector<vector<int>> v1(5, vector<int>(5, 11));

	for (int i=0; i<v1.size(); i++)
	{
		for (int j=0; j<v1[i].size(); j++)
		{
			cout << v1[i][j] << ' ';
		}
		cout << endl;
	}



	return 0;
}
