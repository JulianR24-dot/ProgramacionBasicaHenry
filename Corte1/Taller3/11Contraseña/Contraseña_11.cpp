#include <stdio.h>
#include <string.h>

int i=0;
char cont[50];
	
main(){
	char pass[]="estudiante";
	while (i<2){
		printf("Ingrese la contrase�a\n");
		scanf("%s",&cont);
		if(strcmp(cont,pass)==0){
			printf("Contrase�a correcta\n");
			i=2;
		}else{
			printf("Lo siento, contrase�a equivocada \n");
		}i=i+1;
	}
}
