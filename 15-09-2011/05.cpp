//Desenvolver um programa que considere o pátio de um empresa como uma matriz de 5x5 cujo os elementos correspondem a números aleatorios de 
//semente igual a 200 onde o ultimo algarismo corresponde ao tipo de material e os demais correspondem ao peso do material. Deverá ser abandonado
//todos os números menores que 10 e os terminado em 0 e maiores ou igual a 6. Calcular e escrever a quantidade e tipo de material no pátio da 
//empresa.  
# include <iostream>
# include <time.h>
using namespace std;
int main ()
{
    int mat[5][5],i,j,cod=0,vet_pes[5]={0,0,0,0,0},vet_mat[5]={0,0,0,0,0},pes=0,k=1;
    char* vet_lol[5]={"Ferro","Pedra","Arame","Cimento","Areia"};
    srand(time(NULL));
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {
    mat[i][j]=rand()%200;
    cout<<mat[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;
    while(k<=5)
    {
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {
    if(mat[i][j]>100)
    {
    cod=mat[i][j]%10;
    pes=mat[i][j]/10;
    if(cod==k)
    {
    vet_pes[k-1]=vet_pes[k-1]+pes;
    vet_mat[k-1]=vet_mat[k-1]+1;
    }
    }
    }
    }
    k++;
    cod=0;
    pes=0;
    }
    for(i=0;i<5;i++)
    {
    cout<<endl;
    cout<<vet_lol[i]<<" "<<vet_mat[i]<<" "<<vet_pes[i];
    }
    cout<<endl;
    system("pause");
    }
