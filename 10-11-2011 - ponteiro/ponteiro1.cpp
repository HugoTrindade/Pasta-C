//Desenvolva um programa para gerar um n�mero aleat�rio de semente igual a 30 e escrever o endere�o deste n�mero na mem�ria.
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
