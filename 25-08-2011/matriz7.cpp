//Gerar um vetor com os elementos da diagonal principal ordenando o vetor com o metodo bolha.
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[5][5],i,j,vet[5],k=4,maior=0,iaux,aux;
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
            if(i==j)
            vet[i]=mat[i][j];
            }
            }
            cout<<endl;
            for(i=0;i<5;i++)
            cout<<vet[i]<<" ";
            cout<<endl;
         while(k>=0)
    {
               for(i=0;i<=k;i++)
               {
                                if(vet[i]>maior)
                                {
                                                 maior=vet[i];
                                                 iaux=i;
                                }
               }
               aux=vet[k];
               vet[k]=maior;
               vet[iaux]=aux;
               k=k-1;
               maior=0;
    }
    for(i=0;i<5;i++)
    cout<<vet[i]<<" ";
    cout<<endl;
    system("pause");
}
