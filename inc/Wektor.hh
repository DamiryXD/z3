#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>

class Wektor
{
protected:
  double wektor[ROZMIAR];

public:
  Wektor();
  double operator[](unsigned int Ind) const;
  double &operator[](unsigned int Ind);
  double operator*(Wektor Arg2)const;
  Wektor operator+(Wektor Arg2)const;
  Wektor operator-(Wektor Arg2)const;
  Wektor operator*(double n)const;
  Wektor operator/(double n)const;
};

std::istream &operator>>(std::istream &StrWe, Wektor &Arg1);
std::ostream &operator<<(std::ostream &StrWy, const Wektor &Arg1);

#endif
