#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Os numeros divisiveis por 5 que sao menores que 55 sao:\n");
    for (int i = 5; i < 55; i += 5)
    {
        printf("%d ", i);
    }
    printf("\n");
    system("pause");
    return 0;
}