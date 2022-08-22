#include <iostream>
#include <stack>

using namespace std;

int main(){
    //criando a pilha
    stack <string> cartas;
    //verificando se a pilha está vazia
    if(cartas.empty()){
        cout << "Pilha vazia" << endl;
    }
    else{
        cout << "Pilha com cartas" << endl;
    }
    cartas.push("copas");
    cartas.push("espadas");
    cartas.push("ouros");
    cartas.push("paus");
        if(cartas.empty()){
        cout << "Pilha vazia" << endl;
    }
    else{
        cout << "Pilha com cartas" << endl;
    }
    //Processo para retirar todos os elementos da pilha
    while (!cartas.empty())
    {
        cartas.pop();
    }
    
    cout << "Tamanho da pilha: " << cartas.size() << endl;
    cout << "Carta do topo: " << cartas.top() << endl;
    cout << "Nova carta do topo: " << cartas.top() << endl;
    return 0;
}