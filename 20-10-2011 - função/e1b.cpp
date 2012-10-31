//Desenvolver um programa que chame uma função que recebe um número entre 100 e 999 e que deve retornar a soma dos algarismos.
# include <iostream>
# include <time.h>
using namespace std;
int soma (int a)
{
    int c,d,u,soma=0;
    c=a/100;
    d=(a/10)%10;
    u=a%10;
    soma=c+d+u;
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
