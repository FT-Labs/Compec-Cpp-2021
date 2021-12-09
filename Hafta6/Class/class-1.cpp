#include <iostream>
#include <vector>
using namespace std;


struct Employee
{
	int yas;
	string isim, soyisim;
}; typedef struct Employee Employee;


int main()
{
	Employee employee1;

	employee1.isim = "Ahmet";
	employee1.soyisim = "Ozdemir";
	employee1.yas = 25;

//	cout << employee1.isim << ' ' << employee1.soyisim << endl << employee1.yas << endl;

	Employee employee2;


	cin >> employee2.isim >> employee2.soyisim >> employee2.yas;

//	cout << employee2.isim << ' ' << employee2.soyisim << endl << employee2.yas << endl;

	Employee emp[] = {employee1, employee2};
	vector<Employee> v = {employee1, employee2};

	for (auto i : v)
		cout << i.isim << ' ' << i.soyisim << endl << i.yas;



	return 0;
}
