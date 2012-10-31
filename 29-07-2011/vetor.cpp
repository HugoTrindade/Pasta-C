# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    srand (time(NULL));
    int vet[5],i,a;
    for (i=0;i<=3;i++)
    {
       a=rand()%80;
        vet[i]=a;
        }
          for (i=0;i<=3;i++)
    {   
        cout<<vet[i]<<" ";
        }
        cout<<endl;
        system ("pause");
        }
