//desenvolver um programa para gerar um vetor de 5 elementos de semente=15 e escreva o endereço de cada elemento do vetor.
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int vet[5],*a,i;
    srand(time(NULL));
    for(i=0;i<5;i++)
    {
     vet[i]=rand()%15;
     cout<<vet[i]<<" ";
     a=&vet[i];     
     cout<<a<<" ";
    }
    cout<<endl;
    system("pause");
}
     
