#include "aluno.h"
#include "lista_duplamente_encadeada.h"
#include <iostream>

using namespace std;

int main() {
  Node *node1 = new Node("Davi");
  Node *node2 = new Node("Joao");
  Node *node3 = new Node("fco");
  Node *node4 = new Node("joaquina");

  DoublyLinkedList lista(node1);
  lista.adicionarNode(node2);
  lista.adicionarNode(node3);
  lista.adicionarNode(node4);
  lista.removerNode(node4);
  lista.mostrarNodes();

  cout << node2->getItem();

  return 0;
}