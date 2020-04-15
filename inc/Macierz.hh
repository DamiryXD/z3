#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "rozmiar.h"
#include "Wektor.hh"
#include <iostream>

class Macierz : public Wektor
{
protected:
  Wektor kolumna[ROZMIAR];
public:
  const Wektor &operator[](int Kol) const { return kolumna[Kol]; }
  Wektor &operator[](int Kol) { return kolumna[Kol]; }
  const double operator()(int Wi, int Ko) const { return kolumna[Ko][Wi]; }
  double &operator()(int Wi, int Ko) { return kolumna[Ko][Wi]; }
  Macierz();
  Macierz(Wektor z1, Wektor z2, Wektor z3);
  double wyznacznik(Macierz A);
  Macierz operator*(int n);
  Wektor operator*(Wektor B);
  Macierz PodstawKolumne(Wektor B, int n);
  Macierz transpozycja();
};

std::istream &operator>>(std::istream &StrWe, Macierz &A);
std::ostream &operator<<(std::ostream &StrWy, const Macierz &Mac);

#endif
