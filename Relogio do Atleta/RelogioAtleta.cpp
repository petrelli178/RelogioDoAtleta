#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de v�riaveis
	int repouso,freqcard,capacidade;
	int valido = 0;
	
	//Entrada de dados
	
	//Valida��o da Frequencia C�rdiaca de Repouso
	while (!valido) {	
	puts("Qual � a Frequencia cardiaca de repouso do atleta? \n");
	scanf("%d", &repouso);

	if (repouso >= 35 && repouso <= 100) {
		valido = 1;
	} else {
		printf("Valor inv�lido. Digite um n�mero entre 35 e 100.\n"); }	
	}
	
	// Valida��o da frequ�ncia card�aca durante o exerc�cio
	valido = 0;
	while (!valido) {
	puts("Qual � a Frequencia cardiaca do atleta? \n");
	scanf("%d", &freqcard);
	
	if (freqcard >= 35 && freqcard <= 200) {
      valido = 1;
    } else {
    	printf("Valor inv�lido. Digite um n�mero entre 35 e 200.\n"); }
  	}
	
	


	//Valida��o da capacidade de oxigena��o
	valido = 0;
  	while (!valido) {
    puts("Digite a capacidade de oxigena��o do atleta? \n ");
    scanf("%d", &capacidade);

    if (capacidade >= 50 && capacidade <= 100) {
      valido = 1;
    } else {
      printf("Valor inv�lido. Digite um n�mero entre 50 e 100.\n"); }
    }


	//processamento
	if ( freqcard > repouso * 3 || capacidade < 95 ) {
		printf("diminuir ritmo de exercicio f�sico ");
	}
	else if (freqcard < repouso * 2  && capacidade > 97 ) {
		printf("Aumentar ritmo de exercicio f�sico ");
	}
	else {
		printf("Manter ritmo de exercicio f�sico");
	}
	
	
	system("pause");
return 0;
}
