#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int arr2d[3][3] = {{1, 2, 3},
					  {4, 5, 6},
					  {7, 8, 9}};

	int arr3d[3][3][2] = {{{1,2},
						   {4,5},
						   {6,7,}},
	                       {{8,9},
						    {10,11},
						    {12,13}},
	                       {{14,15},
						    {16,17},
						    {18,19}}};

	cout << arr2d[0][2] << endl;
	cout << arr2d[1][1] << endl;

	/*for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout << arr2d[i][j] << ' ';
		}
		cout << endl;
	}*/

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			for (int k=0; k<2; k++)
			{
				cout << arr3d[i][j][k] << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}


	return 0;
}
