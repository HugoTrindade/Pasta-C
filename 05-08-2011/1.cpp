# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int veta[10],vetb[10],vetc[10],i;
    srand (time(NULL));
    for (i=0;i<10;i++)
    {
        veta[i]=rand()%60;
        cout<<veta[i]<<" ";
        }
        cout<<endl;
        for (i=0;i<10;i++)
    {
        vetb[i]=rand()%60;
        cout<<vetb[i]<<" ";
        }
        cout<<endl;
        for (i=0;i<10;i++)
        {
            vetc[i]=veta[i] * vetb[i];
            cout<<vetc[i]<<" ";
                }
                cout<<endl;
                system("pause");
                }
