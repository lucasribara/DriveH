#include <stdio.h>

		int main()
{
	int num1, num2, num3, media, soma, produto;

printf("Digite os três números\n");
scanf ("%d", &num1);
scanf ("%d", &num2);
scanf ("%d", &num3);


	soma = num1 + num2 + num3;
	media = (num1 + num2 + num3)/3;
	produto = num1 * num2 * num3;


printf("A soma é %d \n", soma);
printf("A média é %d \n", media);
printf("O produto é %d \n", produto);




return 0;



}


