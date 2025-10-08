#include <stdio.h>

int year;

main(){
	printf("Ingrese el año el cual desea verificar ");
	scanf("%d",&year);
	if(year%4==0){
		printf("El año %d es bisiesto",year);
	}else {
		printf("El año %d no es bisiesto",year);
	}
}
