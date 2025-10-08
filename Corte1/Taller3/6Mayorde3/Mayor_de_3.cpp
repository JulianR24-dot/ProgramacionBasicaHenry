#include <stdio.h>

int num1, num2, num3, max=0, min=0;

main(){
	printf("Ingrese el primer numero: \n");
	scanf("%d",&num1);
	max=num1;
	printf("Ingrese el segundo numero: \n");
	scanf("%d",&num2);
	if(num2>max){
		max=num2;
		min=num1;
	}else if(max>num2){
		min=num2;
	}else{
		printf("Los numeros son iguales\n");
	}printf("Ingrese el tercer numero\n");
	scanf("%d",&num3);
	if(num3>max){
		max=num3;
	}else if(num3<min){
		min=num3;
	}printf("El numero mayor de los 3 ingresados es: %d\nEl numero menor de los 3 ingresados es: %d",max,min);
}
