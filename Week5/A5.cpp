#include <iostream>

using namespace std;

int main(){
	int i = 2;
	int &k = i;
	cout << &k << endl;
	cout << &i;
	//Bien tham chieu va bien thuong deu chieu toi 1 bien trong bo nho.
	
	int&c; //doan nay loi.
	//Khong the khai bao 1 tham chieu khi chua chieu den bien thuong
	
	int j = 3;
	int &k = j; // doan nay bi loi do khong the tham chieu toi 1 bien khac dich ban dau cua no.
	return 0;
}
