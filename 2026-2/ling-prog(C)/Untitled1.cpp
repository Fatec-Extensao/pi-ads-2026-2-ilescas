#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char Opt;

	printf("Escolha uma opcao do cardapio:\n");
	printf("1 - Batata com queijo.\n");
	printf("2 - Chocolate quente.\n");
	printf("3 - Feijoada.\n");
	printf("4 - Hamburgao top.\n");

	scanf("%c", &Opt);
	
	switch(Opt){
	case '1':
	printf ("Voce quer o nosso delicioso prato de batata com queijo \n");
	printf ("onde temos batatas selecionadas com carinho e um queijo de \n");
	printf ("de extrema qualidade e sabor.");
	break;
	
	case '2':
	printf ("Voce quer o nosso quentissimo chocolate quente \n");
	printf ("com um sabor levemente adocicado e equilibrado \n");
	printf ("com o nosso chocolate suico.");
	break;
	
	case '3':
	printf ("Voce quer a nossa tradicional feijoada \n");
	printf ("com tudo o que uma feijoada brasileira tem a oferecer .\n");
	break;
	case '4':
	printf ("Voce quer experimentar o nosso burgao \n");
	printf ("recheado, gostoso e com muito cheddar. \n");
	break;
	default:
	printf("Opcao invalida");
	system ("pause");
}
}