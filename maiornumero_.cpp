#include <stdio.h> 
#include <conio.h> 
main()
{
	int n1, n2;
	printf("PROGRAMA MAIOR NUMERO\n\n");
	printf("Digite o 1.o numero: ");
    scanf("%i",&n1);
    printf("Digite o 2.o numero: ");
    scanf("%i",&n2);
    if (n1>n2)
       printf("O maior eh o n1: %i", n1);
    else
	   if (n2>n1)
         printf("O maior eh o n2: %i", n2);
	   else
	     printf("Os numeros sao iguais: %i = %i",n1,n2);
} 
    
    
