#include <stdio.h>

#include <stdlib.h>
 
void main(){

	int x=0, s=0, f=0, m=0, t=0;

	printf("\nDigite 1 para masculino e 2 para feminino.");

	printf("\nDigite qualquer numero diferente de 1 e 2 para enterromper a contagem.");

	do{

		printf("\nInforme seu sexo:");

		scanf("%i",&s);

		switch(s){

			case 1:

				f++;

				break;

			case 2:

				m++;

				break;

			default:

				break;

		}

	}while(s<=2);

	t = f+m;

	printf("\nTotal de Homens:%i",m);

	printf("\nTotal de Mulheres:%i",f);

	printf("\nTotal de Pessoas:%i",t);

	getchar();

}
 