#include "Wektor.hh"
#include <iostream>

/*
* Przeciążenie operatora wejscia dla wektora
* Argumenty:
*   StrWe- strumien wejscia
*   Arg1 - wektor o wielkosci ROZMIAR -> patrz rozmiar.h
* Zwraca:
*   Strumien wejscia
*/
Wektor::Wektor()
{
    for (int Ind = 0; Ind < ROZMIAR; ++Ind)
        wektor[Ind] = 0;
}
double Wektor::operator[](unsigned int Ind) const
{
    return wektor[Ind];
}
double& Wektor:: operator[](unsigned int Ind)
{
    return wektor[Ind];
}
std::istream &operator>>(std::istream &StrWe, Wektor &Arg1)
{
    for (int i = 0; i < ROZMIAR; i++)
    {
        StrWe >> Arg1[i];
        
    }
    return StrWe;
}

/* Przeciążenie operatora wyjścia dla wektora
* Argumenty:
*   StrWy- strumien wyjscia
*   Arg1 - wektor o wielkosci ROZMIAR -> patrz rozmiar.h
* Zwraca:
*   Kolejne elementy składowe wektora
*/
std::ostream &operator<<(std::ostream &StrWy, const Wektor &Arg1)
{
    for (int i=0; i<ROZMIAR;i++)
    {
        std::cout<< Arg1 [i] <<" ";
    }
        std::cout<<std::endl;

}
/*
* Realizuje dodawanie dwóch wektorów
* Argumenty:
*   Arg1 - wektor o wielkosci ROZMIAR -> patrz rozmiar.h
*   Arg2 - wektor o wielkosci ROZMIAR
* Zwraca:
*   Sume dwóch wektorów
*/

Wektor operator+(Wektor Arg2)
{
    Wektor Wynik;
    for (int i = 0; i < ROZMIAR; i++)
    {
        //Wynik[i]=this[i]+Arg2[i];
      //  Arg2[i]+= wektor[i];
    }
    return Wynik;
}
/*
* Realizuje odejmowanie dwóch wektorów
* Argumenty:
*   Arg1 - wektor o wielkosci ROZMIAR -> patrz rozmiar.h
*   Arg2 - wektor o wielkosci ROZMIAR
* Zwraca:
*   Różnice dwóch wektorów
*/
Wektor Wektor::operator-(Wektor Arg2)
{
    Wektor Wynik;
    for (int i = 0; i < ROZMIAR; i++)
    {
        Wynik.wektor[i] = this->wektor[i] - Arg2.wektor[i];
    }
    return Wynik;
}
/*
* Realizuje mnożenia skalarne dwóch wektorów
* Argumenty:
*   Arg1 - wektor o wielkosci ROZMIAR -> patrz rozmiar.h
*   Arg2 - wektor o wielkosci ROZMIAR
* Zwraca:
*   Liczbe zmienno przecinkową typu double 
*/
double Wektor:: operator*(Wektor Arg2)
{
    double Wynik = 0;
    for (int i = 0; i < ROZMIAR; i++)
    {
        Wynik = Wynik + this->wektor[i] * Arg2.wektor[i];
    }
    return Wynik;
}
/*
* Realizuje mnożenia wektora przez liczbe
* Argumenty:
*   Arg1 - wektor o wielkosci ROZMIAR -> patrz rozmiar.h
*   n    - liczba calkowita
* Zwraca:
*   Wektor o wielkości ROZMIAR 
*/
Wektor Wektor::operator*( int n) // mozna poprawic na licbe zmienno przecinkowa
{
    Wektor Wynik;
    for (int i = 0; i < ROZMIAR; i++)
    {
        Wynik.wektor[i] = this->wektor[i] * n;
    }
    return Wynik;
}
/*
* Realizuje dzielenie wektora przez liczbe
* Założenia wstępne: Nie wolno mnożyć przez 0
* Argumenty:
*   Arg1 - wektor o wielkosci ROZMIAR -> patrz rozmiar.h
*   n    - liczba calkowita
* Zwraca:
*   Wektor o wielkości ROZMIAR 
*/
Wektor Wektor::operator/( int n)
{
    Wektor Wynik;
    if (n == 0)
    {
        return Wynik; // dopisz obsluge bledow
    }
    for (int i = 0; i < ROZMIAR; i++)
    {
        Wynik.wektor[i] = this->wektor[i] / n;
    }
    return Wynik;
}

