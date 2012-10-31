# include <iostream>
# include <time.h>
using namespace std;
void soma (int a)
{
    int c,d,u,soma=0;
    c=a/100;
    d=(a/10)%10;
    u=a%10;
    soma=c+d+u;
    cout<<"Soma dos algarismos: "<<soma<<endl;;
}
int main ()
{
    int num;
    cout<<"Escreva uma numero entre 100 e 999"<<endl;
    cin>>num;
    soma(num);
    system("pause");
}
