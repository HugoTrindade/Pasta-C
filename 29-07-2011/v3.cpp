# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    srand (time(NULL));
    int vet[10],i,aux;
    for (i=0;i<=9;i++)
    {
        vet[i]=rand()%40;
        cout<<vet[i]<<" ";
        }
        aux=vet[4];
        vet[4]=vet[8];
        vet[8]=aux;
        cout<<endl;
          for (i=0;i<=9;i++)
    {   
        cout<<vet[i]<<" ";
        
        }
        cout<<endl;
        system ("pause");
        }
