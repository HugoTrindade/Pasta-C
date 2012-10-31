//Desenvolver um programa pra gerar 10 números aleatorios de semente 100 e ordená-los de forma ascendente.
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int vet[10],i,aux,iaux,maior;
    srand (time(NULL));
    for(i=9;i>=0;i--)
    {
    vet[i]=rand()%100;
    cout<<vet[i]<<" ";
    }
    for(i=0;i<=9;i++)
    {
    if(maior<vet[i])
    {
    maior=vet[i];
    iaux=i;
}
}
vet[9]=maior;
 for(i=9;i>=0;i--)
 {
 if(vet[i]<vet[i-1])
 {
 aux=vet[i];
 vet[i]=vet[i-1];
 vet[i-1]=aux;
}
}
cout<<endl;
for(i=9;i>=0;i--)
{
cout<<vet[i]<<" ";
}
cout<<endl;
system("pause");
}
