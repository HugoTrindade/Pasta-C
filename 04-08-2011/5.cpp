#include <iostream>
#include <time.h>
using namespace std;
int main ()
{int veta [10],a, i;
srand (time(NULL));
for (i=0; i<10; i++)
{
   veta[i]=rand()%60;
cout<<veta[i]<<" ";
}
cout<<endl;
for (i=0;i<10;i++)
{
if ( i % 2==0)
veta[i]=veta[i]*3;
else
{a=veta[i]%2;
veta[i]=a;
}
}
cout<<endl;
for(i=0;i<10;i++)
{
cout<<veta[i]<<"  ";
}
cout<<endl;
system("pause");
}
