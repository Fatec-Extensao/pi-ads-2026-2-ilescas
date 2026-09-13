#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* 1. Apresentar o total da soma obtida dos dez primeiros números inteiros.  */
    int soma = 0;
    for (int i = 1; i <= 10; i++)
    {
        soma += i;
    }
    printf("O total da soma dos dez primeiros números inteiros é: %d\n", soma);
    return 0;
}
