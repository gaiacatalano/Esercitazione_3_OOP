#include "ComplexNumber.hpp"
#include <limits>

namespace ComplexNumberLibrary{

ostream& operator<<(ostream& os, ComplexNumber &c)
{
    double ep = 1.11e-16;

    if ( (c.imag-0) < ep && (c.imag-0) > -ep && (c.real-0) < ep && (c.real-0) > -ep )
        os << 0;
    else if ( (c.real-0) < ep && (c.real-0) > -ep )
        os << c.imag << "i";
    else if ( (c.imag-0) < ep && (c.imag-0) > -ep)
        os << c.real;
    else if( (c.imag-0) > ep)
        os << c.real << "+" << c.imag << "i";
    else
        os << c.real << c.imag << "i";
    return os;
}

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)
{
    double parte_intera = c1.real + c2.real;
    double parte_immaginaria = c1.imag + c2.imag;
    ComplexNumber c(parte_intera, parte_immaginaria);
    return c;
}

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2)
{
    double eps = 1.11e-16;
    return( abs(c1.real-c2.real) < eps && abs(c1.imag-c2.imag) < eps );
}

ComplexNumber ComplexNumber::to_conjugate()
{
    ComplexNumber c(real, -imag);
    return c;
}

}
