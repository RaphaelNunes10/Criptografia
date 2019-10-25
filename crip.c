#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* Biblioteca necessaria para utilizar comando "setlocale()" */
#include <math.h>  /* Para efetuar Outros Calculos */
#include <string.h> /* Serve para Manipulação de String*/

// Programa para criptografar -> strlen -> calcular o número de caracteres em uma string



int main(int charc, char** argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
    char arquivo[20][2],op;
    int x;
    int y;
    
    printf ("Criptografar / Descriptografar [c/d]: ");
    scanf ("%s",&op);
    fflush (stdin);
    
    /* Criptografar */
    if (op=='c' || op=='C')
	{
	
    printf("\nNome do Arquivo: ");
    scanf("%[^\n]s", &arquivo);

    for( x = 0; x < strlen(arquivo) - x - 1; x++ )
    {
		arquivo[x][0] += 6;
		arquivo[x][1] += x - 1;
        /*
        * o mesmo que:
        * arquivo[x] = arquivo[x] + 6;
        *
        */
    }

    printf(">> Nome criptografado: %s\n\n ", arquivo);
	}
	
	/* Descriptografar */
	else if (op=='d' || op=='D')
	{
	
	printf("\nNome do Arquivo: ");
    scanf("%[^\n]s", &arquivo);

    for( x = 0; x < strlen(arquivo) - x - 1; x++ )
    {
		arquivo[x][0] -= 6;
		arquivo[x][1] -= x - 1;
        /*
        * o mesmo que:
        * arquivo[x] = arquivo[x] + 6;
        *
        */
    }

    printf(">> Nome descriptografado: %s\n\n ", arquivo[0]);	
		
	}

		return 0;
}
