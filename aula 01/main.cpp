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

bool comparar_se_2_strings_sao_iguais(string frase1,string frase2){
    if(frase1==frase2){
        return  true;
    }
  else{
    return  false;
  }
}

int main() {
      string frase1="frase1";
      string frase2="frase1";


    if(comparar_se_2_strings_sao_iguais(frase1,frase2)){
        cout<<"frases iguais !!!!";
    }
    else{
      cout<<"frases diferentes!!!";
    }

      
}
