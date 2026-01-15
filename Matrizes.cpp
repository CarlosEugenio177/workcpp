#include <iostream>
#include <new>
using namespace std;

int main() {
   int numcolunas;
   int numlinhas; 
   cin >> numlinhas >> numcolunas;

   int **matrix = new int*[numlinhas]; // aloca as linhas

   for (int i = 0; i < numlinhas; i++){ // aloca as colunas
   matrix[i] = new int[numcolunas];
   }

   matrix[0][0] = 12; // atribui valor a posicao [0][0]
   return 0;
}