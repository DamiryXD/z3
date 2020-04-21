#include "Wektor.hh"
#include <iostream>
#include <cstdlib>

/*
* Konstruktor klasy Wektor
* Argumenty:
* -Ukryty obiekt klasy typu Wektor  
* Zwraca:
*   Obiekt klasy Wektor wczytany samymi zerami.
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
/*
* Przeciążenie operatora wejscia dla wektora
* Argumenty:
*   StrWe- strumien wejscia
*   Arg1 - wektor o wielkosci ROZMIAR -> patrz rozmiar.h
* Zwraca:
*   Strumien wejscia
*/
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
            StrWy<<Arg1[i]<<" ";
        }
         std::cout<<std::endl;
        return StrWy;
}
/*
* Realizuje dodawanie dwóch wektorów
* Argumenty:
*   Ukryty obiekt klasy typu Wektor
*   Arg2 - wektor o wielkosci ROZMIAR
* Zwraca:
*   Sume dwóch wektorów
*/

Wektor Wektor::operator+(Wektor Arg2)const
{
    Wektor Wynik;
    for (int i = 0; i < ROZMIAR; i++)
    {
        Wynik[i]=this->wektor[i]+Arg2[i];
       Arg2[i]+=this-> wektor[i];
    }
    return Wynik;
}
/*
* Realizuje odejmowanie dwóch wektorów
* Argumenty:
*   Ukryty obiekt klasy typu Wektor
*   Arg2 - wektor o wielkosci ROZMIAR
* Zwraca:
*   Różnice dwóch wektorów
*/
Wektor Wektor::operator-(Wektor Arg2)const
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
*   Ukryty obiekt klasy typu Wektor
*   Arg2 - wektor o wielkosci ROZMIAR
* Zwraca:
*   Liczbe zmienno przecinkową typu double 
*/
double Wektor:: operator*(Wektor Arg2)const
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
*   Ukryty obiekt klasy typu Wektor
*   n    - liczba calkowita
* Zwraca:
*   Wektor o wielkości ROZMIAR 
*/
Wektor Wektor::operator*( double n) const // mozna poprawic na licbe zmienno przecinkowa
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
*   Ukryty obiekt klasy typu Wektor
*   n    - liczba calkowita
* Zwraca:
*   Wektor o wielkości ROZMIAR 
*/
Wektor Wektor::operator/( double n) const
{
    Wektor Wynik;
    if (n == 0)
    {
        std::cerr<<"Dzielenie przez 0";
        exit(0);
        return Wynik; // dopisz obsluge bledow
    }
    for (int i = 0; i < ROZMIAR; i++)
    {
        Wynik.wektor[i] = this->wektor[i] / n;
    }
    return Wynik;
}

