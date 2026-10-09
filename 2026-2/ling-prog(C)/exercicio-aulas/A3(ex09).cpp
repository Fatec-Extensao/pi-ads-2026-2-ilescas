#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i;
   long long potencia;

   for (i = 0; i <= 10; i++)
   {
      potencia = 1;
      int j;
      for (j = 0; j < i; j++)
      {
         potencia *= 2;
      }
      printf("2^%d = %lld\n", i, potencia);
   }

   system("pause");
   return 0;
}