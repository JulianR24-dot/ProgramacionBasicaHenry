#include <stdio.h>

int num1,ctr=1,mult;

main(){
	printf("Ingrese el numero del cual desea saber la tabla: ");
	scanf("%d",&num1);
	printf("\nSu tabla de multiplicar es:");
	for (ctr==1;ctr<=12;ctr++){
		mult=num1*ctr;
		printf("\n %d x %d = %d", num1,ctr,mult);
	}
}
