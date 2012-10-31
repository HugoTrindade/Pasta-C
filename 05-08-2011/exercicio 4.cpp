#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=0,vetx[10];
    for(i=100;i<=300;i++)
    {
                         n=0;
                         for(j=i;j>=1;j--)
                         {
                                          if(i%j==0)
                                          n++;
                         }
                         if(n==2)
                         {
                                 if(k>=10)
                                 break;
                                 else
                                 {
                                     vetx[k]=i;
                                     cout<<vetx[k]<<" ";
                                     k++;
                                 }
                         }
    }
    cout<<endl;
    system("pause");
}
