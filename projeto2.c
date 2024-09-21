#include <stdio.h>
#include <stdlib.h>
 
void main(){

	int x=0;

	float v=0, s=0, m=0;

	do{

		printf("\nInforme o valor do produto:");

		scanf("%f",&v);

		s +=v;

		x++;

	}

	while(x<5);

	m = s/5;

	printf("\nValor medio dos precos: R$%.2f",m);

	getchar();

}
 
