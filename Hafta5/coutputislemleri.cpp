#include <cstdio>
#include <string>
using namespace std;

int main()
{
	// 10 27 a 1.324
	int x, y;
	char c;
	float z;

	string s1 = "COMPEC";


	scanf("%d %d %c %f", &x, &y, &c, &z);

	printf("%f\n%c\n%d\n%d", z, c, x, y);

	printf("%s\n", s1.c_str());


	return 0;
}
