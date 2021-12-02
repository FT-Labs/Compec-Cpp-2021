#include <iostream>
#include <random>
#include <algorithm>
#include <time.h>
using namespace std;


int main()
{
	srand(time(NULL));
	cout << "Tas kagit makas oyununa hosgeldiniz" << endl;


	while (true)
	{
		int rastgeleSayi = rand() % 3;

		cout << "Lutfen tercihinizi yapin:\n 1- Tas\n 2- Kagit\n 3- Makas" << endl;

		string kullaniciTercihi;
		cin >> kullaniciTercihi;

		transform(kullaniciTercihi.begin(), kullaniciTercihi.end(), kullaniciTercihi.begin(), ::tolower);


		if (kullaniciTercihi != "tas" && kullaniciTercihi !=  "makas" && kullaniciTercihi !=  "kagit")
		{
			cout << "Lutfen dogru bir secenek yazin." << endl;
			continue;
		}
		else
		{
			// 0 == tas, 1 == makas, 2 == kagit
			if (rastgeleSayi == 0 && kullaniciTercihi == "makas")
			{
				cout << "Bilgisayar tas secmisti. Kaybettiniz." << endl;
			}
			else if (rastgeleSayi == 0 && kullaniciTercihi == "kagit")
			{
				cout << "Bilgisayar tas secmisti. Kazandiniz." << endl;
			}
			else if (rastgeleSayi == 0 && kullaniciTercihi == "tas")
			{
				cout << "Bilgisayar tas secmisti. Berabere." << endl;
			}
			else if (rastgeleSayi == 1 && kullaniciTercihi == "kagit")
			{
				cout << "Bilgisayar makas secmisti. Kaybettiniz." << endl;
			}
			else if (rastgeleSayi == 1 && kullaniciTercihi == "kagit")
			{
				cout << "Bilgisayar tas secmisti. Kazandiniz." << endl;
			}
			else if (rastgeleSayi == 1 && kullaniciTercihi == "makas")
			{
				cout << "Bilgisayar makas secmisti. Berabere." << endl;
			}
			else if (rastgeleSayi == 2 && kullaniciTercihi == "tas")
			{
				cout << "Bilgisayar kagit secmisti. Kaybettiniz." << endl;
			}
			else if (rastgeleSayi == 2 && kullaniciTercihi == "kagit")
			{
				cout << "Bilgisayar kagit secmisti. Berabere." << endl;
			}
			else
			{
				cout << "Bilgisayar kagit secmisti. Kazandiniz." << endl;
			}
		}
	}

	return 0;
}
