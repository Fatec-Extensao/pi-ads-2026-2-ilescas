#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* Elaborar um programa que apresente o valor de uma potencia de uma base (N) qualquer elevada a um expoente (M) qualquer, ou seja, de NM */
   int N, M, i;
   long long potencia = 1;

   printf("Digite a base: ");
   scanf("%d", &N);
   printf("Digite o expoente: ");
   scanf("%d", &M);

   for (i = 0; i < M; i++)
   {
       potencia *= N;
   }

   printf("O valor de %d^%d e: %lld\n", N, M, potencia);
   system("pause");
   return 0;
}