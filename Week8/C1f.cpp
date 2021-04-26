#include <iostream>
using namespace std;

bool isPalindrome(char* s)
{
	int t = 0;
	while (*(s + t) != '\0') t++;
	for (int i = 0; i < t / 2; i++)
		if (*(s + i) != *(s + t - i - 1)) return false;
	 return true;
}

int main(){
	char* s = new char[100];
	cin >> s;
	cout << isPalindrome(s);
	return 0;
}
