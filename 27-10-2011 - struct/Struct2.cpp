# include <iostream>
# include <time.h>
using namespace std;
struct turma
{
       int mat;
       float av1,av2;
       
} aluno[5];
int main ()
{
    int i;
    float media;
    srand(time(NULL));
    for(i=0;i<5;i++)
    {
    aluno[i].mat=rand()%800;
    aluno[i].av1=rand()%11;
    aluno[i].av2=rand()%11;
    media=(aluno[i].av1+aluno[i].av2)/2;
    cout<<"Matricula:"<<aluno[i].mat<<" AV1:"<<aluno[i].av1<<" AV2:"<<aluno[i].av2<<" Media:"<<media<<endl;
    if(media>7)
    cout<<"Aluno Aprovado"<<endl;
    if((media>4)&&(media<=7))
    cout<<"Aluno de recuperacao"<<endl;
    if(media<=4)
    cout<<"Aluno reprovado"<<endl;
    cout<<endl;
    }
    system("Pause");
}
    
    
