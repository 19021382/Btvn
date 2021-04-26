#include <iostream>
using namespace std;

delete_char(char* s, char c){
	int t;
	while(*(s+t) != '\0') t++;
	for(int i = 0; i<t;){
		if(*(s+i) == c)
		{
			for(int j = i; j<t; j++){
				*(s+j) = *(s+j+1);
		}
		t--;
	}
		else i++;
}
}


int main(){
	char* s = new char[100];
	cin >> s;
	delete_char(s,'a');
	cout << s;
	return 0;
}
