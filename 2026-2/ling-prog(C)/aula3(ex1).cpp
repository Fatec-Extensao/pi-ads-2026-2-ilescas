#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;
    for (int i = 1; i <= 10; i++)
    {
        soma += i;
        printf ("%d + %d = ", soma, i);
        printf ("%d\n", soma);
    }
    printf("O total da soma dos dez primeiros nemeros inteiros e: %d\n", soma);
    system("pause");
    return 0;