#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"



using namespace std;

int main()
{
  Wektor z;
  UkladRownanLiniowych Rozw;
  Macierz M;
  cout << endl << " Start programu " << endl << endl;
  cin >> M >> z;                                              // Wczytanie macierzy oraz wektora glowneo do programu
  cout<<"Macierz A:"<<endl<<M;                                //
  cout<<"Macierz transponowana:"<<endl<< M.transpozycja();    //
  cout<<"Wektor wyrazow wolnych:"<<z;                         // Wyswietlenie kolejno Macierzy A, A^T , oraz wektora wyrazow wolnych
  Rozw.RozwiazUkladRownan(M,z);                               // Rozwiazanie ukladu rownan
  Rozw.WyliczBladRozwiazania(M,z);                            // i obliczenie jego bledu





  // zmien petle na zakres tablicy
  // popraw przejrzystosc funkcji
  // dokumentacja
  // kontrola bledow
  
  return 0;
}
