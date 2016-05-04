#include <stdio.h>
#include <math.h>

int main()				//gcc raiz.c -o raiz -lm
{

		float x, res;

	printf("Digite o número\n");
	scanf("%f", &x);

	res = sqrtf(x);
	printf("A raiz desse número é: %f\n", res);

	return 0;
}
