#include <iostream>
using namespace std;

void f(int arr[]) {
	cout << &arr << " ";
	cout << &arr[0];
}

int main() {
	int arr[1000];
	cout << &arr << " " << &arr[0] << endl;
	f(arr);
	return 0;
}

//Hai ket qua khac nhau .
