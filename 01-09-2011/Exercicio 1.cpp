#include <iostream>
#include <time.h>
using namespace std;
int main ()
{
    int mat[5][5],i,j,dp[5],ds[5],k=4,soma=0,soma2=0,somat=0;
    srand (time(NULL));
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            mat[i][j]=rand()%20;
            cout<<mat[i][j]<<" ";
            }
            cout<<endl;
            }
            cout<<endl;
            for (i=0;i<5;i++)
            {
            for (j=0;j<5;j++)
            {
            if(i==j)
            dp[i]=mat[i][j];
            }
            }
             for (i=0;i<5;i++)
            {
            ds[i]=mat[i][k];
            k=k-1;
            }
            for(i=0;i<5;i++)
            cout<<dp[i]<<" ";
            cout<<endl;
            for(i=0;i<5;i++)
            cout<<ds[i]<<" ";
            cout<<endl;
            for(i=0;i<5;i++)
            {
            if(dp[i]%2==0)
            soma=soma+dp[i];
            }
            cout<<"soma do par: "<<soma;
            cout<<endl;
            for(i=0;i<5;i++)
            {
            if(ds[i]%2==0)
            soma2=soma2;
            else
            soma2=soma2+ds[i];
            }
            cout<<"soma do impar: "<<soma2;
            somat=soma+soma2;
            cout<<endl;
            cout<<"soma dos pares e impares= "<<somat<<endl;
            system("pause");
            }
