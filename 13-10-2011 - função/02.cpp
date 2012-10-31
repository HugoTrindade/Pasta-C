# include <iostream>
# include <string.h>
using namespace std;
char compara (char n1[25],char n2[25])
{
int st;
if (strcmp (n1,n2)==0)
st=0;
else
st=1;
return st;
}
int main ()
{
    int res;
    char nome1[25],nome2[25];
    cout<<"Digite nome 1: "<<endl;
    cin>>nome1;
    cout<<"Digite nome 2: "<<endl;
    cin>>nome2;
    res=compara(nome1,nome2);
    cout<<endl;
    if(res==0)
    cout<<"Nomes iguais"<<endl;
    else
    cout<<"Nomes diferentes"<<endl;
    cout<<endl;
    system ("pause");
}
