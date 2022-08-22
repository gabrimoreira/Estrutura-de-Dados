#include <iostream>
#include <list>
using namespace std;

int main(){
    // maneiras de declarar aula(50) = 50 elementos, aula(5,50) = 5 elementos de valor 5.
    list <int> aula, teste;
    int tam;
    list <int>::iterator it;
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    tam = 10;
    for(int i = 0; i < tam; i++){
        aula.push_front(i);
    }
    it = aula.begin();
    advance(it, 5);
    aula.insert(it,0);
    aula.erase(--it);
    //aula.clear();
    aula.sort();
    aula.reverse();
    aula.merge(teste);
    cout << "Tamanho da lista: " << aula.size() << endl;
    tam = aula.size();
    for(int i = 0; i < tam; i++){
        cout << aula.front() << endl;
        aula.pop_front();
    }

    return 0;
}