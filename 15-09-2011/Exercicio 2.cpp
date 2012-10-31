# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[4][4],i,j,soma=0,madp=0,me3c=11,ma2l=0,aux,iaux,jaux;
    srand(time(NULL));
    for(i=0;i<4;i++)
    {
    for(j=0;j<4;j++)
    {
    mat[i][j]=rand()%10;
    cout<<mat[i][j]<<" ";
    soma=soma+mat[i][j];
    if(i==j)
    {
    if(mat[i][j]>madp)
    {
    madp=mat[i][j];
    iaux=i+1;
    jaux=i+1;
    }
    }
    if(j==2)
    {
    if(mat[i][j]<me3c)
    me3c=mat[i][j];
    }
    if(i==1)
    {
    if(mat[i][j]>ma2l)
    ma2l=mat[i][j];
    }
    if(i==2)
    {
    aux=mat[i][j];
    mat[i][j]=mat[0][j];
    mat[0][j]=aux;
    }
    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"Soma de todos os elementos da matriz: "<<soma<<endl;
    cout<<"O maior elemento da diagonal principal: "<<madp<<" esta na linha "<<iaux<<" da coluna "<<jaux<<endl;
    cout<<"O menor elemento da terceira coluna: "<<me3c<<endl;
    cout<<"O maior elemento da segunda linha: "<<ma2l<<endl;
    cout<<endl;
    for(i=0;i<4;i++)
    {
    for(j=0;j<4;j++)
    {
    cout<<mat[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;
    system("pause");
    }
