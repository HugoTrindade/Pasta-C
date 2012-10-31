//Considere uma matriz de tamanho 5x5 gerada com numeros aleatorios de semente 20. Desenvolva um programa para gerar uma segunda matriz cujo
//os elementos corresponderão a subtração de cada elemento da matriz A menos o elemento da diagonal principal da referida linha.
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mata[5][5],matb[5][5],i,j;
    srand (time(NULL));
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {
    mata[i][j]=rand()%20;
    cout<<mata[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {
    matb[i][j]=mata[i][j]-mata[i][i];
    cout<<matb[i][j]<<" ";
    }
    cout<<endl;
    }
    system("pause");
}
