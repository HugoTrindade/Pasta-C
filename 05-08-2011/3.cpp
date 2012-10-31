# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int vet[20],iaux,i,maior=0;
    srand (time(NULL));
    for (i=0;i<20;i++)
    {
       vet[i]=rand()%43;
       cout<<vet[i]<<" ";
       if (vet[i]>maior)
       {maior=vet[i];
       iaux=i+1;
       }
       }
       cout<<endl;
       cout<<iaux<<" "<<maior<<endl;
       system("pause");
       }
