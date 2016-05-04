#include <stdio.h>

int main()

{
    int i, j, n;

    printf("Digite a medida do quadrado: ");
    scanf("%d", &n);
    i = 1;


    while( i <= n)
    {
        j = 1;

        while(j <= n)
        {
            printf("* ");
            j = j + 1;
        }

        printf("\n");
        i = i + 1;
    }


    return 0;
}
