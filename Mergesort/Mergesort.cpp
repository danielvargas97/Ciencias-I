#include <iostream>
using namespace std;

int main(){
		
	return 0;
}

void mergesort(int *a,int primero, int ultimo){
	int mitad;
	if (primero<ultimo){
		mitad = (primero+ultimo)/2;
		mergesort(a,primero,mitad);
		mergesort(a,mitad+1,ultimo);
		mergelist(a,primero,mitad,mitad+1,ultimo);
	}	
}

void mergelist(int *a,int inicio1,int final1,int inicio2, int final2){
	// a - elementos de la lista a ordenar
	// inicio1 - inicio de la lista A
	// final1 - final de la lista A
	// inicio2 - inicio de la lista B
	// final2 - final de la lista B
	//https://www.youtube.com/watch?v=55d8cAK9oE0
	int finalInicio,finalFinal, indexC;
	int *resultado;
	
	finalInicio = inicio1;
	finalFinal = final2;
	indexC = 1;
	
	while(inicio1<=final1){
		if(a[inicio1]<a[inicio2]){
			resultado
		}
	}
	
	
}
