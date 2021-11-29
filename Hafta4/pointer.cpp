#include <iostream>
using namespace std;


int main()
{
	int x = 5;

	// STACK MEMORY
	int* xptr = &x;

	cout << xptr << endl;
	// * -> dereference operator
	// & -> address operator
	cout << *xptr << endl;
	cout << &xptr << endl;

	int** xptrptr = &xptr;

	cout << xptr << endl;
	cout << *xptrptr << endl;

	// new kelimesi gordugunuz her yer heap memory

	int y = 10;
	int* yptr = new int;
	*yptr = 10;

	cout << *yptr << endl;

	delete yptr;



	return 0;
}
