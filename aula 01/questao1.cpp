#include <iostream>
#include <stdio.h>
using namespace std;

char frase[20];

int contar_numero_de_caracteres_de_uma_lista_char(char lista[]){
  int numero_de_caracteres_de_uma_lista_char=0;

  while(lista[numero_de_caracteres_de_uma_lista_char]!='\0'){
    numero_de_caracteres_de_uma_lista_char++;
  }
  return numero_de_caracteres_de_uma_lista_char;
}

int main() {

  printf("Digite o valor: ");

  scanf("%s", &frase);

  cout << "A palavra: "<<frase<<" tem "<<contar_numero_de_caracteres_de_uma_lista_char(frase)<<" caracteres!!!";
}
