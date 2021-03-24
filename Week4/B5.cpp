#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n -2; i++){
	for(int j = i + 1; i< n -1; j++){
		if(arr[i] + arr[j] == 0){
			cout << arr[i] << " " << arr[j] << endl;
		}
	}
	}
	return 0;
}
