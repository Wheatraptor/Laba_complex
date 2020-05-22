#include "Class.h"

void main() {
	TComplex c1, c2;
	bool boo;
	double phi;
	cin >> c1;
	cout << c1 << endl;
	cin >> c2;
	cout << c2 << endl;
	cout << "c1 + c2 = " << c1 + c2 << endl;
	cout << "c1 - c2 = " << c1 - c2 << endl;
	cout << "c1 * c2 = " << c1 * c2 << endl;
	cout << "c1 / c2 = " << c1 / c2 << endl;

	boo = c1 == c2;
	cout << "c1 = c2? " << boo << endl;

	cout << "c1 modulus is " << c1.mod() << endl;
	cout << "c1^3 is " << c1.pwr(3) << endl;
	cout << "c1^(-3) is " << c1.pwr(-3) << endl;
	cout << "c1^(0.5) is " << c1.pwr(0.5) << endl;
	cout << "c1 trigonometric form is ";
	c1.trg();
	}