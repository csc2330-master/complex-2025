#include "complex.h"

#include <iostream>
// https://github.com/csc2330-master/complex-2025#

using std::cout;
using std::endl;

void Test(bool condition, const char* message);

int main() { // TDD Test Driven Development
	Complex a(2, 3), b, c(4), d(-5, 1);

	// b.Assign(a.Sum(3)); EXPLICIT doesn't work


	Test(a.ToString() == "2 + 3i", "ToString 1");
	Test(b.ToString() == "0", "ToString 2");
	Test(c.ToString() == "4", "ToString 3");
	Test(d.ToString() == "-5 + i", "ToString 4");

	b.Assign(a.Sum(c));
	Test(b.ToString() == "6 3i", "Sum 1");
	Test(a.ToString() == "2 3i", "Sum 2");
	Test(c.ToString() == "4 0i", "Sum 3");

	b.Assign(d.Minus());
	Test(b.ToString() == "5 -1i", "Minus 1");
	Test(d.ToString() == "-5 1i", "Minus 2");


	return 0;
}


void Test(bool condition, const char* message) {
	if (condition) {
		cout << "PASS     " << message << endl;
	}else {
		cout << "FAILED   " << message << endl;
	}
}
