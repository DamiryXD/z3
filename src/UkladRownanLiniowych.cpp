#include <iostream>
#include <math.h>
#include "UkladRownanLiniowych.hh"


  void UkladRownanLiniowych:: RozwiazUkladRownan (Macierz A, Wektor B)
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
  void UkladRownanLiniowych::WyliczBladRozwiazania (Macierz A,Wektor B)
  {
        std::cout<<"Wektor bledu:"<<std::endl;
        Wektor blad= A*this->Rozwiazanie - B;
        std::cout.setf(std::ios::showpoint);
        std::cout<< blad;
        std::cout.setf(std::ios::showpoint);
        std::cout<<"Dlugosc wektora bledu:"<<std::endl;
        std::cout<< sqrt(blad*blad)<<std::endl;
  }

