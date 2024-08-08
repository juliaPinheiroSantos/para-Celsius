#include <stdio.h>
#include <locale.h>

float paraCelsius(float x){
	float result = (x - 32.0)*((5.0/9.0));
	return result;
}

int main(){
	setlocale(LC_ALL, "");
	int reset = 1;
	while (reset != 0){
		printf("Transforme temperaturas de Fahrenheit para Celsius\n\n");
		float graus;
		printf("Entre com uma temperatura em graus Fahrenheit: \n");
		scanf("%f", &graus);
		printf("A temperatura %.2f em graus Celsius � %.2f\n", graus, paraCelsius(graus));
		reset = 0;
	}
	return 0;
}
