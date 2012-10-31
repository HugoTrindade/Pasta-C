#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int vet[10],i,aux,iaux,maior=0,k=9;
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
                     vet[i]=rand()%100;
                     cout<<vet[i]<<" ";
                     }
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
                                for(i=0;i<10;i++)
                                cout<<vet[i]<<" ";
                                cout<<endl;
                     for(i=0;i<10;i++)
                     {
                                      if(vet[i]==28)
                                      {
                                      cout<<"O numero 28 esta contido no vetor"<<endl;
                                      break;
                                      }
                                      else
                                      {
                                          if(vet[i]>28)
                                          {
                                                       cout<<"O numero 28 nao esta contido no vetor"<<endl;
                                                       break;
                                                       }
                                                       }
                                                       }
                                                       system("pause");
                                                       }
                                                       

