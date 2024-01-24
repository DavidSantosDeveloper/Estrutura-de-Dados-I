#include <iostream>
using namespace std;

typedef struct No {
  string item;
  No *prox = nullptr;
  No *prev = nullptr;
};

class Fila {
private:
  No *head;
  No *tail;
  int tamanho;

public:
  Fila() {
    head = nullptr;
    tail = nullptr;
    tamanho = 0;
  }
  void adicionarElemento(No *novo_elemento) {
    if (head == nullptr && tail == nullptr) {
      head = novo_elemento;
      tail = novo_elemento;
      tamanho++;
    } else {
      novo_elemento->prev = tail;
      tail->prox = novo_elemento;
      tail = novo_elemento;
      tamanho++;
    }
  }
  void adicionarElemento(No *novo_elemento) {
    if (head == nullptr && tail == nullptr) {
      head = novo_elemento;
      tail = novo_elemento;
      tamanho++;
    } else {
      novo_elemento->prev = tail;
      tail->prox = novo_elemento;
      tail = novo_elemento;
      tamanho++;
    }
  }
  void removerElemento(No *elemento_a_ser_removido) {
    if (tamanho == 1) {
      free(tail);
      head=nullptr;
      tail=nullptr;
      tamanho--;
    } else {
      No *anterior = tail->prev;
      anterior->prox = nullptr;

      tail->prox = nullptr;
      tail->prev = nullptr;
      free(tail);
      tail = anterior;
    }
  }

  No *getHead() { return head; }
  void setHead(No *_head) { head = _head; }
  No *getTail() { return tail; }
  void setTail(No *_tail) { tail = _tail; }
  int getTamanho() { return tamanho; }
};