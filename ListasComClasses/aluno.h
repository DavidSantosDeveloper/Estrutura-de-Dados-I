#include <iostream>
#include <string.h>
using namespace std;

class Aluno {
private:
  int id;
  string nome;

public:
  Aluno(int _id, string _nome) {
    id = _id;
    nome = _nome;
  }
  int getId() { return id; }
  string getNome() { return nome; };
};

/*
  string Aluno::getNome(){
   return nome;
}
*/