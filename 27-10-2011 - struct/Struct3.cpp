# include <iostream>
# include <time.h>
using namespace std;
struct estoque
{
       int cod,est,prec;
       
} material[10];
int main ()
{
    int i;
    float tot1=0,tot2=0;
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
    material[i].cod=rand()%1000;
    material[i].est=rand()%100;
    material[i].prec=rand()%120;
    cout<<"codigo material:"<<material[i].cod<<"   Quantidade estoque:"<<material[i].est<<"   preco unitario:"<<material[i].prec<<endl;
    tot1=tot1+material[i].est;
    tot2=tot2+material[i].prec;
    }
    cout<<endl;
    cout<<"Valor em estoque: "<<tot1<<endl;
    cout<<"Valor total do estoque: "<<tot2<<endl;
    cout<<endl;
    system("Pause");
}
    
    
