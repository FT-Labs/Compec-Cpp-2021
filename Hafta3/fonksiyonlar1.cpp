#include <iostream>
using namespace std;



int topla(int x, int y)
{
	float z = x + y + 0.99;

	//Parametre otomatik olarak inte donusturulur
	// yani return (int) z olarak degistirilir
	return z;
}

float topla2(float x, float y)
{
	// Burada donusturme yapilir, return de yapilmaz
	int z = x + y + 0.99;

	return z;
}

// void -> NON-TYPE

int main()
{
	int a, b;

	cout << "Lutfen iki sayi girin" << endl;
	cin >> a >> b;


	// Fonksiyon yazacagiz. Kullanicidan iki sayi alip bunlarin toplamini donecek

	//cout << topla(x, y) << endl;;
	cout << topla(a, b) << endl;
	cout << topla2(1.1, 5.5) << endl;



	return 0;
}
