#include <stdio.h>							/*lucas.araujo.003*/
#include <string.h>
#include <stdlib.h>
	int main()
	{
int dia;
char diaext[51];

		printf("Digite o neumero correspondente ao dia:\n");					//char ===> strcpy (var, texto);
		scanf("%d", &dia);

		switch (dia){

	case 1:
			strcpy(diaext, "Domingo");
			break;

	case 2:
			strcpy(diaext, "Segunda-Feira");
			break;

	case 3:
			strcpy(diaext, "Terça-Feira");
			break;

	case 4:
			strcpy(diaext, "Quarta-Feira");
			break;

	case 5:
			strcpy(diaext, "Quinta-Feira");
			break;

	case 6:
			strcpy(diaext, "Sexta-Feira");
			break;

	case 7:
			strcpy(diaext, "Sábado");
			break;

default: printf("** ERRO: entrada incorreta **\n");
	    return EXIT_FAILURE;

					}

		printf("%s\n", diaext);

		return 0;
	}
