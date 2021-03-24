#include <iostream>
#include <string>
using namespace std;
void rev(string print, char arr[],int length,int n){
	for(int i = 0; i < n; i++){
		print += arr[i];
		if(length == 2 || length == 3) cout << print << " ";
		if(length <= 2) rev(print,arr,length + 1,n);
		print.erase(print.length() -1);
	}
}

int main(){
	string s;
	cin >> s;
	char arr[s.length()];
	for(int i = 0; i<s.length();i++){
		arr[i] = s[i];
	}
	string print;
	rev(print,arr,1,s.length());
	return 0;
}

