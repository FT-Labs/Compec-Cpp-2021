#include <iostream>
#include <random>
using namespace std;


// 1 < kupkok(n) < sqrt(n) < logn < n < n*logn < n**2 < n**3 ... < 2**n < 3**n .... < n**n (n!)

void bubbleSort(int arr[], int n)
{
	// O(n*n == n**2)
	for (int i=0; i<n-1; i++)
	{
		for (int j=0; j<n-i-1; j++)
		{
			if (arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
		}
	}
}

void bubbleSortRecursive(int arr[], int n)
{
	if (n == 1)
		return;

	for (int i=0; i<n-1; i++)
	{
		if (arr[i] > arr[i+1])
			swap(arr[i], arr[i+1]);
	}

	bubbleSortRecursive(arr, n-1);
}



int main()
{
	srand(1);

	int arr[20];

	for (int i=0; i<20; i++)
		arr[i] = rand() % 20;

	for (int i=0; i<20; i++)
		cout << arr[i] << ' ';

	cout << endl;

	bubbleSortRecursive(arr, 20);

	for (int i=0; i<20; i++)
		cout << arr[i] << ' ';

	cout << endl;


	return 0;
}
