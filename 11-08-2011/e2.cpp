# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    char* vetcor[5]={"Vermelha","Azul","Amarela","Preta","Branca"};
    int vetres[5]={0,0,0,0,0},i,k=0,maior=0,num;
    srand(time(NULL));
    for(i=0;i<80;i++)
    {
    num=rand()%5;
    cout<<num<<" ";
    vetres[num]=vetres[num]+1;
    }
    for(i=0;i<5;i++)
    {
    if(maior<vetres[i])
    {
    maior=vetres[i];
    k=i;
    }
    }
    for(i=0;i<5;i++)
    cout<<vetcor[i]<<":"<<vetres[i]<<" ";
    for(i=0;i<5;i++)
    {
    if(i==k)
    cout<<endl<<"Maior: "<<vetres[k]<<endl;
    }
    system("pause");
    }
