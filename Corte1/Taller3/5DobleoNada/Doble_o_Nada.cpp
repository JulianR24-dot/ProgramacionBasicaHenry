#include <stdio.h>
#include <stdlib.h>

float cant;
int opc=0, numa=0;

main(){
	printf("Ingrese el calor de la cantidad a apostar: \n");
	scanf("%f",&cant);
	printf("Escoja a cual apostar.\n1. Cara\n2. Sello\n ");
	scanf("%d",&opc);
	numa=1+rand()%2;
	if(numa==opc){
		cant=cant*2;
		printf("Ha duplicado la apuesta a: %f",cant);
	}else{
		printf("ha perdido todo");
	}
}

