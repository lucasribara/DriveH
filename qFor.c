#include <stdio.h>

int main()

{
    int i, j, n;

    printf("Digite a medida do quadrado: ");
    scanf("%d", &n);


    for (j = 1; j <= n; j++)
    {

        for (i = 1; i <= n; i++)
        
            if ( i == 1 || i == n )
                printf ( j == 1 || j == n ? "+": "|");
            else
                printf ( j == 1 || j == n ? "--": "  ");
            printf("\n");
        
    }

	printf("Fim!\n");   
    return 0;
}


/* marco.mangan@pucrs.br
#include <stdio.h>

int main(void)
{
    int n;  
    int i;  
    int j;  

    scanf("%d", &n);
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
            if ( i == 1 || i == n )
                printf(j == 1 || j == n ? "+": "|");
            else
                printf(j == 1 || j == n ? "-" : " ");
        printf("\n");
    }
    printf("FIM\n");
    return 0;
}*/


