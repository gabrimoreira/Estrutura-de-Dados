#include <iostream>

using namespace std;

// Entrelaçamento livre (Desconsiderando a posição relativa).

void separa(int v[], int tam){
    int cont;
    if(tam%2 == 0){
        cont = tam/2 + 1;
    }
    else{ cont = tam/2 + 2;}
    for(int i = 1; i < tam/2; i+=2, cont+=2){
            int aux = v[cont];
            v[cont] = v[i];
            v[i] = aux;
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