# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int veta[10],i,aux,k=9;
    srand (time(NULL));
    for (i=0;i<10;i++)
    {
        veta[i]=rand()%60;
        cout<<veta[i]<<" ";
        }
        cout<<endl;
        for (i=0;i<5;i++)
        {
            aux=veta[i];
            veta[i]=veta[k];
            veta[k]=aux;
            k=k-1;            
            }
            for (i=0;i<10;i++)
            {
                cout<<veta[i]<<" ";
                }
                cout<<endl;
                system("pause");
                }
