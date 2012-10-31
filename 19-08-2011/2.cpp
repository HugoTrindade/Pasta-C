#include <iostream>
using namespace std;
int main()
{
    int num=100,vet[10],i=0,a,ch=0;
    while(num<300)
    {
                  a=2;
                  
                  while(a<num)
                  {
                  if(num%a==0)
                  {
                              ch=1;
                              
                              break;
                              }
                              else
                              a=a+1;
                              }
                              if(ch==0)
                              {
                                       vet[i]=num;
                                       i=i+1;
                                       }
                                       else
                                       ch=0;
                                       if(i>=10)
                                       break;
                                       else
                                       num=num+1;
                                       }
                                       for(i=0;i<10;i++)
                                       cout<<vet[i]<<" ";
                                       cout<<endl;
                                       system("pause");
                                       }
