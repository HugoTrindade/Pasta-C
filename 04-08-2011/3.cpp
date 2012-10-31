# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    srand (time(NULL));
    int vet_a[10],vet_b[10],vet_c[10],i;
    for (i=0;i<=9;i++)
    {
        vet_a[i]=rand()%60;
        vet_b[i]=rand()%50;
        vet_c[i]=vet_a[i]+vet_b[i];
        }
          for (i=0;i<=9;i++)
    {   
        cout<<vet_a[i]<<" ";
        }
        cout<<endl;
         for (i=0;i<=4;i++)
    {   
        cout<<vet_b[i]<<" ";
        }
        cout<<endl;
         for (i=0;i<=4;i++)
    {   
        cout<<vet_c[i]<<" ";
        }
        cout<<endl;
        system ("pause");
        }
