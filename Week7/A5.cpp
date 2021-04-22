#include <iostream>
using namespace std;
char* weird_string(){
	char c[] = "12345";
	return c;
}

int main(){
	char s;
	cin >> s;
	weird_string(s);
	cout << weird_string(s);
}

//truy cap k hop le !
