//Desevolver um algoritmo para gerar um n�mero rand�mico de semente igual a 20. Crie uma fun��o que calcule quantas opera��es ser�o 
//necess�rias para que se somarmos o valor 8 ao n�mero gerado o mesmo se torne maior que 43.
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
