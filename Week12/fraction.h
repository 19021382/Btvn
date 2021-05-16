#include <iostream>
#include <assert.h>
using namespace std;

class Fraction {
public:
    double numerator;
    double denominator;
    Fraction(double x, double y);
    void printf();
    double add();
    double minus();
    double multiply();
    friend void get_max(Fraction a);
};
