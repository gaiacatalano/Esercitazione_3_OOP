#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexNumberLibrary{

struct ComplexNumber
{
    double real;
    double imag;

    ComplexNumber(double a, double b):
            real(a),
            imag(b)
    {
    }

    ComplexNumber() = default;

    ComplexNumber to_conjugate();

};

ostream& operator<<(ostream& os, ComplexNumber &c);

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2);

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2);

}

#endif
