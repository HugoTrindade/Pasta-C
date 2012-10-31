#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int veta[10],vetb[10],i,soma=0;
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
                     veta[i]=rand()%72;
                     cout<<veta[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<10;i++)
    {
                     vetb[i]=rand()%72;
                     cout<<vetb[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<10;i++)
    soma=soma+(veta[i]-vetb[9-i]);
    cout<<"Soma: "<<soma<<endl;
    system("pause");
}
