#include<stdio.h>

int main(){
	float Celsius;
	
	printf("nhap do C: ");
	scanf("%f", &Celsius);
	
	float Fahrenheit = (Celsius * 1.8) + 32;
	printf("do F la: %f", Fahrenheit );
	
	return 0;
}