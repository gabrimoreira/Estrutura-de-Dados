#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue <string> cartas;
    cartas.push("Copas");
    cartas.push("Ouros");
    cartas.push("Espadas");
    cartas.push("Paus");

    cout << "Tamanho da fila: " << cartas.size() << endl;
    cout << "Primeira carta: " << cartas.front() << endl;
    cout << "Ulrima carta: " << cartas.back() << endl;
    while (!cartas.empty())
    {
        cout << "Primeira Carta: " << cartas.front() << endl;
        cartas.pop();
    }
    
    return 0;
}