#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Os numeros divisiveis por 5 que sao menores que 55 sao:\n"); 
    for (int i = 1; i < 55; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}