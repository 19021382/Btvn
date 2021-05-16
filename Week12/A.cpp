#include "fraction.h"

using namespace std;

Fraction::Fraction(double x, double y) {
    assert(y != 0);
    numerator = x; denominator = y;
}

void Fraction::printf() {
        cout << numerator << " / " << denominator << " = " << numerator / denominator; 
}

double Fraction::add() {
    return numerator + denominator;
}

double Fraction::minus() {
    return numerator - denominator;
}

double Fraction::multiply() {
    return numerator * denominator;
}

void get_max(Fraction a) {
    double max; 
    if(a.numerator > a.denominator) max = a.numerator; 
    if(a.denominator > a.numerator) max =  a.denominator;
    if(a.numerator = a.denominator) max = a.numerator;
    cout << endl << max;
}

int main()
{
    Fraction a(5, 10);
    a.printf();
    cout << endl << a.add();
    cout << endl << a.minus();
    cout << endl << a.multiply();
    get_max(a);
    

    return 0;
}
