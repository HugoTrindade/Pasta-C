//Calcular a soma dos elementos da diagonal principal mais os elementos abaixo dele.
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[5][5],i,j,soma=0;
    srand(time(NULL));
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            mat[i][j]=rand()%10;
            cout<<mat[i][j]<<" ";
            }
            cout<<endl;
            }
            for(i=0;i<5;i++)
            {
            for(j=0;j<5;j++)
            {
            if(i>=j)
            soma=soma+mat[i][j];
            }
            }
            cout<<endl;
            cout<<"A soma dos elementos da diagonal principal e os elementos abaixo dela
            : "<<soma;
            cout<<endl;
            system ("pause");
            }           
