#include <iostream>
using namespace std;

void pad_right(char*s, int n)
{
	int t = 0;
	while(*(s+t) != '\0') t++;
	if (t<n) 
	{
		for(int i = t; i<n; i++)
		{
			*(s+i) = '_';
			*(s+n) = '\0';
		}
	}
}
int main(){
	char*s = new char[100];
	cin >> s;
	pad_right(s,10);
	cout << s;
	return 0;
}
