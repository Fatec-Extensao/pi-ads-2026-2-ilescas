#include <stdio.h>
#include <stdlib.h>

int main(){
	/*Elaborar um programa que apresente a somatória dos valores pares existentes na faixa de 10 até 60. */
	printf("A soma dos pares de 10 ate 60 sao:\n");
	for (int i = 10; i < 55; i++)
        {
			if ( i % 2 == 0)
			{
				printf("%d ", i);
			}	
        }   
    printf("\n");
    system("pause");
    return 0;	
	
}