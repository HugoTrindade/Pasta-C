# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    srand (time(NULL));
    int vet[5],i,soma=0;
    for (i=0;i<=4;i++)
    {
        vet[i]=rand()%70;
        }
          for (i=0;i<=4;i++)
    {   
        cout<<vet[i]<<" ";
        soma=soma+vet[i];
        }
        cout<<endl;
        cout<<soma<<endl;
        system ("pause");
        }
