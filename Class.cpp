#include "Class.h"

TComplex::TComplex(){
	re = 0;
	im = 0;
}

TComplex::TComplex(double re_){
	re = re_;
	im = 0;
}

TComplex::TComplex(double re_, double im_){
	re = re_;
	im = im_;
}

TComplex::TComplex(const TComplex& num){
	re = num.re;
	im = num.im;
}

void TComplex::redef(double re_){
	re = re_;
}

void TComplex::imdef(double im_){
	im = im_;
}

double TComplex::reget(){
	return re;
}

double TComplex::imget(){
	return im;
}

double TComplex::mod(){
	return sqrt(im * im + re * re);
}

TComplex TComplex::pwr(int n){
	TComplex res = *this;
	if (n != 0){
		int i = 0;
		for (i = 0; i < abs(n) - 1; i++){
			res = res * *this;
		}
		if (n < 0) {
			res = TComplex(1) / res;
		}
	}
	return res;
}

TComplex TComplex::pwr(double n){
	TComplex res;
	double phi, z = mod();
	phi = atan(im / re) + acos(-1.0) * abs(((re / (abs(re)) - 1) / 2));
	res.re = pow(z, n) * cos(phi * n);
	res.im = pow(z, n) * sin(phi * n);
	return res;
}

void TComplex::trg(){
	TComplex res;
	double phi, z = mod();
	phi = atan(im / re) + acos(-1.0) * abs(((re / (abs(re)) - 1) / 2));
	cout << z << "(cos(" << phi << ") + i*sin(" << phi << "))" << endl;
}

TComplex TComplex::operator+(const TComplex& num){
	TComplex res;
	res.re = re + num.re;
	res.im = im + num.im;
	return res;
}

TComplex TComplex::operator-(const TComplex& num){
	TComplex res;
	res.re = re - num.re;
	res.im = im - num.im;
	return res;
}

TComplex TComplex::operator*(const TComplex& num){
	TComplex res;
	res.re = re * num.re - im * num.im;
	res.im = re * num.im + im * num.re;
	return res;
}

TComplex TComplex::operator/(const TComplex& num){
	TComplex res;
	double den = num.re * num.re + num.im * num.im;
	res.re = (re * num.re + im * num.im) / den;
	res.im = (im * num.re - re * num.im) / den;
	return res;
}

TComplex& TComplex::operator=(const TComplex& num){
	re = num.re;
	im = num.im;
	return *this;
}

bool TComplex::operator==(const TComplex& num){
	return (re == num.re) && (im == num.im);
}

ostream& operator<<(ostream& out, const TComplex& num){
	if (num.im >= 0)
		out << num.re << '+' << num.im << 'i';
	else
		out << num.re << num.im << 'i';
	return out;
}

istream& operator>>(istream& in, TComplex& num){
	in >> num.re >> num.im;
	return in;
}