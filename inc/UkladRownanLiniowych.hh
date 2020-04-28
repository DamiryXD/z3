#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include "Wektor.hh"
#include "Macierz.hh"

class UkladRownanLiniowych 
{ 
  Wektor Rozwiazanie;
  Macierz A;
  Wektor B;
  public:
  void RozwiazUkladRownan();
  void WyliczBladRozwiazania();
  Wektor &Get_wektor()
  {
    return B;
  }
  Wektor Get_wektor()const{
    return B;
  }
  Macierz &Get_macierz()
  {
    return A;
  }
  Macierz Get_macierz()const{
    return A;
  }
};
std::istream &operator>>(std::istream &Strm, UkladRownanLiniowych &UklRown);
std::ostream &operator<<(std::ostream &Strm, const UkladRownanLiniowych &UklRown);
#endif
