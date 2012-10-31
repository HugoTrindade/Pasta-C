# include <iostream>
# include <time.h>
using namespace std;
struct turma
{
       int mat;
       float av1,av2;
       
} aluno;
int main ()
{
    float media;
    srand(time(NULL));
    aluno.mat=rand()%800;
    aluno.av1=rand()%11;
    aluno.av2=rand()%11;
    media=(aluno.av1+aluno.av2)/2;
    cout<<"Matricula:"<<aluno.mat<<" AV1:"<<aluno.av1<<" AV2:"<<aluno.av2<<" Media:"<<media<<endl;
    if(media>7)
    cout<<"Aluno Aprovado"<<endl;
    if((media>4)&&(media<=7))
    cout<<"Aluno de recuperacao"<<endl;
    if(media<=4)
    cout<<"Aluno reprovado"<<endl;
    system("Pause");
}
    
    
