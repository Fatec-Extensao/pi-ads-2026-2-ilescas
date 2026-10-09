#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vet[50], ac;
	ac = 10;
	printf("Numeros pares a partir de 10: \n");
	for (int i = 0; i < 50; i++) {
		ac = ac + 2;
		vet[i] = ac;
		printf("%d, ", vet[i]);
	}
	return 0;
}