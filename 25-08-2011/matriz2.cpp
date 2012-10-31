# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[4][5],i,j;
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
            cout<<endl;
            cout<<"Elemento da segunda linha e terceira coluna: "<<mat[1][2];
            cout<<endl;
            system ("pause");
            }           
