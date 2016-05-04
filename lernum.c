#include <stdio.h>

int main()
{

	FILE *arquivo;
	int n;

	arquivo = fopen("dados.txt", "r");	

	while( ! feof(arquivo) ) {
	printf ("\n");

		if (fscanf (arquivo, "%i", &n) == 1){
	printf ("O número lido foi %i.\n", n);
	printf ("\n");
				}
			}
	fclose(arquivo);

	return 0;

}
