//Desevolver um algoritmo para gerar um número randômico de semente igual a 20. Crie uma função que calcule quantas operações serão 
//necessárias para que se somarmos o valor 8 ao número gerado o mesmo se torne maior que 43.
# include <iostream>
# include <time.h>
using namespace std;
int cont(int x)
{
int cont;
while (x<=43)
{
x=x+8;
cont++;
}
return cont;
}
int main ()
{
    int a,tot;
    srand(time(NULL));
    a=rand()%20;
    cout<<a<<endl;
    tot=cont(a);
    cout<<"Foram necessarias: "<<tot<<" operacoes"<<endl;
    system("pause");
}
