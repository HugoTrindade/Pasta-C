# include <iostream>
using namespace std;
int main()
{
int i;
for (i=100;i<=999;i++)
{
if ((i%23==0)&&(i%92==0))
cout<<i<<endl;
}
system("pause");
}