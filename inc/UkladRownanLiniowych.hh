#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"


class UkladRownanLiniowych : public Macierz {
  private:
  Wektor Rozwiazanie;
  public:
  void RozwiazUkladRownan (Macierz A, Wektor B);
  void wyswietl()
  {
    for (int i=0;i<ROZMIAR;i++)
    std::cout<<Rozwiazanie[i]<<" ";
  }
  void WyliczBladRozwiazania (Macierz A,Wektor B);
};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << ( std::ostream  &Strm, const UkladRownanLiniowych &UklRown );


#endif
