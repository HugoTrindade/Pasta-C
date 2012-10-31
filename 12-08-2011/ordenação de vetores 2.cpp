#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int veta[10],i,aux,maior=0,iaux,k=9;
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
                     veta[i]=rand()%80;
                     cout<<veta[i]<<" ";
    }
    cout<<endl;
    while(k>=0)
    {
               for(i=0;i<=k;i++)
               {
                                if(veta[i]>maior)
                                {
                                                 maior=veta[i];
                                                 iaux=i;
                                }
               }
               aux=veta[k];
               veta[k]=maior;
               veta[iaux]=aux;
               k=k-1;
               maior=0;
    }
    for(i=0;i<10;i++)
    cout<<veta[i]<<" ";
    cout<<endl;
    system("pause");
}
