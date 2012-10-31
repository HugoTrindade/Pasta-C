#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int veta[10],i=0,j,k,aux;
    srand(time(NULL));
    while(i<10)
    {
               veta[i]=rand()%50;
               cout<<veta[i]<<" ";
               i++;
    }
    for(j=0;j<i;j++)
    {
                    for(k=j+1;k<i;k++)
                    {
                                      if(veta[j]>veta[k])
                                      {
                                                         aux=veta[j];
                                                         veta[j]=veta[k];
                                                         veta[k]=aux;
                                      }
                    }
    }
    cout<<endl;
    for(i=0;i<10;i++)
    cout<<veta[i]<<" ";
    cout<<endl;
    system("pause");
}
