#include <iostream>
using namespace std;

int factorial(int x){
	if(x<=2) return x;
	return x*factorial(x-1);
}

int main(){
int n;
cin >> n;
cout << "x = " << n << " at " << &n << endl;
cout << "Factorial of " << n << " is " << factorial(n);
return 0;
}

//Chuoi gia tri in ra man hinh la dia chi lien tiep nhau, stack frame cua ham factorial phu thuoc vao n nhan vao.
