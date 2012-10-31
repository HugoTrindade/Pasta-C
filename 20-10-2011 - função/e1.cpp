//Desenvolver um programa que chame uma função que recebe um número entre 100 e 999 e que deve retornar a soma dos algarismos.
# include <iostream>
# include <time.h>
using namespace std;
int soma (int a)
{
    int mod,soma=0;
   while (a>=10)
    {
    mod=a%10;
    a=a/10;
    soma=soma+mod;
    if(a<10)
    soma=soma+a;
    }
    return soma;
}
int main ()
{
    int num,res;
    cout<<"Escreva uma numero entre 100 e 999"<<endl;
    cin>>num;
    res=soma(num);
    cout<<"Soma dos algarismos: "<<res<<endl;
    system("pause");
}
