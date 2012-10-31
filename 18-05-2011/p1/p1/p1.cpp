# include <iostream>
# include <time.h>
using namespace std;
int main ()
{   float media;
	int num1,num2,num3;
srand (time (NULL));
num1=rand()%215;
num2=rand()%215;
num3=rand()%215;
cout<<num1<<"+"<<num2<<"+"<<num3<<endl;
media=(num1+num2+num3)/3;
cout<<printf<<media<<endl;
system("pause");
}