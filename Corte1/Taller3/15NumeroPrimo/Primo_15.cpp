#include <stdio.h>

int num, ctr=0,ctr2=0;

main(){
	printf("Calculadora para numeros primos \nIngrese un numero ");
	scanf("%d",&num);
	for (ctr=2;ctr<num;ctr++){
		if(num%ctr==0){
			ctr2++;
		}
	}if (ctr2!=0){
		printf("\n %d No Es primo",num);
	}else {
		printf("\n %d Es primo",num);
	}
}
