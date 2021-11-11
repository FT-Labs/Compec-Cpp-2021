#include <iostream>
using namespace std;

int main()
{
	/*cout << "Lutfen isminizi giriniz" << endl;

	// alttaki degisken NULL value
	string isim;

	cin >> isim;

	cout << "Merhaba, " << isim << endl;

	int yas;

	cout << "Lutfen yasinizi girer misiniz?" << endl;

	cin >> yas;

	cout << "Merhaba, " << isim << " ve yasiniz " << yas << endl;
*/
	// float -> 8 bitlik ondalikli sayi
	// double -> 12 bitlik ondalikli sayi
	float pi;

	cout << "Pi'nin kac hanesini biliyorsaniz lutfen girin." << endl;

	cin >> pi;

	cout.precision(8);
	cout << fixed << "Sizin bildiginiz pi'nin degeri " << pi << endl;

	char a;

	cout << "Lutfen herhangi bir karakter giriniz." << endl;

	cin >> a;

	cout << a << endl;




	return 0;
}
