#include <iostream>
#include <vector>
using namespace std;

#define SIZE(arr) sizeof(arr)/sizeof(arr[0])


int main()
{
	int arr[] = {1,2,3};
	int twoDimArr[3][3] = {{1,2,3},
						 {4,5,6},
	                     {7,8,9}};

	int s = SIZE(twoDimArr);

	for (int i=0; i < s; i++)
	{
		for (int j=0; j<s; j++)
			cout << twoDimArr[i][j] << ' ';
		cout << endl;
	}

	vector<int> v;

	// a = [], a.append(3)

	v.push_back(10);
	v.push_back(20);

	for (auto i : v)
		cout << i << ' ';


	return 0;
}
