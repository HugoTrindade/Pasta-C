# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int veta[7],vetb[10],vetc[17],i,k=0;
    srand (time(NULL));
    for (i=0;i<7;i++)
    {
        veta[i]=rand()%60;
        cout<<veta[i]<<" ";
        }
        cout<<endl;
        for (i=0;i<10;i++)
    {
        vetb[i]=rand()%50;
        cout<<vetb[i]<<" ";
        }
        cout<<endl;
        for (i=0;i<17;i++)
        {
            if (i<7)
            vetc[i]=veta[i];
            else
            {
                vetc[i]=vetb[k];
                k=k+1;
                }
                cout<<vetc[i]<<" ";
                }
                cout<<endl;
                system("pause");
                }
