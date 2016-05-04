#include <stdio.h>

	int main()
	{		
		int num, i;

		i = 1;

	printf("Digite o número: ");
	scanf("%i", &num);

	while ( i <= num )
		{
			printf("%d ", i);
			i = i + 1;
		}

	printf("\nFim\n");


return 0;
	}
