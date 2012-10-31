#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int mat[5][5],i,j,menor=0;
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
                                    menor=mat[0][1];
                                    for(i=0;i<5;i++)
                                    {
                                                    if(menor>mat[i][1])
                                                    menor=mat[i][1];
                                                    
                                                    }
                                                    cout<<endl;
                                                    cout<<"O menor da segunda coluna: "<<menor<<" ";
                                                    cout<<endl;
                                                    system("pause");
                                                    }
                                    
