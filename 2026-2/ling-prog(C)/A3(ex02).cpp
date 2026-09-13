#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Os valores numericos inteiros impares situados na faixa de 100 a 200 sao:\n");
    for (int num = 101; num <= 199; num += 2)
    {
        printf("%d ", num);
    }
    printf("\nA logica desse script foi feita adicionando +2 a partir do primeiro impar e mostrando todos os numero ate o 199\n");
    system("pause");
    return 0;
}