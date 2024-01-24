#include <iostream>
#include <stdio.h>
using namespace std;

int numero_de_elementos_de_uma_lista(int lista[]) {
  int numero_de_elementos_de_uma_lista = 0;

  while (lista[numero_de_elementos_de_uma_lista] != 0) {
    numero_de_elementos_de_uma_lista++;
  }

  return numero_de_elementos_de_uma_lista;
}



int main() {
  std::cout << "Hello World!\n";

  int lista_homogenia[20] = {4, 1, 2,2,3,5,6,7,8,1,12,15};
  lista_homogenia[numero_de_elementos_de_uma_lista(lista_homogenia)]=20;

  
  for (int i = 0; i < numero_de_elementos_de_uma_lista(lista_homogenia); i++) {
    printf(" lista[%d] -> valor: %d \n", i,lista_homogenia[i]);
  }
}
