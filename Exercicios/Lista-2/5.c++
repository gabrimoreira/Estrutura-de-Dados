#include <iostream>
using namespace std;

void minmax(int v[], int tam, int *min, int *max){
    *min = v[0], *max = v[0];
    for(int i = 0; i < tam; i++){
        if(v[i] < *min){
        *min = v[i];
        }
        if(v[i] > *max){
            *max = v[i];
        }
    }
}

int main(){
    int v[] = {16,19,41,8,42,39,33,22,29,48};
    int tam = sizeof(v)/sizeof(v[0]);
    int min, max;
    minmax(v,tam,&min,&max);
    cout << "Os numeros de com maior diferenca absoluta sao: " << min << " - " << max << endl;

    return 0;
}