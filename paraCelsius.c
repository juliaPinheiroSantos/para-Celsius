#include <stdio.h>

float paraCelsius(float x){
	float result = (x - 32.0)*((5.0/9.0));
	return result;
}

int main(){
	float graus;
	printf("Entre com uma temperatura em graus Fahrenheit: \n");
	scanf("%f", &graus);
	printf("A temperatura %.2f em graus Celsius é %.2f\n", graus, paraCelsius(graus));
	return 0;
}
