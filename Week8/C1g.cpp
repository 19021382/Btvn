#include <iostream>
using namespace std;

void trimleft(char*s)
{
	int t = 0;
	while (*(s+t) != '\0') t++;
	int pos = 0;
	while (*(s+pos) == '_') pos ++;
	for(int i = pos; i<t; i++) *(s+i-pos) = *(s+i);
	*(s + t - pos) = '\0';
}

int main(){
	char*s = new char[100];
	cin >> s;
	trimleft(s);
	cout << s;
	return 0;
}
