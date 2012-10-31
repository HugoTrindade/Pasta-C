# include <iostream>
# include <time.h>
using namespace std;
int main()
{
    int num,menor,i;
    menor=350;
    srand(time(NULL));
    for (i=1;i<=10;i++)
    {
    num=rand()%350;
    cout<<num<<" ";
    if (menor>num)
    menor=num;
    }
    cout<<menor;
    
 system("pause");   
}
    
