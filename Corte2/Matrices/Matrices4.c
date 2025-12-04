#include <stdio.h>

int num, tam,i,j,opc=1;


main(){
	while (opc==1){
		float prom;
		printf("Ingrese el tamaño de la matriz: ");
		scanf("%d",&tam);
		int mat[tam][tam];
		int vec[tam];
		printf("\nIngrese los valores de la matriz:\n");
		for (i=0;i<tam;i++){
			for (j=0;j<tam;j++){
				printf("Ingrese el numero: ");
				scanf("%d",&num);
				mat[i][j]=num;
				vec[i]=0;
			}
		}for (i=0;i<tam;i++){
			for (j=0;j<tam;j++){
				if (vec[i]<mat[i][j]){
					vec[i]=mat[i][j];
					//vec[j]=max;
				}
			}
		}printf("\nLos valores maximos de la matriz son: ");
		for (i=0;i<tam;i++){
			printf("%d\n",vec[i]);
			prom=prom+vec[i];
		}prom=prom/i;
		printf("\nEl promedio de los maximos es: %f",prom);
		printf("Desea ejecutar nuevamente el programa?\n1. Si\n2. No\n");	
		scanf("%d",&opc);
	}
	
}
