#include <iostream>
using namespace std;

int main(){
	int* p = new int;
int* p2 = p;
*p = 10;
delete p; 
cout << *p2;
delete p2;
	return 0;
}

//Bao loi vi chua cap phat bo nho dong cho p2, can phai cap phat bo nho dong cho p2.
