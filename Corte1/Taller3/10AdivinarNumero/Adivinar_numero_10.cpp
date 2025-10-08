#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numi, intento=0, numa=0;

main(){
	printf("Adivinar el numero del 1 al 10\n");
	srand(time(NULL));
	numa=rand()%11;
	while (numi!=numa){
		printf("Ingrese un numero: ");
		scanf("%d",&numi);
		intento=intento+1;
	}printf("\nEl numero es: %d",numi);
	printf("\nEl numero de intentos es: %d",intento);
}
