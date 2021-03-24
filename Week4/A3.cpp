#include <iostream>
using namespace std;
int main(){
	int k, n;
	cin >> k >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(k < arr[0] || k > arr[n-1]){
			cout << "Not found";
			return 1;
		}
	else
		{
			int begin = 0, end = n -1;
			int pos = -1;
			while(true)
			{
				if(pos == (begin + end)/2) break;
				pos = (begin + end)/2;
				if(k = arr[pos]) break;
				else if(k < arr[pos]) end = pos;
				else if(k > arr[pos]) begin = pos;
			}
			if(k==arr[pos]){
				begin = pos;
				end = pos;
				while(arr[begin - 1] == k) begin--;
				while(arr[end + 1] == k) end++;
				for(int i = begin; i <=end; i++) cout << i << " ";
			}
			else cout << "Not found";
		}
	}
	return 0;
}
