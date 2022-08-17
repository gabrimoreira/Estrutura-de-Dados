#include <iostream>

using namespace std;

//Rotação de Vetor para direita.

void rdireita(int v[], int tamreal){
        int i = tamreal - 1;
        while(i > 0){
        int aux = v[i];
        v[i] = v[i-1];
        v[i-1] = aux;
        i--;  
    }
}
int main(){
    int v[] = {16,39,10,50,0,0,0,0,0,0};
    int tam = sizeof(v)/sizeof(v[0]), tamreal = 0;
    for(int i = 0; i < tam; i++){
        if(v[i] !=0){
            tamreal++; 
        }
    }
    rdireita(v,tamreal);
    for(int i = 0; i < tam; i++){
        printf("%d-", v[i]);
    }
    return 0;
}