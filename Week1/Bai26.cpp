#include <iostream>
#include <algorithm>

using namespace std;

void BubbleSort(int a[], int n){	
	for (int i = 0; i < n - 1; i++){

		for (int j = n - 1; j > i; j--){
		   if(a[j] < a[j-1])
		       swap(a[j], a[j-1]);
}
}
}
int main(){
	int n;
	double avg;
	int max,min,sum;
		cin >> n;
	int num[n];
		for(int i = 0; i<n; i++){
			cin >> num[i];
			sum += num[i];
		}
	avg = sum/n;
	BubbleSort(num,n);
	min = num[0];
	max = num[n-1];
	
	cout << "Average:" << avg << endl;
	cout << "Max:" << max << endl;
	cout << "Min" << min << endl;
	return 0;
}
