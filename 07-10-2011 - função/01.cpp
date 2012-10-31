//Desenvolva uma função que receba os 10 primeiros número inteiros e retorne o quadrado de cada um.
# include <iostream>
using namespace std;
int quad (int x)
{
int result;
result=x*x;
return result;
}
int main()
{
    int i,res;
    for(i=1;i<=10;i++)
    {
    res=quad(i);
    cout<<res<<" "<<endl;
    }
    system("pause");
}
    
