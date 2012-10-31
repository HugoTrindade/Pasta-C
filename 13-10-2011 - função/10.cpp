# include <iostream>
# include <time.h>
using namespace std;
int matriz (int x, int y)
{
    int mat[5][5],soma=0;
    srand (time(NULL));
    for(x=0;x<5;x++)
    {
    for(y=0;y<5;y++)
    {
    mat[x][y]=rand()%18;
    cout<<mat[x][y]<<" ";
    if(y==2)
    soma=soma+mat[x][y];
    }
    cout<<endl;
    }
    return soma;
    }
int main()
{
    int res,i=5,j=5;
    res=matriz(i,j);
    cout<<"Soma da terceira coluna: "<<res<<endl;
    system("pause");
}
