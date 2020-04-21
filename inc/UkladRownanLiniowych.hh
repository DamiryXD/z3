#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include "Wektor.hh"
#include "Macierz.hh"

class UkladRownanLiniowych : public Macierz
{ // dziedziczenie zostalo wykorzystane aby uzyskac dostep do funkcji klasy macierz
  Wektor Rozwiazanie;
public:
  Macierz A;
  Wektor B;
  void RozwiazUkladRownan();
  void WyliczBladRozwiazania() const;
};
std::istream &operator>>(std::istream &Strm, UkladRownanLiniowych &UklRown);
std::ostream &operator<<(std::ostream &Strm, const UkladRownanLiniowych &UklRown);
#endif
