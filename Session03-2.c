#include<stdio.h>

int main(){
	float celsius, fahrenheit;
	
	// Nhap nhiet do theo do celsius
	printf("Moi ban nhap nhiet do theo do Celsius: ");
	scanf("%f",&celsius);
	
	// Chuyen doi nhiet do tu do Celsius sang do Fahrenheit
	fahrenheit = (celsius * 9 / 5) + 32;
	
	// In ket qua
	printf("Nhiet do theo do Fahrenheit la: %.f",fahrenheit);
    
	return 0;
}
