#include <stdio.h>
#include <stdlib.h>

	int main () {
	
int vetA[10], temp;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para A[%d]: ", i);
        scanf("%d", &vetA[i]);
    }

    printf("\nVetor antes da inversao:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetA[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 5; i++) {
    	temp = vetA[i];
    	vetA[i] = vetA[9 - i];
    	vetA[9 - i] = temp;
	}
    printf("\nVetor depois da inversao:\n");
    	for (int i = 0; i < 10; i++) {
    		printf("%d ", vetA[i]);
		}
    printf("\n");
    
    return 0;
    
}