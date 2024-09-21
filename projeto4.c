#include <stdio.h>
#include <stdlib.h>

void main(){
	int x=0, f=0;
	float s=0, soma=0, media=0;
	
	do{
		printf("\nInforme seu salario: ");
		scanf("%f", &s);
		x++;
		soma +=s;
	}while(s>0);
	
	media = soma/x;
	
	printf("\nTotal de salario: R$%.2f", soma);
	printf("\nNumero de funcionarios: %i", x++ - 1);
	printf("\nMedia salarial: R$%.2f",media);
	getchar();
}