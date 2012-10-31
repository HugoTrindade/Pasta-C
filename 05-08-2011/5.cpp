# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int vet[20],i;
    float vetb[20],maior=0;
    srand (time(NULL));
    for (i=0;i<20;i++)
    {
       vet[i]=rand()%81;
       cout<<vet[i]<<" ";
       if (vet[i]>maior)
       {
       maior=vet[i];
       }
       }
       cout<<endl;
       cout<<maior<<endl;
       for (i=0;i<20;i++)
       {
       vetb[i]=vet[i]/maior;
       cout<<vetb[i]<<" ";
       }
       cout<<endl;
       system("pause");
       }
