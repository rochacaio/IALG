#include <iostream>
using namespace std;

struct politicos{
  string partido;
  string nomePol;
};

struct policia{
  string operacao;
  string pol;
  int preju;
};

int main() {
  int tamanho;
  cin >> tamanho;
  politicos vetA[tamanho];
  for(int i = 0; i < tamanho;i++){
    cin >> vetA[i].partido;
    cin >> vetA[i].nomePol;
  }
  int tamanhoB;
  cin >> tamanhoB;
  policia vetB[tamanhoB];
  for(int i = 0;i < tamanhoB;i++){
    cin >> vetB[i].operacao;
    cin >> vetB[i].pol;
    cin >> vetB[i].preju;
  }
  string buscaPartido;
  string buscaOperacao;
  cin >> buscaPartido;
  cin >> buscaOperacao;

  int soma = 0;
  for(int i = 0;i < tamanho;i++){
    for(int j = 0;j < tamanhoB;j++){
      if(vetA[i].partido == buscaPartido){
        if(vetA[i].nomePol ==vetB[j].pol and buscaOperacao == vetB[j].operacao){
          soma+= vetB[j].preju;
        }
      }
    }
  }
  cout << soma;

  return 0;



}