#include <stdio.h>

int main()
{

	FILE *arquivo;
	int n;

	arquivo = fopen("dados.txt", "r");	

	printf ("\n");
	fscanf (arquivo, "%i", &n);
	printf ("O número lido foi %i.\n", n);
	printf ("\n");

	fclose(arquivo);

	return 0;

}
