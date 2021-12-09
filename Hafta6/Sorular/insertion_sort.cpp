#include <random>
#include <iostream>
using namespace std;



// 3 2 5 7 8 10
// 2 = key

void insertionSort(int arr[], int n)
{
	for (int i=1; i<n; i++)
	{
		for (int j=i; j>0; j--)
		{
			if (arr[j] < arr[j-1])
				swap(arr[j], arr[j-1]);
		}
	}
}

void insertionSortCool(int arr[], int n)
{
	for (int i=1; i<n; i++)
		for (int j=i; j>0 && arr[j] < arr[j-1]; j--)
			swap(arr[j], arr[j-1]);
}


void insertionSortNormal(int arr[], int n)
{
	for (int i=1; i<n; i++)
	{
		int key = arr[i];
		int j = i-1;

		while (j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}




int main()
{
	srand(1);

	int arr[10];

	int n = 10;

	for (int i=0; i<10; i++)
		arr[i] = rand() % 15;

	for (auto i : arr)
		cout << i << ' ';
	cout << endl;

	insertionSortNormal(arr, n);

	for (auto i : arr)
		cout << i << ' ';
	cout << endl;

	/*for (int i=0, j=10; i<10 && j>0; i++, j--)
	{
		cout << i << ' ' << j << endl;
	}*/


	return 0;
}
