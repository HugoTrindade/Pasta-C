#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int mat[5][5],i,j,vet[5],soma=0;
    srand(time(NULL));
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
                    for(j=0;j<5;j++)
                    soma=soma+mat[i][j];
                    vet[i]=soma*mat[i][i];
                    cout<<vet[i]<<" ";
                    soma=0;
    }
    cout<<endl;
    system("pause");
}
