#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int pvet[10], svet[10], tvet[10], i;
		
    for (i = 0; i < 10; i++) {
        printf("Digite o %do numero do vetor 1:\n", i + 1);
        scanf("%d", &pvet[i]);
	}
	
	        for (i = 0; i < 10; i++) {
        printf("Digite o %do numero do vetor 2:\n", i + 1);
        scanf("%d", &svet[i]);
       	}
       	printf("A soma dos 2 vetores gerou o seguinte resultado: \n");
	 	for (i = 0; i < 10; i++) {
	 		tvet[i] = pvet[i] + svet[i];
	 		printf("%d + %d = %d\n", pvet[i], svet[i], tvet[i]);
	 	}
	 	system("pause");
	 	return 0;
}