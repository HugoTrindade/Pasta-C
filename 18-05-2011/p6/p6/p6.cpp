# include <iostream>
# include <time.h>
using namespace std;
int main()
{
    int num,maior,i;
    maior=0;
    srand(time(NULL));
    for (i=1;i<=10;i++)
    {
    num=rand()%350;
    cout<<num<<" ";
    if (maior<num)
    maior=num;
    }
	cout<<endl<<"o maior: "<<maior<<endl;
    system("pause");   
}