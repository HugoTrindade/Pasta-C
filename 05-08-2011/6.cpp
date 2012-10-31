# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int vet[10],iaux,i,menor=65;
    srand (time(NULL));
    for (i=0;i<10;i++)
    {
       vet[i]=rand()%65;
       cout<<vet[i]<<" ";
       if (vet[i]<menor)
       {menor=vet[i];
       iaux=i+1;
       }
       }
       cout<<endl;
       cout<<iaux<<" "<<menor<<endl;
       system("pause");
       }
