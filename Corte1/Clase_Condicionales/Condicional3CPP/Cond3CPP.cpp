#include <iostream>

int main (){
	int score = 75;
	
	if (score>=90){
		std::cout <<"Calificación: A\n";
	} else if (score >= 80){
		std::cout <<"calificación: B\n"; 
	} else if (score >= 70){
		std::cout <<"Calificación: C\n";
	} else {
		std::cout <<"Calificación: F\n";
	}
	return 0;
}
