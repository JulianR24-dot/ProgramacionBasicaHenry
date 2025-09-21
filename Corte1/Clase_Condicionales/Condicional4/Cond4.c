#include <stdio.h>

int main(){
	int x = 10;
	int y = 20;
	int max_value;
	
	max_value = (x>y) ? x : y;
	printf("El maximo valor es: %d\n", max_value);
	return 0;
}
