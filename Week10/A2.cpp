#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;
};

void passByValue(struct Point point)
{
	cout << "(" << &point.x <<","<< &point.y <<")";
}

void passByReference(struct Point* point)
{
     cout << "(" << &point->x << ", " << &point->y << ")";
}

int main(){
	Point point;
    cin >> point.x >> point.y;
    cout << "(" << &point.x << ", " << &point.y << ")" << endl;
    passByValue(point);
    cout << endl;
    passByReference(&point);
    return 0;
}
