#include <stdio.h>
#include <stdlib.h>

void main(){
	int x=0;
	float v=0, s=0, m=0;
	
	do{
		printf("\nInforme o valor:");
		scanf("%f",&v);
  		x++;
  		if(v>0){
      	s += v;
      	m = s/x;
	  }
      }while(v>0);
        
        printf("\nSoma: %.2f",s);
	
        printf("\nMedia: %.2f",m);
	
        printf("\nTotal de valores lidos: %i",x++ - 1);
	
        getchar();
    }
