# include <iostream>
# include <time.h>
using namespace std;
int compara (int a, int b)
{
    int st,x,y;
x=a%10;
y=b%10;
if(x==y)
st=0;
else
st=1;
return st;
}
int main ()
{
    int ra,rb,res;
    srand(time(NULL));
    ra=rand()%2356;
    rb=rand()%1254;
    res=compara(ra,rb);
    if(res==0)
    cout<<ra<<" - "<<rb<<" => encaicha";
    else
    cout<<ra<<" - "<<rb<<" => nao encaicha";
    cout<<endl;
    system("pause");
}
    
