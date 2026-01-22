#include <iostream>
#include <new>
using namespace std;

int main() {
   int numcolunas;
   int numlinhas; 
   cin >> numlinhas >> numcolunas;

   int** matrix = new int*[numlinhas]; // aloca as linhas

   for (int i = 0; i < numlinhas; i++){ // aloca as colunas
   matrix[i] = new int[numcolunas];
   }

    for (int i = 0; i < numlinhas; i++){ // preenchendo a matriz
      for (int j = 0; j <numcolunas; j++){
         matrix[i][j] = i + j; 
      }
   }

   for (int i = 0; i < numlinhas; i++){ // imprimindo a matriz
      for (int j = 0; j <numcolunas; j++){
         cout << matrix[i][j];
      }
      cout << "\n";
   }
   for (int i = 0; i < numlinhas; i++) {
    delete[] matrix[i];
   }
   delete[] matrix;

   return 0;
}