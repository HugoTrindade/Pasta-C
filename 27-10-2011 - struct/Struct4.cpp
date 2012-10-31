// entre 9 - 10   A
// 7 - 8          B 
// 4 - 6          C
// 0 - 3          D  
# include <iostream>
# include <time.h>
using namespace std;
struct turma
{
       int mat;
       float av1,av2;
       char nome[30];
       
} aluno[10];
int main ()
{
    int i,p1=2,p2=3;
    float media;
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
    aluno[i].mat=rand()%800;
    aluno[i].av1=rand()%11;
    aluno[i].av2=rand()%11;
    cout<<"Digite o nome:";
    cin>>aluno[i].nome;
    media=(p1*aluno[i].av1+p2*aluno[i].av2)/(p1+p2);
    cout<<"Matricula:"<<aluno[i].mat<<" Nome:"<<aluno[i].nome<<" AV1:"<<aluno[i].av1<<" AV2:"<<aluno[i].av2<<" Media:"<<media<<endl;
    if((media<=10)&&(media>=9))
    cout<<"Conceito:A   Situacao:Aprovado"<<endl;
    if((media<9)&&(media>=7))
    cout<<"Conceito:B   Situacao:Aprovado"<<endl;
    if((media<7)&&(media>=4))
    cout<<"Conceito:C   Situacao:Aprovado"<<endl;
    if((media<4)&&(media>=0))
    cout<<"Conceito:D   Situacao:Reprovado"<<endl;
    cout<<endl;
    }
    system("Pause");
}
