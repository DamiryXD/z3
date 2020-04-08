#include "Macierz.hh"

Macierz::Macierz(Wektor Arg1)
{
    for (int i = 0; i < ROZMIAR; i++)
    {
        for (int j = 0; j < ROZMIAR; j++)
        {
            macierz[i][j] = Arg1[j];
        }
    }
}
/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
