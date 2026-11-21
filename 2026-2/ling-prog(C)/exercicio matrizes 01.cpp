//Faça um programa que monte uma matriz randômica A10x10 e verifique quantos números
//pares e quantos impares existem na matriz.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define maximo 100
#define tam 5

int main(){

    int matrandom[tam][tam], i, j, par = 0, impar = 0;

    srand(time(NULL));

    // Gerar matriz aleatoria
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            matrandom[i][j] = rand() % maximo;
        }
    }

    // Contar pares e impares
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){

            if(matrandom[i][j] % 2 == 0){
                par++;
            }
            else{
                impar++;
            }

        }
    }

    // Exibir matriz
    printf("Matriz gerada:\n");

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%3d ", matrandom[i][j]);
        }
        printf("\n");
    }

    printf("\nQuantidade de pares: %d", par);
    printf("\nQuantidade de impares: %d\n", impar);

    return 0;
}