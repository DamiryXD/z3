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
  double & operator[](unsigned int Ind);
  Wektor operator+(Wektor Arg2);
   Wektor operator-( Wektor Arg2);
   double operator*(Wektor Arg2);
   Wektor operator*(int n);
   Wektor operator/(int n);       
};

std::istream &operator>>(std::istream &StrWe, Wektor &Arg1);
std::ostream &operator<<(std::ostream &StrWy, const Wektor &Arg1);

#endif
