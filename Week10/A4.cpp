#include <iostream>

using namespace std;

struct Point
{
	int x;
	int y;
};

int main(){
	Point point;
	point.x = 10;
	point.y = 5;
	cout << &point.x  << ";" << &point.y << endl;
	cout << &point;
	return 0;
}
//Dia chi cua struct point trung voi dia chi cua truong dau tien trong point.
