#include <iostream>
using namespace std;


int main()
{
	int* xptr;
	if (1)
	{
		// heap memoryde olusturuldu
		int* x = new int(10);
		// xptr a heap memoryde olusturdugumuz degiskenin addresini verdik
		xptr = x;
	}


	cout << *xptr << endl;
	// Dogru gosterim
	delete xptr;

	return 0;
}
