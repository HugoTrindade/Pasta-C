//Desenvolva um programa que considere uma urna onde existe 5 bolas de cores diferentes: azul, branca, preta, amarela e vermelha.
//Considere que serão gerados 80 números aleatórios de semente 4. Calcule e escreva quantas bolas foram tiradas da urna sabendo-se
//que a bola retirada volta para a urna. Indique também qual a bola com maior frequência de retirada.
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int num,veta[5],i,maior=0,j=0;
    srand(time(NULL));
    veta[0]=0;
    veta[1]=0;
    veta[2]=0;
    veta[3]=0;
    veta[4]=0;
    for(i=1;i<=80;i++)
    {
                      num=rand()%5;
                      cout<<num<<" ";
                      if(num==0)
                      veta[0]++;
                      else
                      if(num==1)
                      veta[1]++;
                      else
                      if(num==2)
                      veta[2]++;
                      else
                      if(num==3)
                      veta[3]++;
                      else
                      if(num==4)
                      veta[4]++;
                    
    }
    for(i=0;i<5;i++)
    {
                    if(maior<veta[i])
                    {
                                     maior=veta[i];
                                     j=i;
                    }
    }
    cout<<endl<<"Azul: "<<veta[0]<<" Branca: "<<veta[1]<<" Preta: "<<veta[2]<<" Amarela: "<<veta[3]<<" Vermelha: "<<veta[4]<<endl;
    if(j==0)
    cout<<"Maior: "<<veta[j]<<" azuis"<<endl;
    else
    if(j==1)
    cout<<"Maior: "<<veta[j]<<" brancas"<<endl;
    else
    if(j==2)
    cout<<"Maior: "<<veta[j]<<" pretas"<<endl;
    else
    if(j==3)
    cout<<"Maior: "<<veta[j]<<" amarelas"<<endl;
    else
    cout<<"Maior: "<<veta[j]<<" vermelhas"<<endl;
    system("pause");
}
