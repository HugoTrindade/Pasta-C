// Desenvolver um programa para gerar uma matriz de tamanho 4x5 de número randomico de semente 10.
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[4][5],i,j;
    srand(time(NULL));
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            mat[i][j]=rand()%10;
            cout<<mat[i][j]<<" ";
            }
            cout<<endl;
            }
            system ("pause");
            }           
