#include <stdio.h>
#include <stdlib.h>

int main() {

    int batatas, estoque;
    float preco;
    char escolha;

    preco = 0.50;
    estoque = 5;
    batatas = 0;

    printf("Bem vindo ao mercadinho BIG BOM!!\n");
    printf("O gerente ficou maluco e esta com ofertas incriveis para diversos produtos, inclusive batatas\n");

    do {

        printf("\nVoce quer levar uma batata? (S/N): ");
        fflush (stdin);
        scanf(" %c", &escolha);

        if (escolha == 'S' || escolha == 's') {

            if (estoque > 0) {

                estoque--;
                batatas++;

                printf("\nTemos no estoque %d batatas sobrando", estoque);
                printf("\nVoce esta levando atualmente %d batatas", batatas);

            } else {

                printf("\nNao temos mais batatas no estoque!");
                break;

            }

        } else if (escolha != 'N' && escolha != 'n') {

            printf("\nOpcao invalida! Digite S ou N.");

        }

    } while (escolha != 'N' && escolha != 'n');

    printf("\n\nVoce esta levando %d batatas", batatas);
    printf("\nVai custar ao todo R$ %.2f", batatas * preco);

    return 0;
}