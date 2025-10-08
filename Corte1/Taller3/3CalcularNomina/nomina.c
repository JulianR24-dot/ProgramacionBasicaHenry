#include <stdio.h>

float prep=0, ret=0, horat=0, sueldob=0, sueldon=0;
char nombre[30];

int main() {
	printf("Ingrese el nombre del trabajador: \n");
	scanf("%s",&nombre);
	printf("Ingrese el valor de la hora trabajada y la cantidad de horas: \n");
	scanf("%f",&prep);
	scanf("%f",&horat);
	sueldob=horat*prep;
	ret=sueldob*5/100;
	sueldon=sueldob-ret;
	printf("El empleado: %s\n", nombre);
	printf("tiene sueldo bruto: %f\n", sueldob);
	printf("retencion: %f\n", ret);
	printf("y sueldo neto: %f\n", sueldon);
	return 0;
}
