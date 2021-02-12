#include <iostream>
using namespace std;
struct crianca{
  string nome;
  string pedido;
};

struct estoque{
  string brinquedo;
  int quantidade;
  int gerenciamento;
};

int main() {
  int tam;
  cin >> tam;
  crianca vet[tam];
  for(int i = 0;i < tam;i++){
    cin >> vet[i].nome;
    cin >> vet[i].pedido;
  }
  
  int tam2;
  cin >> tam2;
  estoque vet2[tam2];
  for(int i = 0;i < tam2; i++){
    cin >> vet2[i].brinquedo;
    cin >> vet2[i].quantidade;
  }
  int aux = 0;
  for(int i = 0;i < tam2;i++){
    for(int j = 0;j < tam;j++){
      if(vet[j].pedido == vet2[i].brinquedo){
        aux++;
        
      }
    }
    vet2[i].gerenciamento = aux;
    aux = 0;
    if((vet2[i].quantidade-vet2[i].gerenciamento) < 0){
      cout << vet2[i].brinquedo << " ";
    }

  }
    
  return 0;
}