#include <stdio.h>

int cant,comp, num,i,opc=1;

main(){
	while (opc==1){
		printf("Ingrese la cantidad de datos que desea ingresar: ");
		scanf("%d", &cant);
		int vec[cant];
		for(i=0;i<cant;i++){
			printf("\nIngrese el numero: ");
			scanf("%d",&num);
			comp=num%2;
			if(comp==0){
				vec[i]=num;
			}else{
				printf("No es un numero par");
				i=i-1;
			}
		}
		for(i=0;i<cant;i++){
			printf("\nEl numero en la posicion %d es %d",i,vec[i]);
		}printf("\nDesea ejecutar el programa nuevamente? \n1. Si\n2. No\n");
		scanf("%d",&opc);	
	}
}
