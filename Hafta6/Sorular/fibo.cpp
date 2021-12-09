#include <iostream>
#include <cstring>
using namespace std;

int memo[5000];


int fibo(int n)
{
	if (memo[n] != -1)
		return memo[n];
	else if (n <= 1)
	{
		memo[n] = n;
		return memo[n];
	}

	memo[n] = fibo(n-2) + fibo(n-1);
	return memo[n];
}





int main()
{
	memset(memo, -1, sizeof(memo));
	int n; cin >> n;

	fibo(n);

	for (int i=0; i<n; i++)
		cout << memo[i] << ' ';


	return 0;
}
