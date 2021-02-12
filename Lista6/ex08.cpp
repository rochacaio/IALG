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
    for (int i = tam - 2; i >=0; i--) {

   	 valor_pivo = vet[i];

   	 j = i+1 ;

   	 while ((j <= tam -1 ) and (vet[j] > valor_pivo)){
   		 vet[j-1]= vet[j] ;
   		 j++;
   	     }
   	 vet[j-1] = valor_pivo;

  for (int j = 0; j < tam; j++){
               cout << vet[j] << " " ;
   		    }
   		    cout << endl;
    }



  return 0;
}