#include <iostream>
#include <time.h>
using namespace std;
int main ()
{int veta [10], i;
srand (time(NULL));
for (i=0; i<10; i++)
{veta[i]=rand()%40;
cout<<veta[i]<<" ";
}
cout<<endl;
for (i=0;i<10;i++)
{
if ( veta[i] % 2==0)
cout<<veta[i]<<" ";
}
cout<<endl;
system("pause");
}
