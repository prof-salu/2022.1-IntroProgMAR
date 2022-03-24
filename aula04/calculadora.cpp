#include <iostream>

int main(){
	int numero1;
	int numero2;
	int resultadoSoma;
	
	printf("Informe o numero 1: ");
	scanf("%d", &numero1);
	
	printf("Informe o numero 2: ");
	scanf("%d", &numero2);
	
	printf("\nNumero 1: %d", numero1);
	printf("\nNumero 2: %d", numero2);
	
	resultadoSoma = numero1 + numero2;
	
	printf("\nSoma: %d", resultadoSoma);
	printf("\nSubtracao: %d", (numero1 - numero2));
	printf("\nMultiplicacao: %d", (numero1 * numero2));
	printf("\nDivisao: %d", (numero1 / numero2));
	printf("\nResto: %d", (numero1 % numero2));
}
