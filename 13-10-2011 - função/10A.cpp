# include <iostream>
# include <time.h>
using namespace std;
int matriz (int x, int y)
{
    int mat[5][5],dp=0,ds=0,k=4,soma=0;
    srand (time(NULL));
    for(x=0;x<5;x++)
    {
    for(y=0;y<5;y++)
    {
    mat[x][y]=rand()%5;
    cout<<mat[x][y]<<" ";
    if(x==k)
    ds=ds+mat[x][y];
    if(x==y)
    dp=dp+mat[x][y];
    }
    cout<<endl;
    k--;
    }
    cout<<"Diagonal Principal: "<<dp<<endl;
    cout<<"Diagonal Secundaria: "<<ds<<endl;
    soma=dp+ds;
    return soma;
    }
int main()
{
    int res,i=5,j=5;
    res=matriz(i,j);
    cout<<"Soma da diagonal principal com a secundaria: "<<res<<endl;
    system("pause");
}
