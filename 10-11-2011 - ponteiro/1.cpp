//fila: primeiro a entrar é o último a sair. FIFO

//pilha: o último a entrar é o primeiro a entrar. LIFO

//lista

//lista duplamente incadeada. 2 ponteiros, 1 para o próximo e o outro para o anterior.

//lista circular.o último elemento da lista aponta para o primeiro elemento da lista.

//para criar uma lista, ela tem que estar vazia, ou seja na hora que eu crio uma lista o primeiro ponteiro aponta para 0 (NULL)
//não posso criar uma lista contendo algo.

//ponteiro trabalha com conceito de & endereço da memória da variável * conteúdo da variável que esta no endereço

//Desenvolva um programa para gerar um número aleatório=30 e escrever o endereço deste número na memória.
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int x,*a,*q,num,soma,*endsoma;
    srand(time(NULL));
    x=rand()%30;
    num=rand()%30;
    cout<<x<<endl;
    cout<<num<<endl;
    a=&x;
    cout<<a<<endl;
    q=a;
    cout<<q<<endl;
    q=0;
    q=&num;
    cout<<q<<endl;
    soma=*a+*q;
    cout<<soma<<endl;
    endsoma=&soma;
    cout<<endsoma<<endl;    
    system("pause");
}
