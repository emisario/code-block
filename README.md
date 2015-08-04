# code-block
#include <iostream>

int i, j, matriz [4][4];
float v[4];
int main ()
{
//cout <<"ingresa los datos de la matriz:" <<endl;

for (i=0;i<=4;i++)
    {
for (j=0;j<=4;j++)
{
cin>> matriz[i][j];
v[i]>= matriz[i][j];
}
}

//cout << "LOS VALORES DE LAS MATRIZ SON:"<<endl;

for (i=0; i<4;i++){
//cout<<"\n";

for (j=0; j<4;j++){
//cout<<"["<<matriz[i][j]<<"]";
}
}
//cout<<"\n\nLOS PROMEDIOS DE CADA FILA SON: "<<endl;
for(i=0; i<4; i++){
v[i] = v[i] / 4;
//cout<<"n "<<v[i];
}

return 0;
}
