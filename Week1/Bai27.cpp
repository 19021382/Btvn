#include <iostream>

using namespace std;

int main(){
	int n;
	while(1){
		cin >> n;
		if(n>0 && n%5 == 0){
			cout << n/5 << endl;
		}
		else if((n<0 && n!=-1)||(n>0 && n%5!=0)){
			cout << -1 << endl;
		}
		else{
			cout << "Bye";
			break;
		}
	}
}
