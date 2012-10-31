#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int mat[5][5],i,j,matb[5][5];
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
    cout<<endl;
    for(i=0;i<5;i++)
    {
                    for(j=0;j<5;j++)
                    {
                                    matb[i][j]=mat[i][j]-mat[i][i];
                                    cout<<matb[i][j]<<" ";
                    }
                    cout<<endl;
    }
    system("pause");
}
                                    
