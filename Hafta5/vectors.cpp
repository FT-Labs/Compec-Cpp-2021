#include <iostream>
#include <vector>
using namespace std;


void printElements(int arr[])
{
	// YANLIS GOSTERIM, int* in sizeini geri doner
	int sze = sizeof(arr) / sizeof(arr[0]);

	cout << sze << endl;

}

void printElements(vector<int>& v)
{
	for (int i=0; i<v.size(); i++)
		cout << v[i] << ' ';

	v[0] = 15;

	cout << endl;
}





int main()
{
	/*vector<int> v;

	cout << v.size() << endl;


	v.push_back(10);
	v.push_back(20);


	cout << v[0] << endl;
	cout << v[1] << endl;

	cout << v.size() << endl;
*/

	vector<int> v1(10, -5);

	/*for (auto i : v1)
		cout << i << ' ';

	cout << endl;*/

	/*for (int i=0; i<v1.size(); i++)
		cout << v1[i] << ' ';
	cout << endl;*/

	int arr[] = {1, 3, 5, 7};

	printElements(v1);

	cout << v1[0] << endl;




	return 0;
}
