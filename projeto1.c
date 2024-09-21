#include <stdio.h>
#include <stdlib.h>
 
void main(){

	int x=0, n=0, s=0;

	printf("Precione 0 para parar o programa\n\n");

	do{

		printf("\nInforme o numero:");

		scanf("%i",&n);

		if(n!=0){

		x++;	

		}

		s +=n;

	}

	while (n !=0);

	printf("\nSoma dos numeros: %i", s);

	getchar();

}
 
