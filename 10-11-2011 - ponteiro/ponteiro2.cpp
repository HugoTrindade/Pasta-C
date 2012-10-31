//Desenvolva um programa para gerar um número aleatório de semente igual a 30 e escrever o endereço deste número na memória.
//outro random pro segundo número aleatorio...usando o ponteiro q
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
	int a,b,*p,*q;
	srand (time(NULL));
	a=rand()%30;
	b=rand()%30;
    cout<<a<<endl;
    cout<<b<<endl;
	p=&a;
	q=&b;
	cout<<p<<endl;
	cout<<q<<endl;
	system("pause");
}
