#include <iostream>
using namespace std;

int main(){
	int n = 100;
	
	//Cach 1
	for(int i = 1; i<=n; i++)
	{
		if(i%2==0) cout << i << " ";
	}
	cout << endl;
	
	//Cach 2
	int a = 1;
	while(a<=n)
	{
		if(a%2==0)
		cout << a << " ";
		a++;
	}
	cout << endl;
	
	//Cach 3
	int b = 1;
	do
	{
		if(b%2==0)
		cout << b << " ";
		b++;
	} while(b<=n);
	return 0;
}
