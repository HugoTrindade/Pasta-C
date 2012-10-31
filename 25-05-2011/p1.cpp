//Desenvolver um programa para gerar um numero aleatorio de semente 21. Gerar 10 numeros aleatorios de semente 43
//e pesquisar e escrever a mensagem conrrespondente caso o primeiro numero esteja na serie gerada.
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int num1,num2,i,sinal=0;
    srand(time(NULL));
    num1=rand()%21;
    cout<<num1<<endl;
    for (i=1;i<=10;i++)
    {
        num2=rand()%43;
        cout<<num2<<" ";
        if (num1==num2)
        {
        cout<<endl<<num1<<" esta na serie gerada."<<endl;
        sinal=1;
        break;
        }
    }
    if (sinal==0)
    cout<<endl<<"O numero nao esta na serie gerada."<<endl;
    system("pause"); 
}   
