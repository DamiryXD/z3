#include "Macierz.hh"
#include <cassert>



Macierz::Macierz()
{
   /* Macierz A;
    for (int i = 0; i < ROZMIAR; i++)
    {
        for (int j = 0; j < ROZMIAR; j++)
        {
            A[i][j]=0;
        } */

}
Macierz::Macierz(Wektor z1, Wektor z2, Wektor z3)
{
    kolumna[0] = z1;
    kolumna[1] = z2;
    kolumna[2] = z3;
}

double Macierz::wyznacznik(Macierz A)
{
    double det;
    for (int i = 0; i < ROZMIAR - 1; i++)

        for (int j = i + 1; j < ROZMIAR; j++)

            for (int k = i + 1; k < ROZMIAR; k++)

                A[j][k] -= A[j][i] / A[i][i] * A[i][k];

    det = 1;
    for (int i = 0; i < ROZMIAR; i++)
        det *= A[i][i];
    return det; 
}
void Macierz::ZamienKolumny(unsigned int Kol1, unsigned int Kol2)
{
    assert(Kol1 < ROZMIAR && Kol2 < ROZMIAR);
    Wektor tmp = kolumna[Kol1];
    kolumna[Kol1] = kolumna[Kol2];
    kolumna[Kol2] = tmp;
}

Macierz Macierz::operator*(int n)
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
Macierz Macierz::PodstawKolumne(Wektor B,int n) 
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
 Wektor Macierz::operator*(Wektor B) 
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
Macierz Macierz::transpozycja()
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
}

