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

bool compara_se_2_listas_char_sao_iguais(char lista1[], char lista2[]) {
  if (contar_numero_de_caracteres_de_uma_lista_char(lista1) !=
      contar_numero_de_caracteres_de_uma_lista_char(lista2)) {
    return false;
  }

  else {
    int numero_de_caracteres_igual_entre_as_frases = 0;

    for (int indice = 0;
         indice < contar_numero_de_caracteres_de_uma_lista_char(lista1);
         indice++) {
      if (lista1[indice] == lista2[indice]) {
        numero_de_caracteres_igual_entre_as_frases++;
      }
    }

    if (numero_de_caracteres_igual_entre_as_frases ==
        contar_numero_de_caracteres_de_uma_lista_char(lista1)) {
      return true;
    } else {
      return false;
    }
  }
}



int main() {
  char frase1[] = {"frase1"};
  char frase2[] = {"frase1"};

  if (compara_se_2_listas_char_sao_iguais(frase1, frase2)) {
    cout << "as frases sao iguais";

  } else {
    cout << "as frases nao sao iguais!!!";
  }
}
