#include <stdio.h>

int cant,i,j, num, max, opc=1;

main(){
	while (opc==1){
		max=0;
		printf("Ingrese el tamaño de la matriz: ");
		scanf("%d", &cant);
		int mat1[cant][cant];
		int vec[cant];
		printf("\nDatos de la matriz\n");
		for (i=0;i<cant;i++){
			for (j=0;j<cant;j++){
				printf("Ingrese el numero ");
				scanf("%d",&num);
				mat1[i][j]=num;
			}
		}printf("Los valores maximos de cada fila son: ");
		for(i=0;i<cant;i++){
			for(j=0;j<cant;j++){
				if (max<mat1[i][j]){
					max=mat1[i][j];
					vec[i]=max;
				}
			}printf("%d ",vec[i]);
		}printf("Desea ejecutar el programa nuevamente? \n1. Si\n2. No");
		scanf("%d",&opc);
	}	
}
