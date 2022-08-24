#include <iostream>
using namespace std;

int repetido(int v[], int tam){
    int rep;
    for(int i = 0; i < tam-1; i++){
        rep = v[i];
        for(int j = i + 1; j < tam; j++){
            if(rep == v[j]){
                return rep;
            }
        }
        
    }
    return rep;
}

int main(){
    int v[] = {6,19,22,8,42,39,33,22,29,48};
    int tam = sizeof(v)/sizeof(v[0]);
    repetido(v,tam);
    cout << "O elemento repetido: " << repetido(v,tam)<< endl;
    return 0;
}