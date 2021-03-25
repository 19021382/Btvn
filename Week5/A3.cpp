#include <iostream>

using namespace std;

void passByValue(int a){
	cout << "a1 -> " << &a << endl;
}
void passByReference(int& a){
	cout << "a2 -> " << &a << endl;
}
int main(){
	int x;
	cin >> x;
	cout << "x-> " << &x << endl;
	passByValue(x);
	passByReference(x);
	return 0;
}

//Dia chi cua tham so khi truyen bang kieu pass-by-value khac voi dia chi cua doi so.
//Dia chi cua tham so khi truyen bang kieu pass-by-reference giong voi dia chi cua doi so.
