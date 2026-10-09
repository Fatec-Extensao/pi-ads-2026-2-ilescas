#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TOTAL 50
#define TAM 8

int main() {
	    
	char senhas[TOTAL][TAM + 1];
    char maiusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char minusculas[] = "abcdefghijklmnopqrstuvwxyz";
    char numeros[] = "0123456789";
    char especiais[] = "!@#$%&*?";
    char todos[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%&*?";
        
    int i, j, repetida;
    char temp;
    char tipo;
    

	srand((unsigned int)time(NULL));
	
	printf("--- Gerador de senhas ---\n");
	printf("Escolha o tipo de senha:\n");
	printf("A - Aluno\n");
	printf("P - Professor\n");
	printf("G - Gestor Educacional\n");
	printf("Opcao: ");
	
	//Seletor de tipo e prefixo de senha
	scanf(" %c", &tipo);
	char prefixo;
	if (tipo == 'A' || tipo == 'a') {
		prefixo = 'A';
		} else if (tipo == 'P' || tipo == 'p') {
		prefixo = 'P';
		}	else if (tipo == 'G' || tipo == 'g'){
			prefixo = 'G';
		} else {
			
			return 1;
		}
	
		
			for (i = 0; i < TOTAL; i++){
							do {
					repetida = 0;
					// anexa caractere de prefixo definido
					senhas [i][0] = prefixo;
				
					// gera os pre-requisitos de senha (MAIUSCULA, minuscula, Numero)
					senhas [i][1] = minusculas[rand() % 26];
					senhas [i][2] = numeros[rand() % 10];
					senhas [i][3] = especiais[rand() % 8];
				
					// gera o restante dos caracteres
					for(j = 4; j < TAM; j++){
					senhas[i][j] = todos[rand() % (sizeof(todos) - 1)];
						}
					// encerra a string da senha
					senhas [i][TAM] = '\0';
					
					// aleatoriza do indice 1 ao 7
					for (j = TAM - 1; j > 1; j--) {
                	int k = 1 + rand() % j;
                	temp = senhas[i][j];
                	senhas[i][j] = senhas[i][k];
                	senhas[i][k] = temp;
                	}	
                	// valida se ha repetição
                	for(j = 0; j < i; j++) {
                		if(strcmp(senhas[i], senhas[j]) == 0) {
                			repetida = 1;
                			break;
						}
					}
				} while (repetida);
			}
		// exibe as senhas
		printf("--- SENHAS GERADAS ---\n\n");
		
		for(i = 0; i < TOTAL; i++) {
			printf("%02d - %s\n", i + 1, senhas[i]);
		}
	return 0;
}