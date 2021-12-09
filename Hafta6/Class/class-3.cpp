#include <iostream>
using namespace std;



class Employee
{
	int yas;
	string isim, soyisim;


	public:

	Employee(string isim, string soyisim, int yas):isim(isim), soyisim(soyisim), yas(yas)
	{}


	void printSomething()
	{
		cout << isim << ' ' << soyisim << endl << yas << endl;
	}

	// Getter ve Setterlar
	string getIsim() const
	{
		return isim;
	}

	// 1.yontem
	/*void setIsim(string yeniIsim)
	{
		isim = yeniIsim;
	}*/

	void setIsim(string isim)
	{
		this->isim = isim;
	}

	void setSoyisim(string soyisim)
	{
		this->soyisim = soyisim;
	}

	string setIsim() const
	{
		return isim;
	}

};


int main()
{
	Employee employee = Employee("Ahmet", "Ozdemir", 25);



	return 0;
}
