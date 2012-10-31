# include <iostream>
# include <time.h>
using namespace std;
int fatorial (int a)
{
int fat=1;
for(a=a;a>1;a--)
fat=fat*a;    
return fat;    
}    
int main ()
{
    int a,res;
    srand(time(NULL));
    a=rand()%8;
    cout<<a<<endl;
    res=fatorial(a);
    cout<<res<<endl;
    system("pause");
}    
