//
// Created by Arias Arevalo, Carlos on 10/29/25.
//

#ifndef COMPLEX_2025_COMPLEX_H
#define COMPLEX_2025_COMPLEX_H

#include <string>

using std::string;

class Complex {
private:
	double _real, _imag;
public:
	explicit Complex(double real = 0.0, double imag = 0.0);
	string ToString()const;
	Complex Sum(const Complex& rhs)const;
	Complex Sub(const Complex& rhs)const;
	Complex Minus()const;
	const Complex& Assign(const Complex& rhs);
};


#endif //COMPLEX_2025_COMPLEX_H