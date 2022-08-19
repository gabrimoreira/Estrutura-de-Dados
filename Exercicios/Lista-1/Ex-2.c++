#include <iostream>

using namespace std;

// Entrelaçamento livre (Desconsiderando a posição relativa).

void separa(int v[], int tam){
    for(int i = 1, j = tam - 2; i < tam/2; i+=2, j-=2){
        if(i%2 != 0){
            int aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    }
}

int main(){
    int v[] = {16,19,41,8,42,39,33,22,29,49};
    int tam = sizeof(v)/sizeof(v[0]);
    separa(v,tam);
    for(int i = 0; i < tam; i++){
        cout<<v[i]<<"-";
    }
    return 0;
}