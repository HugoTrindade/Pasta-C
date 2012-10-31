# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    srand (time(NULL));
    int vet[10],i,soma=0;
    for (i=0;i<10;i++)
    {
        vet[i]=rand()%50;
        }
          for (i=0;i<10;i++)
    {   
        if (vet[i]<15)
        soma=soma+vet[i];
        cout<<vet[i]<<" ";
        }
        cout<<endl;
        cout<<soma;
        cout<<endl;
        system ("pause");
        }
