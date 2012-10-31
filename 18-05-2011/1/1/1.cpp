//Gerar 10 números aleatorios com semente 12, somar todos
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
	int i,soma,num;
	srand(time(NULL));
	soma=0;
	for (i=1;i<=10;i++)
	{ 
		num=rand()%12;
		soma=soma+num;
		cout<<num<<" ";
	}
	cout<<"soma"<<" "<<soma<<endl;
	system ("pause");
}