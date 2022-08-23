#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> num1, num2;
    int tam, i;
    num1.push_back(10);
    num1.push_back(7);
    num1.push_back(3);
    num1.push_back(4);
    num1.push_back(5);
    num2.push_back(1);
    num2.push_back(2);
    num2.push_back(6);
    num2.push_back(8);
    num2.push_back(9);
    //num1.swap(num2);
    // posição especifica num1.at();
    //num1.front e num2.back funcionam;
    // Para inserir num1.insert(num1.end() - 1, 888) penultima posição ou num1.insert(num1.begin() + 1, 888); obs.: 888 é o número a ser inserido
    tam = num1.size();
    cout << "Tamanho do vector: " << tam<< endl;
    for (int i = 0; i < tam; i++)
    {
        cout << num1[i] << " " << endl;
    }
    for (int i = 0; i < tam; i++)
    {
        cout << num2[i] << " ";
    }
    
}