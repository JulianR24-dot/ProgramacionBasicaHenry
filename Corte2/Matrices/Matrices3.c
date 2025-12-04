#include <stdio.h>

int m,n,i,j,min,max,num,opc=1;


main(){
	float prom=0;
	printf("Ingrese el numero de filas de la matriz: ");
	scanf("%d",&n);
	printf("\nIngrese el numero de columnas de la matriz: ");
	scanf("%d",&m);
	int mat[n][m];
	printf("\nDatos de la matriz\n");
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Ingrese el numero ");
			scanf("%d",&num);
			mat[n][m]=num;
		}
	}max=0;
	min=0;
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(max<mat[i][j]){
				max=mat[i][j];
			}prom=prom+mat[i][j];
		}
	}for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(min>mat[i][j]){
				min=mat[i][j];
			}
		}
	}prom=prom/(i+j);
	printf("\nEl numero maximo de la matriz es: %d \nEl menor es: %d\nEl promedio de los valores de la matriz es:%f",max,min,prom);
}
