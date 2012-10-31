//Gere um numero aleatorio de semente 7 e calcule o seu fatorial.
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int num,i;
    srand(time(NULL));
    num=rand()%7;
    cout<<num<<endl;
    for (i=num-1;i>=2;i--)
    num=num*i;
    cout<<"Fatorial = "<<num<<endl;
    system("pause");
}
