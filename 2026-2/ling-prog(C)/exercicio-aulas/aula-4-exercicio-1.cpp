#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor[10], i, teste, encontrado;
    
    encontrado = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %do numero:\n", i + 1);
        scanf("%d", &valor[i]);
    }

    printf("Digite um valor de teste: \n");
    scanf("%d", &teste);

    for (i = 0; i < 10; i++) {
        if (valor[i] == teste) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado == 1) {
        printf("Este numero existe na memoria \n");
    } else {
        printf("Este numero nao existe na memoria \n");
    }
    
    return 0;
}
