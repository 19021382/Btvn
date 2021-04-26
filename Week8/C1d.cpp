#include <iostream>
using namespace std;

void pad_left(char* s, int n)
{
	int t = 0;
	while(*(s+t) != '\0') t++;
	if(t<n)
	{
		for(int i = n-1; i>= n-t; i--) *(s+i) = *(s+i-(n-t));
		for(int i = 0; i<n-t; i++) *(s+i) = '_';
	}
}
int main(){
	char*s = new char[100];
	cin >> s;
	pad_left(s,10);
	cout << s;
	return 0;
}
