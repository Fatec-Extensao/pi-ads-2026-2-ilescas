#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N;
    float H = 0.0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        H += 1.0 / i;
    }

    printf("O valor de H para N = %d e: %.2f\n", N, H);
    system("pause");
    return 0;
}   