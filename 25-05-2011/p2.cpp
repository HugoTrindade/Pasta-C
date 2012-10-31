//Desenvolva um programa utilizando o comando while para calcular quantas operações serão necessarias para que um numero aleatorio de 
//semente 43 seja maior que 81 se somarmos a ele o valor 7.
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int num,tot=0;
    srand(time(NULL));
    num=rand()%43;
    cout<<num<<endl;
    while (num<=81)
    {
          num=num+7;
          tot++;
    }
    cout<<"Foram usadas "<<tot<<" operacoes."<<endl;
    system("pause");
}
