#include <iostream>
using namespace std;

struct vilaAlvo{
  string vilao;
  string alvoA;
};

struct danoVil{
  string plano;
  string nomeVil;
  int dano;
};


int main() {
  int quantidade;
  cin >> quantidade;
  vilaAlvo vetA[quantidade];
  for(int i = 0;i < quantidade;i++){
    cin >> vetA[i].vilao;
    cin >> vetA[i].alvoA;
  }
  int quantidadeB;
  cin >> quantidadeB;
  danoVil vetB[quantidadeB];
  for(int i = 0;i < quantidadeB;i++){
    cin >> vetB[i].plano;
    cin >> vetB[i].nomeVil;
    cin >> vetB[i].dano;
  }
  string busca;
  cin >> busca;
  int igualdade = -1;
  for(int i = 0;i < quantidade;i++){
    for(int j = 0;j < quantidadeB;j++){
      if(vetA[i].alvoA == busca){
        igualdade =1;
        if(vetB[j].nomeVil == vetA[i].vilao){
          cout << vetB[j].plano << " " << vetB[j].dano << endl; 
        }
      }
    }
  }
  if(igualdade == -1){
    cout << "-1";
  }
  return 0;
}