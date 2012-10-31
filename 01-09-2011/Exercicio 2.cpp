# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[4][4],i,j,maior=0,iaux,vet[4],soma=0;
    srand (time(NULL));
    for(i=1;i<=4;i++)
    {
    for(j=1;j<=4;j++)
    {
    mat[i][j]=rand()%10;
    cout<<mat[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=4;i++)
    {
    for(j=1;j<=4;j++)
    {
    if(mat[i][3]>maior)
    {
    maior=mat[i][3];
    iaux=i;
    }
    }
    }
    cout<<"O maior numero da Terceira coluna : "<<maior<<endl;
    cout<<"localizado na "<<iaux<<" linha da terceira coluna"<<endl;
    cout<<endl;
    for(i=1;i<=4;i++)
    {
    for(j=1;j<=4;j++)
    {
    soma=soma+mat[j][i];
    }
    vet[i]=soma;
    cout<<vet[i]<<" ";
    soma=0;
    }
    cout<<endl;
    system("pause");
    }
