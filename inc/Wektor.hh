#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Wektor
{
  
  double wektor[ROZMIAR];
public:
  Wektor();
  double operator[](unsigned int Ind) const;
  double & operator[](unsigned int Ind);
  Wektor operator+(Wektor Arg2);
  friend Wektor operator-(Wektor Arg1, Wektor Arg2);
  friend double operator*(Wektor Arg1, Wektor Arg2);
  friend Wektor operator*(Wektor Arg1, int n);
  friend Wektor operator/(Wektor Arg1, int n);         // friend do poprawy
};

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::istream &operator>>(std::istream &StrWe, Wektor &Arg1);
std::ostream &operator<<(std::ostream &StrWy, const Wektor &Arg1);

#endif
