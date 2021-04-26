#include <iostream>
using namespace std;

void truncate(char *s, int n)
{
	int t = 0;
	while(*(s+t) != 0) t++;
	if(t>n){
		*(s+n) = '\0';
	}
}
int main(){
	char*s = new char[100];
	cin >> s;
	truncate(s,4);
	cout << s;
	return 0;
}

