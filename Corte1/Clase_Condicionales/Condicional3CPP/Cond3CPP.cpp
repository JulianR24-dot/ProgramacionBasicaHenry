#include <iostream>

int main (){
	int score = 75;
	
	if (score>=90){
		std::cout <<"Calificaci�n: A\n";
	} else if (score >= 80){
		std::cout <<"calificaci�n: B\n"; 
	} else if (score >= 70){
		std::cout <<"Calificaci�n: C\n";
	} else {
		std::cout <<"Calificaci�n: F\n";
	}
	return 0;
}
