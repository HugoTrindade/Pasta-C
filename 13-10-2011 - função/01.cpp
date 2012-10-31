# include <iostream>
# include <time.h>
using namespace std;
int soma (int x)
{
int result,i;
for(i=0;i<=x;i++)
result=result+i;
return result;
}
int main ()
{
    int a,res;
    srand(time(NULL));
    a=rand()%46;
    cout<<a<<endl;
    res=soma(a);
    cout<<res<<endl;
    system("pause");
}
