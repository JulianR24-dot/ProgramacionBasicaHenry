#include <stdio.h>

int dia,mes;

main(){
	printf("Ingrese el dia de su nacimiento: ");
	scanf("%d",&dia);
	printf("\nIngrese el mes de nacimiento: \n1. Enero\n2 Febrero\n3. Marzo\n4. Abril\n5. Mayo\n6. Junio\n7. Julio\n8. Agosto\n9. Septiembre\n10. Octubre\n11. Noviembre\n12. Diciembre\n");
	scanf("%d",&mes);
	if (mes==1){
		if (dia>=20 && dia<=31){
			printf("\nSu signo zodiacal es Acuario ");
		}else if(dia<20 && dia>=1){
			printf("\nSu signo zodiacal es Capricornio ");
		}else {
			printf("La fecha ingresada no es valida");
		}
	}else if (mes==2){
		if (dia>=19 && dia<=28){
			printf("\nSu signo zodiacal es Piscis ");
		}else if(dia<19 && dia>=1){
			printf("\nSu signo zodiacal es Acuario ");
		}else {
			printf("La fecha ingresada no es valida");
		}
	}else if (mes==3){
		if (dia>=21 && dia<=31){
			printf("\nSu signo zodiacal es Acuario ");
		}else if(dia<21 && dia>=1){
			printf("\nSu signo zodiacal es Piscis ");
		}else {
			printf("La fecha ingresada no es valida");
		}
	}else if (mes==4){
		if (dia>=20 && dia<=30){
			printf("\nSu signo zodiacal es Tauro ");
		}else if(dia<20 && dia>=1){
			printf("\nSu signo zodiacal es Acuario ");
		}else {
			printf("La fecha ingresada no es valida");
		}
	}else if (mes==5){
		if (dia>=21 && dia<=31){
			printf("\nSu signo zodiacal es Geminis ");
		}else if(dia<21 && dia>=1){
			printf("\nSu signo zodiacal es Tauro ");
		}else {
			printf("La fecha ingresada no es valida");
		}
	}else if (mes==6){
		if (dia>=21 && dia<=30){
			printf("\nSu signo zodiacal es Cancer ");
		}else if(dia<21 && dia>=1){
			printf("\nSu signo zodiacal es Geminis ");
		}else {
			printf("La fecha ingresada no es valida");
		}
	}else if (mes==7){
		if (dia>=23 && dia<=31){
			printf("\nSu signo zodiacal es Leo ");
		}else if(dia<23 && dia>=1){
			printf("\nSu signo zodiacal es Cancer ");
		}else {
			printf("La fecha ingresada no es valida");
		}
	}else if (mes==8){
		if (dia>=23 && dia<=31){
			printf("\nSu signo zodiacal es Virgo ");
		}else if(dia<23 && dia>=1){
			printf("\nSu signo zodiacal es Leo ");
		}else {
			printf("La fecha ingresada no es valida");
		}
	}else if (mes==9){
		if (dia>=23 && dia<=30){
			printf("\nSu signo zodiacal es Libra ");
		}else if(dia<23 && dia>=1){
			printf("\nSu signo zodiacal es Virgo ");
		}else {
			printf("La fecha ingresada no es valida");
		}
	}else if (mes==10){
		if (dia>=23 && dia<=31){
			printf("\nSu signo zodiacal es Escorpio ");
		}else if(dia<23 && dia>=1){
			printf("\nSu signo zodiacal es Libra ");
		}else {
			printf("La fecha ingresada no es valida");
		}
	}else if (mes==11){
		if (dia>=22 && dia<=31){
			printf("\nSu signo zodiacal es Sagitario ");
		}else if(dia<22 && dia>=1){
			printf("\nSu signo zodiacal es Escorpio ");
		}else {
			printf("La fecha ingresada no es valida");
		}
	}else if (mes==12){
		if (dia>=22 && dia<=31){
			printf("\nSu signo zodiacal es Capricornio ");
		}else if(dia<22 && dia>=1){
			printf("\nSu signo zodiacal es Sagitario ");
		}else {
			printf("La fecha ingresada no es valida");
		}
	}else{
		printf("El mes ingresado no es valido");
	}
}
