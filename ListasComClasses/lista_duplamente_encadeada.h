#include <iostream>
#include <string>
using namespace std;

class Node {
private:
    string item;
    Node* next;
    Node* prev;

public:
    Node(string _item) : item(_item), next(nullptr), prev(nullptr) {}

    void setNext(Node* _next) { next = _next; }
    Node* getNext() { return next; }

    void setPrev(Node* _prev) { prev = _prev; }
    Node* getPrev() { return prev; }

    void setItem(string _item) { item = _item; }
    string getItem() { return item; }
};


class  DoublyLinkedList {
private:
  Node *head;
  Node *tail;

public:
 DoublyLinkedList(Node *_head) : head(_head), tail(_head) {}

  void adicionarNode(Node *_node) {

    
    if (tail != nullptr) {
      _node->setPrev(tail);
      _node->setNext(nullptr);
      
      tail->setNext(_node);
      tail = _node;
    } else {
      // Lista vazia, define tanto a cabeça quanto a cauda para o novo nó
      head = tail = _node;
    }
  }
void removerNode(Node *_node) {

  Node *node_atual = head;
  while (node_atual != nullptr) {
    Node* no_Anterior;
    if(node_atual==_node){
      no_Anterior=node_atual->getPrev();
       no_Anterior->setNext(node_atual->getNext());                      
    }
    node_atual = node_atual->getNext();
  }

}

  void mostrarNodes() {
    Node *node_atual = head;
    while (node_atual != nullptr) {
      cout << node_atual->getItem() << " ";
      node_atual = node_atual->getNext();
    }
    cout << endl;
  }

  Node *getHead() { return head; }
  Node *getTail() { return tail; }
};
