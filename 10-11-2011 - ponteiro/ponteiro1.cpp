//Desenvolva um programa para gerar um número aleatório de semente igual a 30 e escrever o endereço deste número na memória.
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
	int a,*p;
	srand (time(NULL));
	a=rand()%30;
	cout<<a<<endl;
	p=&a;
	cout<<p<<endl;
	system("pause");
}
