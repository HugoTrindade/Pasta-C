# include <iostream>
# include <time.h>
using namespace std;
int main()
{
    int num;
    float res;
    srand(time(NULL));
    num=rand()%890;
    cout<<num<<endl;
    res=num+(num*23.9/100);
    cout<<res<<endl;
    system("pause");
}