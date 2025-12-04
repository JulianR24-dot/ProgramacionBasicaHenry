#include <stdio.h>

int num, i, cant,opc=1;

main(){
	while(opc==1){
		printf("Ingrese la cantidad de numeros que va a ingresar: ");
		scanf("%d",&cant);
		int vec1[cant];
		int vec2[cant];
		int vec3[cant];
		printf("\nDatos del primer vector: \n");
		for (i=0;i<cant;i++){
			printf("Ingrese el numero: ");
			scanf("%d",&num);
			vec1[i]=num;
		}printf("\nDatos del segundo vector: \n");
		for (i=0;i<cant;i++){
			printf("Ingrese el numero: ");
			scanf("%d",&num);
			vec2[i]=num;
		}printf("\nLa suma de los datos por posicion es: \n");
		for (i=0;i<cant;i++){
			vec3[i]=vec1[i]+vec2[i];
			printf("%d ",vec3[i]);
		}printf("Desea ejecutar el programa nuevamente? \n1. Si\n2. No\n");
		scanf("%d",&opc);
	}
}
