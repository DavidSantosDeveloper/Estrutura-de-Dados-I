#include <iostream>

using namespace std;

int contar_tamanho_lista(string *ptr) {
  int numero_de_elementos_da_lista = 0;
  int indice_atual_da_lista = 0;
  
  while (*(ptr+indice_atual_da_lista) != "\0") {
    numero_de_elementos_da_lista++;
    indice_atual_da_lista++;
    cout << "loop " << indice_atual_da_lista << endl;
  }

  return numero_de_elementos_da_lista;
}


int main() {
  int valor = 123;

  int *ponteiro = &valor;

  cout << "endereco_valor=> " << ponteiro << endl;
  cout << "valor => " << *ponteiro << endl << endl;

  string lista[2] = {"davi", "fco david"};

  
  

  string *ponteiro_da_lista = lista;

  cout << contar_tamanho_lista(lista);



  

  return 0;
}