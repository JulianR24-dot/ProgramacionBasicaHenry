#include <stdio.h>

float calif=0;

main(){
	printf("Ingrese la calificacion obtenida\n");
	scanf("%f",&calif);
	if ( 0<=calif && calif<=10){	
		if (calif<5){
			printf("Suspenso\n");
		}else if(5<=calif && calif<7){
			printf("Aprobado\n");
		}else if(7<=calif && calif<9){
			printf("Sobre saliente\n");
		}else {
			printf("Matricula de honor\n");
		}
	}else {
		printf("Ingrese una calificacion valida\n");
	}	
}
