//Gere 2 números aleatórios de semente=1000. Atribua "NULL" aos ponteiros p1 e p2. Iguale p1 e p2 e o primeiro aleatório gerado.
//Acrescente 100 ao ponteiro p1 e p2, escreva o valor de *p1, *p2, v1, v2. Considere ainda que o valor de v1 foi somado o valor 50.
//Escreva o novo valor de p1. Mostre o valor do endereço da v2.
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int v1,v2,*p1=NULL,*p2=NULL;
    v1=100;
    v2=200;
    cout<<"Random 1= "<<v1<<endl;
    cout<<"Random 2= "<<v2<<endl;
    p1=p2=&v1;
    cout<<"p1 igualado a p2= "<<*p1<<endl;
    cout<<"p2 igualado a p1= "<<*p2<<endl;
    *p1=*p1+100;
    cout<<"p1 somado com 100= "<<*p1<<endl;
    *p2=*p2+100;    
    cout<<"p2 somado com 100= "<<*p2<<endl;
    p2=&v2;
    v2=*p1;
    v1=v1+50;
    p1=&v1;
    cout<<"valor de p1 somado a v1+50= "<<*p1<<endl;    
    cout<<"Valor no endereco do randomico v2= "<<*p2<<endl;
    system("pause");
}
