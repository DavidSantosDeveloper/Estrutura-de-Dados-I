#include <iostream>
#include <stdio.h>
using namespace std;

int contar_numero_de_caracteres_de_uma_lista_char(char lista[]) {
  int numero_de_caracteres_de_uma_lista_char = 0;

  while (lista[numero_de_caracteres_de_uma_lista_char] != '\0') {
    numero_de_caracteres_de_uma_lista_char++;
  }
  return numero_de_caracteres_de_uma_lista_char;
}

void mostrar_individualmente_caracteres_de_uma_lista_char(char lista[]) {

  for (int indice_atual = 0;
       indice_atual < contar_numero_de_caracteres_de_uma_lista_char(lista);
       indice_atual++) {
    cout << lista[indice_atual] << endl;
  }

  
}

int main() {
  char frase[20] = {"uma frase"};

  mostrar_individualmente_caracteres_de_uma_lista_char(frase);
}