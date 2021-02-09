#include <iostream>
using namespace std;

struct cardapio{
  string nome;
  int quantidade;
};

struct professores{
  string prof;
  string nome1;
  int quantidade1;
  string nome2;
  int quantidade2;
};

int main() {
  int tam;
  cin >> tam;
  cardapio vet[tam];
  for(int i =0;i < tam;i++){
    cin >> vet[i].nome;
    cin >> vet[i].quantidade;
  }
  int tam2;
  cin >> tam2;
  professores vet2[tam2];
  for(int i =0;i < tam2;i++){
    cin >> vet2[i].prof;
    cin >> vet2[i].nome1;
    cin >> vet2[i].quantidade1;
    cin >> vet2[i].nome2;
    cin >> vet2[i].quantidade2;
  }

  for(int i = 0;i < tam;i++){
    for(int j = 0;j < tam2;j++){
      if(vet[i].nome == vet2[j].nome1){
        vet[i].quantidade = vet[i].quantidade - vet2[j].quantidade1;
        
      }
      else if(vet[i].nome == vet2[j].nome2){
       vet[i].quantidade = vet[i].quantidade - vet2[j].quantidade2;
      }
    }
  }
  for(int i = 0;i < tam;i++){
    cout << vet[i].nome << " " << vet[i].quantidade << endl;
  }


  return 0;
}