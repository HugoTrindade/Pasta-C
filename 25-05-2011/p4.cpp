//Desenvolver um programa que calcule a soma dos termos de uma progress�o aritm�tica de 5 termos sabendo-se que o primeiro termo � 4
//e a raz�o � 3.
#include<iostream>
using namespace std;
int main()
{
    int a1=4,r=3,i,soma=0;
    for (i=1;i<=5;i++)
    {
    soma=soma+a1;
    a1=a1+r;
    }
    cout<<"Soma dos termos = "<<soma<<endl;
    system("pause");
}



