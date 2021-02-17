#include "komplex.h"

Komplex::Komplex(double Re, double Im){
	new_Re = Re;
	new_Im = Im;
}

double Komplex::getIm(){
	return new_Im;
}

double Komplex::getRe(){
	return new_Re;
}

void Komplex::setIm(double x){
	new_Im = x;
}

void Komplex::setRe(double y){
	new_Re = y;
}

double Komplex::degre(){
	double cuccos = new_Im/new_Re;
	double tmp = atan(cuccos) * 180/PI;
	return tmp;
}

double Komplex::length(){
	double Re2 = pow(new_Re,2);
	double Im2 = pow(new_Im,2);

	return sqrt(Im2+Re2);
}
