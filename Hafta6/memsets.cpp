#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	// c stili string, char arr[] sonuna \0
	char arr[500];
	memset(arr, 'a', sizeof(arr));
	//Alttaki onemli
//	arr[499] = '\0';

	cout << arr << endl;



	return 0;
}
