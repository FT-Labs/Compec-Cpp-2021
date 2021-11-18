#include <iostream>
using namespace std;


// Palindrome string -> bastan ve sondan okunusu ayni olan stringlere palindrome string denir

// Ornek : aba, abcba, aabb

bool isPalindrome(string s)
{
	// stringin boyutunun yarisini alin. sol yari ve sag yariyi teker teker kiyaslayarak devam et


	for (int i=0; i<s.size()/2; i++)
	{
		// abcba -> 0, boyut = 5, 0 - size-i-1 -> 5-0-1 -> 4
		// 0 4
		// 1 3
		if (s[i] != s[s.size()-i-1])
			return false;
	}

	return true;
}

// aabbc
// abcba

int main()
{
	cout << "bakilmasi istenen stringi girin" << endl;

	string s; cin >> s;


	cout << isPalindrome(s) << endl;


	return 0;
}
