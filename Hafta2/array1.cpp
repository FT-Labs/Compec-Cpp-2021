#include <iostream>
using namespace std;

int main()
{
	//			 0  1  2  3  4
	int arr[] = {1, 2, 3, 4, 5};
	int arr2[] = {1, 2, 3, 4, 5};
	float arr1[] = {0.1, 0.2, 0.3, 0.4, 0.5};
	// arrayler statik size lidir.

	cout << arr[0] << endl;

	cout << arr1[0] << endl;

	if (arr[0] == arr2[0])
	{
		cout << "Iki elemanda birbirine esit" << endl;
	}



	return 0;
}
