# include <iostream>
# include <time.h>
using namespace std;
int main ()
{ int num;
srand (time (NULL));
num=rand()%80;
cout<<num<<endl;
system("pause");
}
