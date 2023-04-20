#include <iostream>

using namespace std;

void descobrirSequencia(int numeros[], int tamanho){
	
	if(tamanho < 2){
		cout << "A sequencia deve ter no minino dois numeros";
		return;
	}
	
	cout << "A sequencia completa e: ";
	
	for(int indice = 0; indice < tamanho; indice++){
		cout << numeros[indice] << " ";
	}
	while( numeros[tamanho - 1] != numeros[tamanho - 2] + numeros[tamanho - 3]){
		int proximoNumero = numeros[tamanho - 1] + numeros[tamanho - 2];
		cout << proximoNumero << " ";
		numeros[tamanho] = proximoNumero;
		tamanho ++;
	}
}

int main(){
	int numeros[100];
	int num;
	int tamanho = 0;
	
	cout << " Digite uma sequencia de numeros(digite um numero negativo para encerrar): ";
	
	while(true){
		cin >> num;
		if( num < 0 ){
			break;
		}
		numeros[tamanho] = num;
		tamanho ++;
	}
	descobrirSequencia(numeros, tamanho);
	
	return 0;
}
