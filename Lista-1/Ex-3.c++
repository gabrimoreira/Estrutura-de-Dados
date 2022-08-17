#include <iostream>

using namespace std;

//Entreleçamento Estrito (Considerando a posição relativa).

void organiza(int v[], int tam){
    int vaux1[tam/2], vaux2[tam/2];
    for(int i = 0; i < tam/2;i++){
        vaux1[i] = v[i];
    }
    for(int i = tam/2, j=0; i < tam;i++,j++){
        vaux2[j] = v[i];
    }
    for(int i = 0, j = 0; i < tam;i++, j++){
        v[i] = vaux1[j];
        i++;
        v[i] = vaux2[j];
    }
}

int main(){
    int v[] = {16,19,41,8,42,39,33,22,29,49};
    int tam = sizeof(v)/sizeof(v[0]);
    organiza(v,tam);
    for(int i = 0; i < tam; i++){
        cout<<v[i]<<"-";
    }
    return 0;
}