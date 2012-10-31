# include <iostream>
# include <time.h>
using namespace std;
int quad(int x)
{
int result;
result=x*x;
return result; 
}
int main ()
{
int y=6,res=quad(y);
cout<<res<<endl;
system("pause");
}
