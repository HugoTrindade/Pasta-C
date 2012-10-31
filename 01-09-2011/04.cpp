//Considerando uma matriz quadrada com 25 elementos de semente 10.Desenvolva um programa para calcular a soma dos elementos abaixo da 
//diagonal secundária.
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[5][5],i,j,soma=0,k=4,a=1;
    srand (time(NULL));
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {
    mat[i][j]=rand()%10;
    cout<<mat[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;
    for(i=0;i<5;i++)
    {
    while(k<=4)
    {
    soma=soma+mat[i][k];
    k++;
    }
    a=a+1;
    k=k-a;
    }
    cout<<endl;
    cout<<"Soma: "<<soma<<endl;
    system("pause");
    }
