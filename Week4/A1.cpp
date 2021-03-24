#include<iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
        srand((unsigned)time(0));
        int n = rand()%100 +1;
        cout << n << endl;
        int arr[n];
        for(int i = 0; i < n; i++) arr[i] = rand() % 100 +1;
        for(int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
        sort(arr, arr +n);
        for(int i = 0; i < n; i++) cout << arr[i] << " ";
        return 0;
    }
