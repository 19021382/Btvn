#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string a,b;
	cin >> a >> b;
	int count = 0;
	int coincide = a.find(b);
	do{
		count++;
	}
	while(coincide >= 0);
	cout << count;
	return 0;
}
