#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N, i;
    long long fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        fatorial *= i;
    }

    printf("O valor de %d! e: %lld\n", N, fatorial);
    system("pause");
    return 0;
}