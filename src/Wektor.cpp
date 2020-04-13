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
/*bool Get_wektor (std::istream & StrWe, double & Liczba)
{
    return 
} */
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
    
    return StrWy << Arg1[0] << Arg1[1] << Arg1[2]; // slabe rozwiazanie, do przemyslenia
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
Wektor operator-(Wektor Arg1, Wektor Arg2)
{
    Wektor Wynik;
    for (int i = 0; i < ROZMIAR; i++)
    {
        Wynik.wektor[i] = Arg1.wektor[i] - Arg2.wektor[i];
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
double operator*(Wektor Arg1, Wektor Arg2)
{
    double Wynik = 0;
    for (int i = 0; i < ROZMIAR; i++)
    {
        Wynik = Wynik + Arg1.wektor[i] * Arg2.wektor[i];
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
Wektor operator*(Wektor Arg1, int n) // mozna poprawic na licbe zmienno przecinkowa
{
    Wektor Wynik;
    for (int i = 0; i < ROZMIAR; i++)
    {
        Wynik.wektor[i] = Arg1.wektor[i] * n;
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
Wektor operator/(Wektor Arg1, int n)
{
    Wektor Wynik;
    if (n == 0)
    {
        return Wynik; // dopisz obsluge bledow
    }
    for (int i = 0; i < ROZMIAR; i++)
    {
        Wynik.wektor[i] = Arg1.wektor[i] / n;
    }
    return Wynik;
}
