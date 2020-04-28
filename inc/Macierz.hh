#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "rozmiar.h"
#include "Wektor.hh"

class Macierz 
{
  Wektor kolumna[ROZMIAR];
public:
  const Wektor &operator[](int Kol) const { return kolumna[Kol]; }
  Wektor &operator[](int Kol) { return kolumna[Kol]; }
  Macierz();
  double wyznacznik()const;
  Macierz operator*(double n)const;
  Wektor operator*(Wektor B)const;
  Macierz PodstawKolumne(Wektor B, int n)const;
  Macierz transpozycja()const;
};

std::istream &operator>>(std::istream &StrWe, Macierz &A);
std::ostream &operator<<(std::ostream &StrWy, const Macierz &Mac);

#endif
