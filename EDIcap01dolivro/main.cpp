#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

typedef struct Registro {
  string nome;
  int idade;
  string curso;
} Reg;

int contar_lista(int lista[]) {
  int tamanho = 0;
  int indice_atual = 0;
  while (lista[indice_atual] != 0) {
    tamanho++;
    indice_atual++;
  }

  return tamanho;
}

void teste_lixo_de_memoria() {
  int inteiro;
  cout << endl << "Valor da Variavel inteira-->" << inteiro;
}

int main() {

  // REGISTROS
  cout << "hello" << endl;

  Reg registro = {"Davi", 21, "ADS"};

  cout << registro.nome;

  // VETORES E PONTEIROS

  cout << endl << ">>>>>>>VETORES E PONTEIROS<<<<" << endl;

  vector<int> vetor = {1, 2, 3, 4, 5};

  int *ponteiro_para_vetor_inteiro = &vetor[0];

  int tamanho_vetor = vetor.size();
  cout << "vetor de tamahho " << tamanho_vetor << endl;

  for (int i = 0; i < tamanho_vetor; i++) {
    //----->>> ACeSSO aos valores pelo indice
    // cout << endl << vetor[i] << endl;

    // Acesso aos valores atraves de um ponteiro

    cout << "valor_da_posicao_atual:" << *ponteiro_para_vetor_inteiro << endl;
    ponteiro_para_vetor_inteiro++;
  }

  // PONTEIROS E REGISTROS

  Registro *ponteiro_para_struct = &registro;

  cout << endl << ">>>>>>>Registros e Ponteiros<<<<" << endl;
  cout << endl << (*ponteiro_para_struct).curso;
  cout << endl << ponteiro_para_struct->nome;

  Registro *ptr_nulo_para_struct = NULL;

  // ALOCACAO ESTATICA E ALOCACAO DINAMICA DE MEMORIA

  cout << endl
       << ">>>>>>>ALOCACAO ESTATICA E ALOCACAO DINAMICA DE MEMORIA<<<<" << endl;
  int variavel_inteira = 5;
  int *ptr_estatico_para_inteiro = &variavel_inteira;

  int *ptr_dinamico_para_inteiro = (int *)malloc(sizeof(int));

  *ptr_dinamico_para_inteiro = 15;

  free(ptr_dinamico_para_inteiro);

  cout << endl << "ptr dinamico => " << *ptr_dinamico_para_inteiro;

  float teste;

  cout << endl << "teste ----" << teste;

  teste_lixo_de_memoria();

  // COM RELAÇÃO A LIGACAO DE ITENS EMUMA ESTRURA DE DADOS :ALOCACAO SEQUENCIAL
  // E ALOCACAO DINAMICA DE MEMORIA

  cout << endl
       << endl
       << endl
       << ">>>>>>>COM RELAÇÃO A LIGACAO DE ITENS EM UMA ESTRURA DE DADOS "
          ":ALOCACAO SEQUENCIAL E ALOCACAO DINAMICA DE MEMORIA<<<<"
       << endl;

  vector<int> vetor_acesso_indice = {1, 2, 4, 8, 16};

  for (int i = 0; i < vetor_acesso_indice.size(); i++) {
    int *posicao_na_memoria = (int *)&vetor_acesso_indice + i;
    cout << endl
         << "vetor-----" << posicao_na_memoria << "@@@@ "
         << *posicao_na_memoria;

    cout << endl << endl;

    cout << endl
         << "vetor-----" << posicao_na_memoria << "@@@@ "
         << *posicao_na_memoria;
  }

  // COM RELAÇÃO A VETORES : VETOR SEQUENCIAL E VETOR DINAMICO

  cout << endl
       << endl
       << endl
       << ">>>>>>>COM RELAÇÃO A VETORES : VETOR SEQUENCIAL E VETOR DINAMICO<<<<"
       << endl;

  int vetor_sequencial[7] = {0, 2, 4, 8, 16, 32, 64};

  int tamanho_vetor_dinamico = 0;
  int *vetor_dinamico = (int *)malloc(tamanho_vetor_dinamico * sizeof(int));


  
  

  return 1;
}