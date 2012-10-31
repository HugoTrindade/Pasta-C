# include <iostream>
# include <time.h>
using namespace std;
int main()
{   
    int num1,num2,i;
    srand(time(NULL));
    num1=rand()%15;
    cout<<"primeiro numero: "<<num1<<endl;
    for (i=1;i<=10;i++)
    {
    num2=rand()%21;
    cout<<num2<<" "<<endl;
      if (num1==num2)
    cout<<"esta na serie"<<endl;
    else
    cout<<"nao esta na serie"<<endl;
    }
     system("pause");   
     }
