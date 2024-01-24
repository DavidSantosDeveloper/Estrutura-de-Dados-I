#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct no {
  int item;
  struct no *prox;
} No;

int main() {

  // Observacao => O endereco da lista_dinamica = lista_dinamica[0]
  No lista_dinamica[4] = { 
      // No 0  
      {3, lista_dinamica + 2} ,
      // No 1
      {4, NULL}, 
     // No 2
      {10, lista_dinamica + 1}         
     // No 3 (Null)
    
  };
  
  for (No *p = lista_dinamica; p != NULL; p = p->prox) {
    cout<<p<<endl;
    cout<<p->prox<<endl;
    
    cout << p->item << endl;
  }
}