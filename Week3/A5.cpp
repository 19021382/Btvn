#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int n = 30;
int a[n];

int main(){
srand(time(NULL));
for(int i = 1; i<=n;i++){
	a[i] = rand() %100;
}
for (int i=1; i<=n-1; i++)
        for (int j=i+1; j<=n; j++)
            if (a[i]>a[j]) swap(a[i],a[j]);

for (int i=1; i<=n; i++) cout << a[i] << " ";
return 0;
}
