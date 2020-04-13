#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"



using namespace std;

int main()
{
  Wektor z [ROZMIAR+1];
  UkladRownanLiniowych Rozw;
  cout << endl << " Start programu " << endl << endl;
  for (int i=0;i<=ROZMIAR;i++)
  {
    cin>>z[i];
  }
  Macierz M (z[0],z[1],z[2]);
  cout<<"Macierz A:"<<endl<<M;
  cout<<"Macierz transponowana:"<<endl<< M.transpozycja();
  cout<<"Macierz podstawiowa 1 kolumna:"<< endl << M.PodstawKolumne(z[ROZMIAR],0);
  Rozw.RozwiazUkladRownan(M,z[ROZMIAR]);
  Rozw.WyliczBladRozwiazania(M,z[ROZMIAR]);
  // zmien petle na zakres tablicy
  // popraw przejrzystosc funkcji
  // dokumentacja
  // dodaj konstruktor dla Macierzy kolejny
  
  return 0;
}
