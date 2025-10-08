#include <stdio.h>

int num1, ctr=0, opc=1, num2, par, cont=0;

main(){
	printf("Numeros pares entre valores ingresados");
	while(opc==1){
		printf("\nIngrese el primer numero ");
		scanf("%d",&num1);
		printf("\nIngrese el segundo numero ");
		scanf("%d",&num2);
		ctr=num2;
		for (ctr;ctr<num1;ctr++){
			par=ctr%2;
			if (par==0){
				cont++;
			}
		}
		if(num1<=num2){
			printf("\nEl primer numero debe de ser mayor");
		}else{
			if(cont>=3){
				printf("\nLos numeros pares entre %d y %d son:",num1, num2);
				ctr=num2;
				for (ctr;ctr<num1;ctr++){
					par=ctr%2;
					if (par==0){
						printf("%d",ctr);
					}
				}opc=2;
			}else{
				printf("\nNo hay 3 numeros pares entre %d y %d",num1,num2);
				opc=2;
			}
		}
	}
}

