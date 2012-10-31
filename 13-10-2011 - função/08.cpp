# include <iostream>
# include <time.h>
using namespace std;
int soma (int x)
{
    int mod,soma=0;
    while (x>=10)
    {
    mod=x%10;
    x=x/10;
    soma=soma+mod;
    if(x<10)
    soma=soma+x;
    }
    return soma;
}
int main ()
{
    int a,res;
    srand(time(NULL));
    a=rand()%12345;
    cout<<a<<endl;
    res=soma(a);
    cout<<res<<endl;
    system("pause");
}
