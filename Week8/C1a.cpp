#include <iostream>
using namespace std;

void reverse(char* s){
	int t = 0;
	while(*(s + t) != '\0') t++;
	for(int i = 0; i<t/2; i++){
		char c = *(s + t - i - 1);
		*(s + t - i - 1) = *(s + i);
		*(s + i) = c;
	}
}
int main(){
	char * s = new char[100];
	cin >> s;
	reverse(s);
	cout << s;
	return 0;
}
