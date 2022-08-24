#include <iostream>
using namespace std;

int segundo_maior(int v[], int tam){
    int max2 = v[0], max = v[0];
    for(int i = 0; i < tam; i++){
        if(max < v[i]){
            max2 = max;
            max = v[i];
        }
    }
    return max2;
}

int main(){
    int v[] = {16,19,41,8,42,39,33,22,29,48};
    int tam = sizeof(v)/sizeof(v[0]);
    segundo_maior(v,tam);
    cout << "Os segundo maior numero: " << segundo_maior(v,tam)<< endl;
    return 0;
}