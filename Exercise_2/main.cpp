#include "src/ComplexNumber.hpp"
#include <iostream>

using namespace std;

int main()
{
    ComplexNumberLibrary::ComplexNumber c;

    cout << "default: " << c << endl;

    ComplexNumberLibrary::ComplexNumber c1(0, -3);

    cout << "c1: " << c1 << endl;

    ComplexNumberLibrary::ComplexNumber c2(1, 9);

    ComplexNumberLibrary::ComplexNumber sum = c1 + c2;

    cout << "sum of c1 + c2: " << sum << endl;

    if(c1==c2)
        cout << "Numbers are equal" << endl;
    else
        cout << "Numbers are not equal" << endl;


    ComplexNumberLibrary::ComplexNumber c1c = c1.to_conjugate();
    ComplexNumberLibrary::ComplexNumber c2c = c2.to_conjugate();

    cout << "Conjugate of c1: " << c1c << endl;
    cout << "Conjugate of c2: " << c2c << endl;

    return 0;

}
