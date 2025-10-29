//
// Created by Arias Arevalo, Carlos on 10/29/25.
//

#include "complex.h"

#include <sstream>

using std::stringstream;

Complex::Complex(double real, double imag): _real(real), _imag(imag) {
}
// Complex::Complex(double real, double imag) {
// 	_real = real;
// 	_imag = imag;
// }

string Complex::ToString() const {
	stringstream ss;
	ss << _real << " " << _imag << "i";
	return ss.str();
}
/*
 * Complex a(1, 2), b(2, 3), c;
 * c.Assign(a.Sum(b));
 */
Complex Complex::Sum(const Complex &rhs) const {
	Complex returnValue;
	returnValue._real = this->_real + rhs._real;
	returnValue._imag = this->_imag + rhs._imag;
	return returnValue;
}

Complex Complex::Sub(const Complex &rhs) const {
	Complex returnValue(_real - rhs._real, _imag - rhs._imag);
	return returnValue;
}

/*
 * Complex x(8, -2), y;
 * y.Assign(x.Minus());   y = -x
 *
 */

Complex Complex::Minus() const {
	Complex returnValue;
	returnValue._real = - this->_real;
	returnValue._imag = - this->_imag;
	return returnValue;
}

const Complex& Complex::Assign(const Complex& rhs) {
	this->_real = rhs._real;
	this->_imag = rhs._imag;
	return *this;
}


