# include <iostream>
# include <time.h>
using namespace std;
int quad(int x,int b)
{
int result;
result=x*b;
return result; 
}
int main ()
{
int y=9,k=5,res=quad(y,k);
cout<<res<<endl;
system("pause");
}
