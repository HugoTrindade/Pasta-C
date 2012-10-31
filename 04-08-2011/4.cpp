# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    srand (time(NULL));
    int vet[10],i,aux;
    for (i=0;i<=9;i++)
    {
        vet[i]=rand()%60;
        cout<<vet[i]<<" ";
        }
        aux=vet[3];
        vet[3]=vet[6];
        vet[6]=aux;
        cout<<endl;
          for (i=0;i<=9;i++)
    {   
        cout<<vet[i]<<" ";
        
        }
        cout<<endl;
        system ("pause");
        }
