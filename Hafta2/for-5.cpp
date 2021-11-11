#include <iostream>
using namespace std;

#define SIZE(arr) sizeof(arr)/sizeof(arr[0])
#define INTEGERINADINIDEGISTIRDIM int


//SIZE(arr) -> sizeof(arr)/sizeof(arr[0]) -> copy paste
int main()
{
	int arr[] = {1,2,6,4,2,3,7,3,6,3,8989,3,1,2,3};
	int n = SIZE(arr);

	for (int i=0; i<n; i++)
	{
		if (arr[i] == 3)
			continue;

		cout << arr[i] << ' ';
	}


	return 0;
}
