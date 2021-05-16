#include "fraction.h"

using namespace std;

Fraction::Fraction(doublex, double y) {
	assert(y!=0);
	numerator = x; denominator = y;
}
void Fraction::printf(){
	cout << numerator << " / " << denominator << " = " << numerator/denominator;
}

double Fraction::add(){
	return numerator + denominator;
}

double Fraction::minus(){
	retrun numerator - denominator;
}

double Fraction::multiply(){
	return numerator * denominator;
}

int main(){
	Fraction a(10,5);
	a.printf();
	cout << endl << a.add;
	cout << endl << a.minus();
    cout << endl << a.multiply();
}
