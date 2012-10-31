#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int mat[5][5],i,j,k=4,soma=0;
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
                                                    
                                                   
                                                            soma=soma+mat[i][k];
                                                            k=k-1;
                                                            
                                                            }
                                                            cout<<soma<<" ";
                                                            cout<<endl;
                                                            system("pause");
                                                            }        
