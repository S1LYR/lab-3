#ifndef FRACTION_H
#define FRACTION_H

#include <string>
#include <iostream>
#include <numeric>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;


    void reduce();

public:

    Fraction(int num, int denom);


    string toString() const;

    Fraction sum(const Fraction& other) const;
    Fraction minus(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;
    Fraction sum(int integer) const;
    Fraction minus(int integer) const;
    Fraction multiply(int integer) const;
    Fraction divide(int integer) const;
};

#endif  // FRACTION_H
