#include <stdio.h>

float base, altura, radio, area=0, perimetro=0, pi=3.141592;
int opc=1, asig=0;

int main() {
	while (opc==1){
	
		printf("Calculadora de area y perimetro \n1. Cuadrado\n2. Rectangulo\n3. Triangulo\n4. Circulo\nIngrese la figura que desea calcular: ");
		scanf("%d", &asig);
		if (asig==1){
			printf("Ingrese el valor de la arista: \n");
			scanf("%f", &base);
			area=base*base;
			perimetro=4*base;
			printf("El area es: %f \nEl perimetro es: %f", area, perimetro);
			printf("\nDesea ejecutar el programa nuevamente? \n1. Si\n2. No\n");
			scanf("%d",&opc);
		} else if (asig==2){
			printf("Ingrese el valor de la Base: \n");
			scanf("%f", &base);
			printf("Ingrese el valor de la Altura: \n");
			scanf("%f", &altura);
			area=base*altura;
			perimetro=2*(base+altura);
			printf("El area es: %f \nEl perimetro es: %f", area, perimetro);
			printf("\nDesea ejecutar el programa nuevamente? \n1. Si\n2. No\n");
			scanf("%d",&opc);
		} else if (asig==3){
			printf("Ingrese el valor de la Base: \n");
			scanf("%f", &base);
			printf("Ingrese el valor de la Altura: \n");
			scanf("%f", &altura);
			printf("Ingrese el valor de la Hipotenusa: \n");
			scanf("%f", &radio);		
			area=base*altura/2;
			perimetro=radio+base+altura;
			printf("El area es: %f \nEl perimetro es: %f", area, perimetro);
			printf("\nDesea ejecutar el programa nuevamente? \n1. Si\n2. No\n");
			scanf("%d",&opc);
		} else if (asig==4){
			printf("Ingrese el valor del radio: \n");
			scanf("%f", &radio);		
			area=2*pi*radio*radio;
			perimetro=2*radio*pi;
			printf("El area es: %f \nEl perimetro es: %f", area, perimetro);
			printf("\nDesea ejecutar el programa nuevamente? \n1. Si\n2. No\n");
			scanf("%d",&opc);
		}else{
		printf("Ingrese una opcion valida\n");
		}
	}
}
