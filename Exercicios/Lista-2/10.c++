#include <iostream>
using namespace std;

int soma(int v[], int n, int tam, int *num1, int *num2){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(v[i] + v[j] == n){
                *num1 = v[i];
                *num2 = v[j];
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int tam, n, num1, num2;
    cout << "Digite o tamanho do vetor e numero: " << endl;
    cin >> tam>>n;
    int v[tam];
    cout << "Preencha o vetor: " << endl;
    for(int i = 0; i < tam; i++){
        cin >> v[i];
    }
    if(soma(v,n,tam,&num1,&num2) == 1){
        cout << "Parabens! Na lista, existem um par de numeros que, quando somados geram "<<n<<" e sao: " << num1 <<" e "<< num2<<endl; 
    }
    else{
        cout << "Na lista nao existem dois que somados dao "<< n << endl;
    }
}