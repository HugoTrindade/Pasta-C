//Escreva uma função que receba um número aleatorio de semente igual 40.A função deverá gerar 10 números aleatórios de semente igual
// a 40 e retornar se o primeiro número gerado se encontra na série dos números da função.Escrevendo a mensagem correspondente.
# include <iostream>
# include <time.h>
using namespace std;
int igual (int a)
{
    int vet[10],x,i;
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
    vet[i]=rand()%40;
    cout<<vet[i]<<" ";
    if(vet[i]==a)
    x=1;
    }
    return x;
}
int main ()
{
    int num,res;
    srand(time(NULL));
    num=rand()%40;
    cout<<num<<endl;
    res=igual(num);
    cout<<endl;
    if(res==1)
    cout<<"O numero esta presente na serie"<<endl;
    else
    cout<<"O numero nao esta presente na serie"<<endl;
    system("pause");
}
