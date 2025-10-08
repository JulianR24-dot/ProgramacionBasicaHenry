#include <stdio.h>

char producto[10];
float preciou=0.0, cant=0.0,preciot=0.0,vend=0.0;

main(){
	printf("Ingrese el nombre del producto: \n");
	scanf("%s", &producto);
	printf("Ingrese la cantidad de unidades: \n");
	scanf("%f", &cant);
	printf("Ingrese precio unitario: \n");
	scanf("%f", &preciou);
	preciot=preciou*cant;
	vend=cant;
	printf("el producto: %s\n", producto);
	printf("el precio total: %f\n", preciot);
	printf("la cantidad vendida: %f\n", vend);
}
