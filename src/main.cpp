#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"



using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */


int main()
{
  Wektor z1,z2,z3;

  
  cout << endl << " Start programu " << endl << endl;
  cout<<"Wprowadz wektor pierwszy:";
  cin>>z1;
  cout<<"Wprowadz wektor drugi";
  cin>>z2;
  cout<<"Proba:"<<z1<<endl;
  cout<<"Dodane wektory"<<z1*z2;

}
