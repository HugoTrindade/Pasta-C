//Desenvolva um programa para gerar um n�mero aleat�rio de semente igual a 30 e escrever o endere�o deste n�mero na mem�ria.
//outro random pro segundo n�mero aleatorio...usando o ponteiro q
//somar
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
	int a,b,*p,*q,soma;
	srand (time(NULL));
	a=rand()%30;
	b=rand()%30;
    cout<<a<<endl;
    cout<<b<<endl;
	p=&a;
	q=&b;
	cout<<endl;
	cout<<p<<endl;
	cout<<q<<endl;
	soma=*p+*q;
	cout<<endl;
	cout<<soma<<endl;
	system("pause");
}
