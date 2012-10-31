//Usando o comando while desenvolva um programa para: a altura da criança a=80cm, altura da criança b=110cm, crescimento de a=8cm/ano,
//crescimento da b=5cm/ano. Em quantos anos a criança a estará maior que a b.
#include<iostream>
using namespace std;
int main()
{
    int ca=80,cb=110,ta=8,tb=5,ano=0;
    while (ca<=cb)
    {
          ca=ca+ta;
          cb=cb+tb;
          ano++;
    }
    cout<<"Anos: "<<ano<<endl<<"Crianca A: "<<ca<<" cm"<<endl<<"Crianca B: "<<cb<<" cm"<<endl;
    system("pause");
}
