#include <iostream>

int main() {
	int x=10;
	int y=20;
	int max_value;
	
	max_value = (x > y) ? x : y;
	std::cout <<"El maximo valor es: "<< max_value << std::endl;
	return 0;
}
