#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "rozmiar.h"
#include "Wektor.hh"
#include <iostream>

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Macierz : public Wektor
{
protected:
  Wektor kolumna[ROZMIAR];

public:
  const Wektor &operator[](int Kol) const { return kolumna[Kol]; }
  Wektor &operator[](int Kol) { return kolumna[Kol]; }
  const double operator()(int Wi, int Ko) const { return kolumna[Ko][Wi]; }
  double &operator()(int Wi, int Ko) { return kolumna[Ko][Wi]; }
  Macierz(Wektor z1,Wektor z2,Wektor z3);
  double wyznacznik(Macierz A);
  Macierz operator*(int n);
};

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::istream &operator>>(std::istream &Strm, Macierz &macierz);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream &operator<<(std::ostream &Strm, const Macierz &Mac);

#endif
