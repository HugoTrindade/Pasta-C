//Desenvolver um programa para gerar uma matriz de tamanho 5x7 com números aleatórios de semente 30 em seguida gerar um vetor com a soma dos 
//elementos de cada linha que sejam multiplos de 3.
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[5][7],vet[5],i,j,soma=0;
    srand (time(NULL));
    for(i=0;i<5;i++)
    {
    for(j=0;j<7;j++)
    {
    mat[i][j]=rand()%30;
    cout<<mat[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;
    for(i=0;i<5;i++)
    {
    for(j=0;j<7;j++)
    {
    if (mat[i][j]%3==0)
    soma=soma+mat[i][j];
    }
    vet[i]=soma;
    cout<<vet[i]<<" ";
    soma=0;
    }
    cout<<endl;
    system("pause");
}    
