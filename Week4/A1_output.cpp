#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n==1)
	{
		int c;
		cin >> c;
		cout << c;
	}
	else if(n>1)
	{
		int arr[n];
		for(int i = 0; i<n; i++) cin >> arr[i];
		sort(arr, arr+n);
		for(int i = 0; i<n; i++) cout << arr[i] << " ";
	}
	return 0;
}
