#include <iostream>

using namespace std;

typedef struct Node {
  int valor;
  Node *prox;
} No;

int main() {

  // Ponteiro que aponta para o 1 item da lista
  No *inicio_lista_encadeada = nullptr;

  // 1 item da lista
  No item1 = {10, nullptr};

  // 2 item da lista
  No item2 = {20, nullptr};

  // 3 item da lista
  No item3 = {30, nullptr};

  // 4 item da lista
  No item4 = {40, nullptr};

  // 5 item da lista
  No item5 = {50, nullptr};

  // Definindo os ponteiros de cada item da lista
  inicio_lista_encadeada = &item1;
  item1.prox = &item2;
  item2.prox = &item3;
  item3.prox = &item4;
  item4.prox = &item5;
  item5.prox = nullptr;

  // Acessando os valores da lista encadeada
  No *No_atual_da_lista_encadeada = inicio_lista_encadeada;

  
  while (true) {

    // FAIL FAST
    if (No_atual_da_lista_encadeada == NULL) {
      break;
    } else {
      cout << endl << (*No_atual_da_lista_encadeada).valor;

      No_atual_da_lista_encadeada = No_atual_da_lista_encadeada->prox;
    }
  }


  
  
  return 0;
}