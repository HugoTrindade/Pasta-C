#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    
    int mat[5][5],i,j,soma=0,vet[5];
    srand(time(NULL));
    for(i=0;i<5;i++)
    {
                    for(j=0;j<5;j++)
                    {
                                    mat[i][j]=rand()%15;
                                    cout<<mat[i][j]<<" ";
                                    }
                                    cout<<endl;
                                    }
                                    for(i=0;i<5;i++)
                                    {
                                                    for(j=0;j<5;j++)
                                                    
                                                                    soma=soma+mat[i][j];
                                                                    vet[i]=soma;
                                                                    soma=0;
                                                                    
                                                                    }
                                                                    cout<<endl;
                                                                    for(i=0;i<5;i++)
                                                                    cout<<vet[i]<<" ";
                                                                    cout<<endl;
                                                                    system("pause");
                                                                    }
                                                    
