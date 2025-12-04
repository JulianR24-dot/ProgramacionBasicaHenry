#include <stdio.h>

int i, num, cant, sum,opc=1;
float prom;

main(){
	while (opc==1){
		sum=0;
		prom=0;
		printf("Ingrese la cantidad de numeros que va a ingresar: ");
		scanf("%d",&cant);
		int vec[cant];
		for (i=0; i<cant; i++){
			printf("\nIngrese el numero: ");
			scanf("%d",&num);
			vec[i]=num;
		}for (i=0; i<cant;i++){
			sum=sum+vec[i];
		}prom=sum/i;
		printf("\nLa suma de los numeros ingresados es: %d",sum);
		printf("\nEl promedio de los numeros ingresados es: %f",prom);
		printf("\nDesea ejecutar el programa nuevamente? \n1. Si\n2. No\n");
		scanf("%d",&opc);
	}
}
