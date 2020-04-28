#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"



using namespace std;

int main()
{
  UkladRownanLiniowych Rozw;
  cout << endl << " Start programu " << endl << endl;
  cin>>Rozw;                                                        // Wczytanie ze strumienia wejscia Macierzy oraz wektora wyrazow wolnych
  cout<<"Macierz A:"<<endl<<Rozw.Get_macierz();                     //
  cout<<"Macierz transponowana:"<<endl<<Rozw.Get_macierz().transpozycja();   //
  cout<<"Wektor wyrazow wolnych:"<<Rozw.Get_wektor();                         // Wyswietlenie kolejno Macierzy A, A^T , oraz wektora wyrazow wolnych
  Rozw.RozwiazUkladRownan();                               // Rozwiazanie ukladu rownan
  Rozw.WyliczBladRozwiazania();                            // i obliczenie jego bledu

  return 0;
}
