#include <iostream>
using namespace std;

class Pessoa {
private:
    int idade;
    string nome;

    public:
    void setidade(int age){
        idade = age;
    }

    int getidade(){
        return idade;
    }

     void setnome(string name){
        nome = name;
    }

    string getnome(){
        return nome;
    }

};

int main() {
    Pessoa pessoa;
    pessoa.setidade(22);
    pessoa.setnome("Carlos");
    std::cout << "Nome e: " << pessoa.getnome()<< "idade e: " << pessoa.getidade() << std::endl;
   return 0 ;
}
