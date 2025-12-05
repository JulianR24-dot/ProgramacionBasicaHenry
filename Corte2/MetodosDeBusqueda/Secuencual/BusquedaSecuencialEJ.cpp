#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int Busquedasecuencial(int *parray,int buscar,int elem){
	int i;
	for(i=0;i<elem;i++){
		if(*(parray+i)==buscar){
			return(i);
		}
	}return(-1);
}
main(){
	int *pdatos,nelem,dbuscar,d,result;
	printf("Cuantos elementos desea en el array?");
	scanf("%d",&nelem);
	pdatos=(int *)malloc(nelem*sizeof(int));
	if(pdatos==NULL){
		printf("Insuficiente espacio de memoria");
		exit(-1);
	}
	for(d=0;d<nelem;d++){
		printf("Elemento[%d]: ",d);
		scanf("%d",(pdatos+d));
	}printf("\nQue elemento desea buscar?");
	scanf("%d",&dbuscar);
	result=Busquedasecuencial(pdatos,dbuscar,nelem);
	if(result!=-1){
		printf("\n%d Se encuentra en la posicion %d Del Arreglo\n",dbuscar,result);
	}else{
		printf("\n%d No se encontro\n",dbuscar);
	}
}
