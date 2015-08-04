#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    int i, j, matriz [4][4];
    float v[4];

    for (i=0;i<=4;i++) {
        for (j=0;j<=4;j++) {
            cin >> matriz[i][j];
            v[i] >= matriz[i][j];
        }
    }

    for (i=0; i<4;i++) {
        for (j=0; j<4;j++) {
            //cout<<"["<<matriz[i][j]<<"]";
        }
    }

    for(i=0; i<4; i++) {
        v[i] = v[i] / 4;
        //cout<<"n "<<v[i];
    }

    return 0;
}
