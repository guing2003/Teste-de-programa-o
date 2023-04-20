#include <iostream>
#include <cmath>

using namespace std;

bool verificaNumero(int numero){
	int raiz1 = 5 * pow(numero, 2) + 4;
	int raiz2 = 5 * pow(numero, 2) - 4;
	
	int raiz1_int = sqrt(raiz1);
	int raiz2_int = sqrt(raiz2);
	
	return (raiz1_int * raiz1_int == raiz1 || raiz2_int * raiz2_int == raiz2);
}
int main(){
	int numero;
	
	cout << "Digite o numero para verificar se ele pertence a sequencia de Fibonacci: ";
	cin >> numero;
	
	if(verificaNumero(numero)){
		cout << numero << " pertence a sequencia";
	} else{
		cout << numero << " nao pertence a sequencia";
	}
}
