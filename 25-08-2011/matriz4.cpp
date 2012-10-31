//Desenvolver um programa para gerar uma matriz quadrada com 16 numero aleatorios de semente 15.
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[4][4],i,j;
    srand(time(NULL));
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            mat[i][j]=rand()%15;
            cout<<mat[i][j]<<" ";
            }
            cout<<endl;
            }
            system ("pause");
            }           
