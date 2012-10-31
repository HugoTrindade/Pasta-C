#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int vet[20],i,num,iaux=0;
    srand(time(NULL));
    num=rand()%70;
    cout<<num<<" "<<endl;
    for(i=0;i<20;i++)
    {
                     vet[i]=rand()%90;
                     cout<<vet[i]<<" ";
                     }
                     cout<<endl;
                                     for(i=0;i<20;i++)
                                     
                                     if(num==vet[i])
                                     {
                                                    iaux=1;
                                                    cout<<"existe no vetor na posicao "<<i<<endl;
                                                    break;                                                    
                                                    
                                                    }
                                                    if(iaux==0)
                                                    {
                                                               cout<<"nao existe no vetor"<<endl;
                                                               }
                                                               system("pause");
                                                               }
