#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numeros[20];
    int maior, menor;

    printf("Digite 20 numeros inteiros:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];

    for (int i = 1; i < 20; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    printf("O maior valor fornecido e: %d\n", maior);
    printf("O menor valor fornecido e: %d\n", menor);

    return 0;
}
	