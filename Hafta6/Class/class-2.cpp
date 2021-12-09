#include <iostream>
using namespace std;


class Employee
{
public:
	int yas;
	string isim, soyisim;

	// 1.yontem: member initializer list
	Employee(string isim, string soyisim, int yas):isim(isim), soyisim(soyisim), yas(yas)
	{}

	void printEmployeeInfo()
	{
		cout << isim << ' ' << soyisim << endl << yas << endl;
	}

	static void printSomething()
	{
		cout << "BIR SEYLER YAPIYORUZ" << endl;
	}
};




int main()
{
	Employee employee = Employee("Ahmet", "Ozdemir", 25);
	// Farkli yazim yontemleri
//	Employee employee1;
	/*employee.isim = "Ahmet";
	employee.soyisim = "Ozdemir";
	employee.yas = 25;*/

	employee.printEmployeeInfo();
	Employee::printSomething();

	return 0;
}
