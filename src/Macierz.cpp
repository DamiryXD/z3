#include "Macierz.hh"

Macierz::Macierz(Wektor z1,Wektor z2,Wektor z3)
{
          kolumna[0]=z1;
          kolumna[1]=z2;
          kolumna[2]=z3;
    
}


double Macierz::wyznacznik(Macierz A)
{
  double det;
  for(int i=0;i<ROZMIAR-1;i++)

    for(int j=i+1;j<ROZMIAR;j++)

      for(int k=i+1;k<ROZMIAR;k++)

        A[j][k]-= A[j][i] / A[i][i] * A[i][k];

  det=1;
  for(int i=0;i<ROZMIAR;i++)
    det *= A[i][i];
return det;
}

Macierz operator*(Macierz A,int n)
{
    for (int i=0;i<ROZMIAR;i++)
    {
        for (int j=0;j<ROZMIAR;j++)
        {
            A[i][j]=A[i][j]*n;
        }
    }
    return A;
}
std::ostream &operator<<(std::ostream &StrWy, const Macierz &Mac)
{
    for (int i = 0; i < ROZMIAR; i++)
    {
        for (int j = 0; j < ROZMIAR; j++)

        {
            StrWy<<Mac[i][j]<<" ";
        }
        StrWy<<std::endl; 
    }
}
