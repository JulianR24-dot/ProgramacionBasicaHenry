#include <stdio.h>

int i,j,N,par,num,opc=1,npar,nimpar,ppar,pimpar;

main(){
	while (opc==1){
		printf("Ingrese el tamaño de la matriz: ");
		scanf("%d",&N);
		int mat[N][N];
		int contp=0,conti=0,contpi=0,contpp=0;
		float promp=0,promi=0,prompp=0,prompi=0;
		printf("\nDatos de la matriz: \n");
		for (i=0;i<N;i++){
			for (j=0;j<N;j++){
				printf("Ingrese el numero: ");
				scanf("%d",&num);
				mat[i][j]=num;
			}
		}for (i=0;i<N;i++){
			for(j=0;j<N;j++){
				par=mat[i][j]%2;
				if(par==0){
					promp=promp+mat[i][j];
					contp++;
				}else if(par!=0){
					promi=promi+mat[i][j];
					conti++;
				}
			}
		}for (i=0;i<N;i++){
			for(j=0;j<N;j++){
				if((i+j)%2==0){
					prompp=prompp+i+j;
					contpp++;
				}else{
					prompi=prompi+i+j;
					contpi++;
				}
			}
		}npar=promp;
		promp=promp/contp;
		nimpar=promi;
		promi=promi/conti;
		ppar=prompp;
		prompp=prompp/contpp;
		pimpar=prompi;
		prompi=prompi/contpi;
		printf("\nLa suma de numeros pares es %d y su media es %f\nLa suma de numeros impares es %d y su media es %f",npar,promp,nimpar,promi);
		printf("\nLa suma de posiciones pares es %d y su media es %f\nLa suma de posiciones impares es %d y su media es %f",ppar,prompp,pimpar,prompi);
		printf("\nDesea ejecutar nuevamente el programa\n1. Si\n2. No");
		scanf("%d",&opc);
	}
}
