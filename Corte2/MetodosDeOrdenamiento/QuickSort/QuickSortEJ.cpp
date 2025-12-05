#include <stdio.h>
#include <stdlib.h>
void Intercambio(int*a,int*b){
	int temp=*a;
	*a=*b;
	*b= temp;
}
void quicksort(int*izq, int *der){
	if(der<izq){
		return;
	}int pivot=*izq;
	int*ult=der;
	int*pri=izq;
	while(izq<der){
		while(*izq<=pivot && izq<(der+1)){
			izq++;
		}while(*der>pivot&&der>(izq-1)){
			der--;
		}if(izq<der){
			Intercambio(izq,der);
		}
	}Intercambio(pri,der);
	quicksort(pri,der-1);
	quicksort(der+1,ult);
}

main(){
	int lista[]={9,4,2,7,5};
	int i,nelem;
	nelem=sizeof(lista)/sizeof(int);
	printf("Arreglo original\n");
	for(i=0;i<nelem;i++){
		printf("Elemento [%d]:%d\n",i+1,lista[i]);
	}quicksort(&lista[0],&lista[nelem-1]);
	printf("\nArreglo ordenado\n");
	for(i=0;i<nelem;i++){
		printf("elemento[%d]: %d\n",i+1,lista[i]);
	}
}
