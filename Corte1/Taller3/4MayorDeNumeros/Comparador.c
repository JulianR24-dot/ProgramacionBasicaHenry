#include <stdio.h>

float num1,num2;

int main() {
	printf("Ingrese los dos numeros: \n");
	scanf("%f""%f",&num1,&num2);
	if(num1<num2){
		printf("el numero mayor es: %f\n",num2);
	}else if(num2<num1){
		printf("el numero mayor es: %f\n",num1);
	}else{
		printf("Los numeros son iguales\n");
	}
	return 0;
}
