#include <iostream>
using namespace std;

struct clientes{
  string nome;
  string compra;
}; 

struct cesta{
  string tipo;
  int tam;
};

int main(){
  int tamanho;
  cin >> tamanho;
  cesta vetA[tamanho];
  for(int i = 0;i < tamanho;i++){
    cin >> vetA[i].tipo;
    cin >> vetA[i].tam;
  }
  int tamanhoB;
  cin >> tamanhoB;
  clientes vetB[tamanhoB];
  for(int i = 0; i < tamanhoB;i++){
    cin >> vetB[i].nome;
    cin >> vetB[i].compra; 
  }
  cout << endl;
  int soma = 0;
  for(int i = 0;i< tamanho;i++){
    for(int j = 0;j < tamanhoB;j++){
        if(vetB[j].compra == vetA[i].tipo){
          soma+= vetA[i].tam;
        }
    }
  }

  cout << soma;

  return 0;
}