#include <stdio.h>

void somar(float, float, float *);

void somar(float a, float b, float *r)
{
	*r = a + b;
}

int main()
{

		float x, y, res;

	printf("Digite o primeiro numero\n");
	scanf("%f", &x);

	printf("Digite o segundo numero\n");
	scanf("%f", &y);
	
	somar (x, y, &res);

	printf("%.2f + %.2f = %.2f\n", x, y, res);

	return 0;
}
