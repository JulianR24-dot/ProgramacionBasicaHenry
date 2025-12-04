#include <stdio.h>

int filn,colm,num,par, opc=1,i,j;

main(){
	while (opc==1){
		printf("Ingrese la cantidad de columnas de la matriz: ");
		scanf("%d", &colm);
		printf("\nIngrese la cantidad de filas de la matriz: ");
		scanf("%d",&filn);
		int mat1[filn][colm];
		printf("\nDatos de la matriz\n");
		for (i=0;i<filn;i++){
			for(j=0;j<colm;j++){
				printf("Ingrese el numero: ");
				scanf("%d",&num);
				mat1[i][j]=num;
			}
		}printf("\nLos numeros pares de la matriz son: ");
		for (i=0;i<filn;i++){
			for(j=0;j<colm;j++){
				par=mat1[i][j]%2;
				if (par==0){
					printf("%d ",mat1[i][j]);
				}
			}
		}printf("\nDesea ejecutar el programa nuevamente? \n1. Si\n2. No\n");	
	}
	
}
