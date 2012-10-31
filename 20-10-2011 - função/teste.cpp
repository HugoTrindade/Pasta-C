# include <iostream>
# include <time.h>
using namespace std;
int prod (int a)
{
    int c,d,u,prod=0;
    if(a>=100)
    {
    c=a/100;
    d=(a/10)%10;
    u=a%10;
    prod=c*d*u;
    return prod;
    }
    else
    prod=0;
    return prod;
    }
int main ()
{
    int num,res;
    srand(time(NULL));
    num=rand()%999;
    res=prod(num);
    while(res==0)
    {
    num=rand()%999;
    res=prod(num);
    }
    cout<<num<<endl;
    cout<<"Produto dos algarismos: "<<res<<endl;
    system("pause");
}
