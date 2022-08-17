#include <iostream>

using namespace std;

//Inversão.

void inverte(int v[], int tam){
    for(int i = 0; i < tam/2; i++){
        int aux = v[i];
        v[i] = v[tam-1-i];
        v[tam-1-i] = aux;
    }
}
int main(){
    int v[] = {48,29,22,33,39,42,8,41,19,16};
    int tam = sizeof(v)/sizeof(v[0]);
    inverte(v,tam);
    for(int i = 0; i < tam; i++){
        cout<<v[i]<<"-";
    }
    return 0;
}