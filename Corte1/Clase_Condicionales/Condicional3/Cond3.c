#include <stdio.h>

int main(){
	int score = 75;
	
	if (score >=90){
		printf("Calificación: A\n");
	} else if (score >= 80){
		printf("Calificación: B\n");
	} else if (score >= 70){
		printf("Calificación: C\n");
	} else {
		printf("Calificación: B\n");
	}
	return 0;
}
