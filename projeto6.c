#include <stdio.h>
#include <stdlib.h>

void main(){
	int x, n=0, m1=0, m2=0;
	
	printf("\nCaso o Numero informado for menor ou igual do que 0 o programa sera Interrompido");
	do{
		printf("\nInforme seu numero:");
		scanf("%i",&n);
		if(n>0){
			if(n>x){
			m1 = n;
		}if(n<m2 || m2 == 0){
			m2 = n;
		}
		}
	}while(n>0);
	printf("\nMaior valor: %i",m1);
	printf("\nMenor valor: %i",m2);
	getchar();
}