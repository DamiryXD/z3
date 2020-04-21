#include <iostream>
#include <math.h>
#include "UkladRownanLiniowych.hh"


/*
* Metoda rozwiazujaca uklad rownan liniowych, rozwiazanie jest wyswietlane przy pomocy przeciazonego strumienia wyjscia
* Prerekwizyty: Wczytana poprawnie Macierz oraz Wektor Wyrazow Wolnych
* Argumenty: 
* - Ukryty obiekt klasy typu UkladRownanLiniowych
* Zwraca:
*   ---
*/
  void UkladRownanLiniowych:: RozwiazUkladRownan ()
  {
    std::cout<<"Rozwiązanie x= (x1,x2,x3):"<<std::endl;
    double det=A.wyznacznik(A);
    for (int i=0;i<ROZMIAR;i++)
    {
        Macierz C= A.PodstawKolumne(B,i);
        this->Rozwiazanie[i]=C.wyznacznik(C) /det;
        std::cout<<this->Rozwiazanie[i] << " ";
    }
    std::cout<<std::endl;
  }
  /*
* Metoda obliczajaca blad rozwiazania ykladu rownan liniowych, rozwiazanie jest wyswietlane przy pomocy przeciazonego strumienia wyjscia
* Prerekwizyty: Wczytana poprawnie Macierz, Wektor Wyrazow Wolnych oraz obliczone rozwiązanie ukladu rownan
* Argumenty: 
* - Ukryty obiekt klasy typu UkladRownanLiniowych
* Zwraca:
*   ---
*/
  void UkladRownanLiniowych::WyliczBladRozwiazania ()const
  {
        std::cout<<"Wektor bledu:"<<std::endl;
        Wektor blad= A*this->Rozwiazanie - B;
        std::cout.setf(std::ios::showpoint);
        std::cout<< blad;
        std::cout.setf(std::ios::showpoint);
        std::cout<<"Dlugosc wektora bledu:"<<std::endl;
        std::cout<< sqrt(blad*blad)<<std::endl;
  }
  /*
* Przeciążenie operatora wejscia dla Ukladu rownanLiniowych
* Argumenty:
*   Strm- strumien wejscia
*   UklRown - Uklad rownan skladajacy sie z macierzy,wektora wyrazow wolnych oraz wektora rozwiazania
* Zwraca:
*   Strumien wejscia
*/
  std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown)
{
  Strm>>UklRown.A;
  Strm>>UklRown.B;
  return Strm;
}
  /*
* Przeciążenie operatora wyjscia dla Ukladu rownanLiniowych
* Argumenty:
*   Strm- strumien wyjscia
*   UklRown - Uklad rownan skladajacy sie z macierzy,wektora wyrazow wolnych oraz wektora rozwiazania
* Zwraca:
*   Strumien wyjscia
*/
std::ostream& operator << ( std::ostream  &Strm, const UkladRownanLiniowych &UklRown )
{
  Strm<<UklRown.A;
  Strm<<UklRown.B;
  return Strm;
}

