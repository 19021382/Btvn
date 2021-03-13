#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	bool check = false;
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	for(int j = 0; j<i;j++){
		if(arr[j] == arr[i]){
			check = true;
			break;
			}
		}
		if(check) break;
	}
	if(check) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
