#include <iostream>

using namespace std;

int main(){
	int n =100;
	int a[n];
	char b[n];
	for(int i = 0; i<3; i++){
		cout << &a[i] << " ";
	}
	cout << endl;
	for(int i = 0; i<3; i++){
		cout << (void*)&b[i] << " ";
	}
	return 0;
}

// Nhan xet: gia tri dia chi cua cac phan tu mang int co 2 chu so cuoi cach deu nhau 4 don vi, cua mang char la 1 don vi.
