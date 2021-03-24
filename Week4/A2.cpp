#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand((unsigned)time(0));
	int k = rand()%100 + 1;
	int n = rand()%3000 +1;
	int arr[n];
	for(int i = 0; i < n; i++) arr[i] = rand()%100 +1;
	cout << k << " " << n << endl;
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
	return 0;
	}
