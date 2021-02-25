#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a = (2*n -1);
	int b = (a/2 +1);
	
	for(int i = 1; i<=n;i++)
	{
		for(int j = 1; j<=a; j++)
		{
			if(i==1) cout << "*";
			else if((j<i) || (j>a+1 -i)) cout << " ";
			else cout << "*";
		}
		cout << endl;
	}
	cout << endl;
return 0;
}
