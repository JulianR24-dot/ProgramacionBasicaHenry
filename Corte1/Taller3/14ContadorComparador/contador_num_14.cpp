#include <stdio.h>

int num, ctr1, ctr2, opc=1;

main(){
	while (opc==1){
		printf("Ingrese el numero: ");
		scanf("%d",&num);
		if(num>0){
			ctr1=ctr1+1;
		}else if(num<0){
			ctr2=ctr2+1;
		}else{
			printf("\n%d No esta determinado",num);
			opc=2;
		}
	}printf("\nLos numeros positivos son: %d",ctr1);
	printf("\nLos numeros negativos son: %d",ctr2);
}
