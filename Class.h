#include <iostream>
#include <cmath>
using namespace std;

class TComplex {
	double re, im;
public:
	TComplex();
	TComplex(double re_);
	TComplex(double re_, double im_);
	TComplex(const TComplex& num);

	void redef(double re_);
	void imdef(double im_);
	double reget();
	double imget();
	double mod();
	TComplex pwr(int n);
	TComplex pwr(double n);
	void trg();


	TComplex operator+(const TComplex& num);
	TComplex operator-(const TComplex& num);
	TComplex operator*(const TComplex& num);
	TComplex operator/(const TComplex& num);
	TComplex& operator=(const TComplex& num);
	bool operator==(const TComplex& num);

	friend ostream& operator<<(ostream& out, const TComplex& c);
	friend istream& operator>>(istream& in, TComplex& c);
};