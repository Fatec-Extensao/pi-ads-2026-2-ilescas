#include <stdio.h>
#include <stdlib.h>

int main()
{

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