#include <iostream>

using namespace std;
//Valor e posição com a mesma paridade.
//Nessa função coloquei os pares nas posições pares, assim, tanto os pares como os ímpares ficaram organizados.

void organiza(int v[], int tam){
    int cont = 0;
    for(int i = 0; i < tam; i++){
        if(v[i]%2 == 0){
            int aux = v[cont];
            v[cont] = v[i];
            v[i] = aux;
            cont+=2;
        }
    }
}

int main()
{
    int v[] = {16,19,41,8,42,39,33,22,29,48};
    int tam = sizeof(v)/sizeof(v[0]);
    organiza(v,tam);
    for(int i = 0; i < tam; i++){
        cout<<v[i]<<"-";
    }
    return 0;
}