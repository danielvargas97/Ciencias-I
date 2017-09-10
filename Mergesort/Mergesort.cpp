#include <iostream>
using namespace std;

void mergesort(int *a,int primero, int ultimo);
void mergelist(int *a,int inicio1,int final1,int inicio2, int final2);

void imprimir(int*,int);
void rellenar(int*,int);

int main(){
	int *a;
	int j,tam;

	for(j=5;j<=100;j+=5){
		a = NULL;
		a = new int[j];
		rellenar(a,j);
		tam = j-1;
		mergesort(a,0,tam);	
		imprimir(a,j);
		delete a;
	}

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
	
	int finalInicio,finalFinal, indexC;
	int *resultado = NULL;
	
	finalInicio = inicio1;
	finalFinal = final2;
	
	resultado = new int[(finalFinal-finalInicio)+1];
	
	indexC = 0;
	
	while(inicio1<=final1 && inicio2<=final2){
		if(a[inicio1]<a[inicio2]){
			resultado[indexC] = a[inicio1];
			inicio1++;
		}
		else{
			resultado[indexC] = a[inicio2];
			inicio2++;
		}
		
		indexC++;		
	}
	
	if(inicio1<=final1){
		for(int i=inicio1;i<=final1;i++){
			resultado[indexC] = a[i];
			indexC++;
		}
	}
	else{
		for(int j = inicio2;j<=final2;j++){
			resultado[indexC] = a[j];
			indexC++;
		}
	}
	
	indexC = 0;
	// Volver a poner los resultados en el arreglo
	for(int k =finalInicio; k<=finalFinal;k++){
		a[k] = resultado[indexC];
		indexC++;
	}
	
	delete resultado;
}


void rellenar(int *a,int n){
	int i;
	for(i=0;i<n;i++)	
		a[i] = 1500 - i;
}

void imprimir(int *a,int n){
	int k;
	for(k = 0; k<n;k++){
		if(k==n-1)
			cout << a[k] << endl;
		else
			cout << a[k] << ",";
	}	
}
