#include "pilha.h"
#include <iostream>
using namespace std;

int main() {
  std::cout << "Hello World!\n";
  No *no = new No("item 1");
  No *no2 = new No("item 2");
  No *no3 = new No("item 3");
  No *no4 = new No("item 4");
  No *no5 = new No("item 5");

  Pilha pilha(no);
  pilha.adicionarAoTopo(no2);
  pilha.adicionarAoTopo(no3);
  pilha.adicionarAoTopo(no4);
  pilha.adicionarAoTopo(no5);
  cout << pilha.getTamanho();
  pilha.desempilharPilha();
  pilha.mostrarPilha();


  
}