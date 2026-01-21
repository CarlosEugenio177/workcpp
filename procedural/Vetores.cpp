#include <iostream>
#include <new>
using namespace std;

int main() {
    int tamanho;
    cout << "Tamanho do vetor:" << endl;
    cin >> tamanho;
    int *vetor = new int[tamanho];
    vetor[0] = 10;
    vetor[1] = 20;
    cout << "Vetor:" << vetor[0] << "," << vetor[1] << endl;
    return 0;
}