//Desenvolver um programa para gerar um vetor de 5 elementos de semente 15 e escreve o endereço de cada elemento do vetor.
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int vet[5],*p,i;
    srand(time(NULL));
    for (i=0;i<5;i++)
    {
    vet[i]=rand()%15;
    p=&vet[i];
    cout<<vet[i]<<" "<<p<<endl;
    }
    cout<<endl;
    system("pause");
}
