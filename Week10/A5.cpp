#include <iostream>
#include <cmath>

using namespace std;

struct check
{
	int arr[20];
};

struct Point
{
	int *x = new int;
	int y;
	check c;
};

int main(){
	Point point;
	int n;
	cin >> n;
	*point.x = n;
	point.y = n;
	Point point2;
	point2 = point;
		cout << point.x << ";" << point2.x <<endl;
		cout << point.c.arr << ";" << point2.c.arr << endl;
		return 0;
	
}

