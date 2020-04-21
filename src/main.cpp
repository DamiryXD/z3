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
  cout<<"Macierz A:"<<endl<<Rozw.A;                                //
  cout<<"Macierz transponowana:"<<endl<< Rozw.A.transpozycja();    //
  cout<<"Wektor wyrazow wolnych:"<<Rozw.B;                         // Wyswietlenie kolejno Macierzy A, A^T , oraz wektora wyrazow wolnych
  Rozw.RozwiazUkladRownan();                               // Rozwiazanie ukladu rownan
  Rozw.WyliczBladRozwiazania();                            // i obliczenie jego bledu

  return 0;
}
