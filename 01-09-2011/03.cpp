//Considerando uma matriz quadrada com 25 elementos de semente 15. Desenvolva um programa para calcular a soma dos elementos acima da diagonal
//secundária.
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[5][5],i,j,soma=0,k=4;
    srand (time(NULL));
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {
    mat[i][j]=rand()%15;
    cout<<mat[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;
    for(i=0;i<=4;i++)
    {
    for(j=0;j<=k;j++)
    soma=soma+mat[i][j];
    k=k-1;
    }
    cout<<"Soma: "<<soma;
    cout<<endl;
    system("pause");
}
