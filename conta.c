#include <stdio.h>

int main()
{

		int x, y, res;

	printf("Digite o primeiro numero\n");
	scanf("%d", &x);

	printf("Digite o segundo numero\n");
	scanf("%d", &y);
	
	res = x + y;
	printf("%d + %d = %d\n", x, y, res);

	return 0;
}
