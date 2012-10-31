# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[4][5],i,j,aux;
    srand(time(NULL));
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            mat[i][j]=rand()%10;
            cout<<mat[i][j]<<" ";
            }
            cout<<endl;
            }
            aux=mat[3][4];
            mat[3][4]=mat[0][0];
            mat[0][0]=aux;
            cout<<endl;
            for (i=0;i<4;i++)
            {
        for (j=0;j<5;j++)
        {
            cout<<mat[i][j]<<" ";
            }
            cout<<endl;
            }
            system ("pause");
            }           
