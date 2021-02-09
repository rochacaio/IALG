#include <iostream>
using namespace std;

int main(){
	int tam;
	cin >> tam;
	int vet[tam];
	for(int i = 0; i < tam;i++){
		cin >> vet[i];
	}
  int valor_pivo, j;
  for (int i = 1; i < tam; i++) {
   	valor_pivo = vet[i];
   	j = i - 1;
   	while ((j >= 0) and (valor_pivo > vet[j])){
   		vet[j+1] = vet[j];
   		j--;
   	}
   	vet[j+1] = valor_pivo;
    for(int k = 0;k < tam;k++){
    cout << vet[k] << " ";
  }
  cout << endl;
  }



  return 0;
}