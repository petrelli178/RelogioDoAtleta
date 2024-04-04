#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de váriaveis
	int repouso,freqcard,capacidade;
	int valido = 0;
	
	//Entrada de dados
	
	//Validação da Frequencia Cárdiaca de Repouso
	while (!valido) {	
	puts("Qual é a Frequencia cardiaca de repouso do atleta? \n");
	scanf("%d", &repouso);

	if (repouso >= 35 && repouso <= 100) {
		valido = 1;
	} else {
		printf("Valor inválido. Digite um número entre 35 e 100.\n"); }	
	}
	
	// Validação da frequência cardíaca durante o exercício
	valido = 0;
	while (!valido) {
	puts("Qual é a Frequencia cardiaca do atleta? \n");
	scanf("%d", &freqcard);
	
	if (freqcard >= 35 && freqcard <= 200) {
      valido = 1;
    } else {
    	printf("Valor inválido. Digite um número entre 35 e 200.\n"); }
  	}
	
	


	//Validação da capacidade de oxigenação
	valido = 0;
  	while (!valido) {
    puts("Digite a capacidade de oxigenação do atleta? \n ");
    scanf("%d", &capacidade);

    if (capacidade >= 50 && capacidade <= 100) {
      valido = 1;
    } else {
      printf("Valor inválido. Digite um número entre 50 e 100.\n"); }
    }


	//processamento
	if ( freqcard > repouso * 3 || capacidade < 95 ) {
		printf("diminuir ritmo de exercicio físico ");
	}
	else if (freqcard < repouso * 2  && capacidade > 97 ) {
		printf("Aumentar ritmo de exercicio físico ");
	}
	else {
		printf("Manter ritmo de exercicio físico");
	}
	
	
	system("pause");
return 0;
}
