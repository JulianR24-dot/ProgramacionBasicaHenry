#include <stdio.h>
#include <string.h>

int i=0;
char cont[50];
	
main(){
	char pass[]="estudiante";
	while (i<2){
		printf("Ingrese la contraseña\n");
		scanf("%s",&cont);
		if(strcmp(cont,pass)==0){
			printf("Contraseña correcta\n");
			i=2;
		}else{
			printf("Lo siento, contraseña equivocada \n");
		}i=i+1;
	}
}
