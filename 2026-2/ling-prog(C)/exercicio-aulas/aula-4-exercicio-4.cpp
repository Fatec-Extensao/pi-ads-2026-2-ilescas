#include <stdio.h>
#include <stdlib.h>

int main(){
	int mvet[20], contp, conti;
	contp = 0;
	conti = 0;
	for (int i = 0; i < 20; i++) {
        printf("Digite o %do numero do vetor:\n", i + 1);
        scanf("%d", &mvet[i]);
		}
		for (int i = 0; i < 20; i++) {
		if (mvet[i] % 2 == 0){
		contp++;	
		} else {
			conti++;
		}
	}
	int p = 0, im = 0;
		int vetp [contp], veti[conti];
		for(int i = 0; i < 20; i++) {
			if (mvet[i] % 2 == 0){
				vetp[p] = mvet[i];
				p++;
		}else {
			veti[im] = mvet[i];
			im++;
			}
		}
		printf("\nSuas entradas geraram %d numeros pares: ", contp);	
		for(int i = 0; i < contp; i++)	{
			printf("%d, ", vetp[i]);
		}
		printf("\nSuas entradas geraram %d numeros impares: ", conti);	
		for(int i = 0; i < conti; i++)	{
			printf("%d, ", veti[i]);			
		}
		printf("\n");
		return 0;
	}


