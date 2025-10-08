#include <stdio.h>

int num, sum=0, prom=0, ctr1, opc=1;

main(){
	while (opc==1){
		printf("Ingrese el numero ");
		scanf ("%d",&num);
		if (num<0){
			printf("\n es el ultimo numero");
			sum=num+sum;
			ctr1=ctr1+1;
			opc=2;
		}else{
			sum=num+sum;
			ctr1=ctr1+1;
		}//printf("\nDesea agregar otro numero? \n1. Si\n2. No\n");
		//scanf("%d",&opc);
	}prom=sum/ctr1;
	printf("\nEl promedio de los numeros es: %d",prom);
}
