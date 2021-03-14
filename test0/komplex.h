#ifndef KOMPLEX_H_
#define KOMPLEX_H_

#include "include.h"

#define PI 3.14159265

class Komplex{
	public:
	//	~Komplex();
		Komplex(double, double);
		double getIm();
		double getRe();
		void setIm(double);
		void setRe(double);
		double degre();
		double length();
	private:
		double new_Im;
		double new_Re;
};

#endif //KOMPLEX_H_
