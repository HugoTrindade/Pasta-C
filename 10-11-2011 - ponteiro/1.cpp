//fila: primeiro a entrar � o �ltimo a sair. FIFO

//pilha: o �ltimo a entrar � o primeiro a entrar. LIFO

//lista

//lista duplamente incadeada. 2 ponteiros, 1 para o pr�ximo e o outro para o anterior.

//lista circular.o �ltimo elemento da lista aponta para o primeiro elemento da lista.

//para criar uma lista, ela tem que estar vazia, ou seja na hora que eu crio uma lista o primeiro ponteiro aponta para 0 (NULL)
//n�o posso criar uma lista contendo algo.

//ponteiro trabalha com conceito de & endere�o da mem�ria da vari�vel * conte�do da vari�vel que esta no endere�o

//Desenvolva um programa para gerar um n�mero aleat�rio=30 e escrever o endere�o deste n�mero na mem�ria.
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
