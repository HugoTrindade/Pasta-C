# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[12][12],i,j,k=0,soma=0,vet[10]={0,0,0,0,0,0,0,0,0,0};
    char* vetcar[10]={"Corsa","Vectra GLS","Vectra CD","Astra","Omega","Pegeout","Blazer","Celta","S10","Ferrari"};
    srand(time(NULL));
    for(i=0;i<12;i++)
    {
    for(j=0;j<12;j++)
    {
    mat[i][j]=rand()%10;
    cout<<mat[i][j]<<" ";
    }
    cout<<endl;
    }
    for(k=0;k<10;k++)
    {
    for(i=0;i<12;i++)
    {
    for(j=0;j<12;j++)
    {
    if(mat[i][j]==k)
    vet[k]=vet[k]+1;
    }
    }
    }
    for(i=0;i<10;i++)
    {
    cout<<vetcar[i]<<" : "<<vet[i]<<endl;
    }
    system("pause");
    }
    
