#include <stdio.h>

int num,N,i,j,opc=1;

main(){
	while (opc==1){	
		printf("Ingrese tamaño de la matriz ");
		scanf("%d",&N);
		int mat[N][N];
		for (i=0;i<N;i++){
			for (j=0;j<N;j++){
				printf("Ingrese el numero: ");
				scanf("%d",&num);
				mat[i][j]=num;
			}
		}for (i=0;i<N;i++){
			printf("\n");
			for (j=0;j<N;j++){
				printf("%d ",mat[i][j]);
			}
		}printf("\nLa matriz con diagonal 0 es: ");
		for (i=0;i<N;i++){
			printf("\n");
			for(j=0;j<N;j++){
				if(i==j){
					mat[i][j]=0;
				}printf("%d ",mat[i][j]);
			}
		}printf("\nLa matriz triangular superior es: ");
		for (i=0;i<N;i++){
			for (j=0;j<N;j++){
				if(i>j){
					mat[i][j]=mat[i][j]+mat[j][i];
				}
			}
		}for (i=0;i<N;i++){
			printf("\n");
			for (j=0;j<N;j++){
				if(i<j){
					mat[i][j]=0;
				}printf("%d   ",mat[i][j]);
			}
		}printf("\nDesea ejecutar el programa nuevamente? \n1. Si \n2. No\n");
		scanf("%d",&opc);
	}
}
