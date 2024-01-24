#import <iostream>
#include <stdlib.h>
using namespace std;

class No {
private:
  string item;
  No *next;
  No *prev;

public:
  No(string _item) {
    item = _item;
    next = nullptr;
    prev = nullptr;
  }
  string getItem() { return item; }
  void setItem(string _item) { item = _item; }
  No *getNext() { return next; }
  void setNext(No *_next) { next = _next; }
  No *getPrev() { return prev; }
  void setPrev(No *_prev) { prev = _prev; }
};
class Pilha {
private:
  No *topo;
  int tamanho;

public:
  Pilha(No *_topo) {
    topo = _topo;
    tamanho = 1;
  }

  void adicionarAoTopo(No *_topo_novo) {
    topo->setNext(_topo_novo);
    _topo_novo->setPrev(topo);
    setTopo(_topo_novo);
    tamanho++;
  }
  int getTamanho() { return tamanho; }
  void setTopo(No *_topo) { topo = _topo; }
  No *getTopo() { return topo; }

  void mostrarPilha() {
    if (topo == nullptr) {
      cout << "pilha vazia!";
    } else {
      No *elemento_atual =topo; // Use a temporary variable to avoid modifying the stack
      while (elemento_atual != nullptr) {
        cout << elemento_atual->getItem() << " ";
        elemento_atual= elemento_atual->getPrev();
      }
      cout << endl;
    }
  }
  No removerTopo() {

    if (topo->getPrev() != nullptr) {
      No valor_retornado = (*topo);
      No *anterior = topo->getPrev();
      anterior->setNext(nullptr);
      topo->setPrev(nullptr);

      free(topo);
      setTopo(anterior);
      tamanho--;
      return valor_retornado;
    } else {
      No valor_retornado = (*topo);
      free(topo);
      topo = nullptr;
      tamanho--;
      return valor_retornado;
    }
  };

  void desempilharPilha() {
    cout << endl;
      while (getTamanho() > 0) {
        No atual = removerTopo();
        cout << atual.getItem() << " ";
      }
      cout << endl;
    }
};