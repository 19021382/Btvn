#include <iostream>

using namespace std;

void InDiaChiString(string s){
	cout << &s << endl;
}

int main(){
	string str ="";
	cout << &str << endl;
	InDiaChiString(str);
	return 0;
}

// a, mang duoc truyen theo co che pass-by-value.
// b, c++ string duoc truyen theo co che pass-by-value.
