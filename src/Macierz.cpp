#include "Macierz.hh"
#include <cassert>
#include <cstdlib>


/*
* Konstruktor klasy Macierz
* Argumenty:
* -Ukryty obiekt klasy typu Macierz  
* Zwraca:
*   Obiekt klasy Macierz wczytany samymi zerami.
*/
Macierz::Macierz()
{
    Wektor z[ROZMIAR];
    for (int i = 0; i < ROZMIAR; i++)
    {
        for (int j=0;j<ROZMIAR;j++)
        {
            z[i][j]=0;
        }
        kolumna[i]=z[i];
    }
}
/*
* Metoda realizuje obliczanie wyznacznik
* Argumenty:
*   Ukryty obiekt klasy typu Wektor  
*   A - obiekt klasy macierz
* Zwraca:
*   Wyznacznik macierzy A
*/
double Macierz::wyznacznik(Macierz A)const
{
    double det;
    for (int i = 0; i < ROZMIAR - 1; i++)

        for (int j = i + 1; j < ROZMIAR; j++)

            for (int k = i + 1; k < ROZMIAR; k++)

                A[j][k] -= A[j][i] / A[i][i] * A[i][k];

    det = 1;
    for (int i = 0; i < ROZMIAR; i++)
        det *= A[i][i];
    if (det ==0)
    {
    std::cerr<<"Wyznacznik macierzy równy 0. Brak rozwiązań rzeczywistych.";
       exit(0);
    }
    return det; 
}
/*
* Metoda realizuje mnożenie macierzy przez liczbe zmienno przecinkową
* Argumenty:
*   Ukryty obiekt klasy typu Macierz  
*   n - zmienna liczba zmiennoprzecinkowa typu double
* Zwraca:
*   Kopie macierzy po wykonaniu operacji mnozenia
*/
Macierz Macierz::operator*(double n)const
{
    Macierz B;
    for (int i = 0; i < ROZMIAR; i++)
    {
        for (int j = 0; j < ROZMIAR; j++)
        {
            B[i][j] = this->kolumna[i][j] * n;
        }
    }
    return B;
}
/*
* Metoda realizuje podstawienie kolumny przez Wektor B w kolumnie numer n
* Argumenty:
*   Ukryty obiekt klasy typu Macierz  
*   B - obiekt klasy Wektor
*   n - numer kolumny
* Zwraca:
*   Kopie macierzy po wykonaniu operacji podstawienia kolumny
*/
Macierz Macierz::PodstawKolumne(Wektor B,int n)const
{
    Macierz C;
    for (int i = 0; i < ROZMIAR; i++)
    {
        for (int j = 0; j < ROZMIAR; j++)
        {
           C[i][j]=this->kolumna[i][j];
        }
    }
    for (int i = 0; i < ROZMIAR; i++)
    {
        for (int j = 0; j < ROZMIAR; j++)
        {
           if(j==n)
           {
               C[i][j]=B[i]; 
           }
        }
    }
    return C;
}
/*
* Metoda realizuje mnożenie macierzy przez wektor
* Argumenty:
*   Ukryty obiekt klasy typu Macierz  
*   B - obiekt klasy Wektor
* Zwraca:
*   Kopie macierzy po wykonaniu operacji mnozenia
*/
 Wektor Macierz::operator*(Wektor B) const
{
    Wektor C;
    for (int i = 0; i < ROZMIAR; i++)
    {
        for (int j = 0; j < ROZMIAR; j++)
        {
           C[i]=C[i]+B[j]*this->kolumna[i][j];
        }
    }
    return C;
}
/*
* Metoda realizuje operacji transpozycji macierzy
* Argumenty:
*   Ukryty obiekt klasy typu Macierz  
* Zwraca:
*   Kopie macierzy po wykonaniu operacji transpozycji
*/

Macierz Macierz::transpozycja()const
{
    Macierz B;
    for (int i = 0; i < ROZMIAR; i++)
    {
        for (int j = 0; j < ROZMIAR; j++)
        {
            B[i][j]=this->kolumna[j][i];

        }
    }
    return B;
}
  /*
* Przeciążenie operatora wyjscia dla Macierzy
* Argumenty:
*   StrWy- strumien wyjscia
*   Mac - obiekt klasy Macierz
* Zwraca:
*   Strumien wyjscia
*/
std::ostream &operator<<(std::ostream &StrWy, const Macierz &Mac)
{
    for (int i = 0; i < ROZMIAR; i++)
    {
        for (int j = 0; j < ROZMIAR; j++)
        {
            StrWy << Mac[i][j] << " ";
        }
        StrWy << std::endl;
    }
    return StrWy;
}
 /*
* Przeciążenie operatora wejscia dla Macierzy
* Argumenty:
*   StrWe- strumien wejscia
*   Mac - obiekt klasy Macierz
* Zwraca:
*   Strumien wejscia
*/
std::istream &operator>>(std::istream &StrWe, Macierz &A)
{
    Wektor z[ROZMIAR];
    for (int i = 0; i < ROZMIAR; i++)
    {
            StrWe>>z[i];
            A[i]=z[i];
    }
    return StrWe;
}

