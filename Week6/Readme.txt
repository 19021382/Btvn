A1.
#include <iostream>
using namespace std;
 
void f(int arr[]) {
	cout << &arr << " ";
	cout << &arr[0];
}

int main() {
	int arr[1000];
	cout << &arr << " " << &arr[0] << endl;
	f(arr);
	return 0;
}

//Hai ket qua khac nhau .

A2.
Chay thu bi loi vi ham de quy nay thieu case base.

A3.
Chay thu bi loi vi cong thuc de quy bi sai.

A4.
Chay thu bi loi vi N qua lon nen ham de quy bi qua tai bo nho.

A5.
Thoi gian chay bang vong lap nhanh hon.

A6.
de quy o 1 so lon hon 100 bi tran bo nho.

A7.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void hoanViChuoi(string str,string out) {
	if (str.size() == 0) {
		cout << out << endl;
		return;
	}
	for (int i = 0; i < str.size(); i++) {
		hoanViChuoi(str.substr(1),out + str[0]);
		rotate(str.begin(), str.begin() + 1, str.end());
	}
}
int main() {
	string str = "ABC";
	hoanViChuoi(str,"");
	return 0;
}

A8.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void inMang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}

void HoanViToHop(int a[], int n)
{
    sort(a, a + n);

    do {
        inMang(a, n);
    } while (next_permutation(a, a + n));
}

int main() {
    int a[] = { 10, 20, 30, 40 };
    int n = sizeof(a) / sizeof(a[0]);
    HoanViToHop(a, n);
    return 0;
}



