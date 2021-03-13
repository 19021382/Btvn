#include <iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int len = s.length();
	bool check = true;
	for(int i = 0; i< len/2;i++){
		if(s[i] != s[len - 1 - i]){
			check = false;
			break;
		}
	}
	if(check) cout << "Yes" << endl;
	else cout << "No" << endl;
	
	return 0;
}
