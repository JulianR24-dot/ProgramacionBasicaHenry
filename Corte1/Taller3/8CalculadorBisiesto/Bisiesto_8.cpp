#include <stdio.h>

int year;

main(){
	printf("Ingrese el a�o el cual desea verificar ");
	scanf("%d",&year);
	if(year%4==0){
		printf("El a�o %d es bisiesto",year);
	}else {
		printf("El a�o %d no es bisiesto",year);
	}
}
