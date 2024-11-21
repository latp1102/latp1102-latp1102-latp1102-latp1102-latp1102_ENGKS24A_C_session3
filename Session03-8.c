#include<stdio.h>


int main(){
	// Khai bao int
	int number, reverseNumber, number1, number2, number3, number4;
	
	// Nhap 4 so nguyen
	printf("Moi ban nhap vao 4 so nguyen la: ");
	scanf("%d",&number);
	
	number1 = number / 1000;
	number2 = (number / 100) % 10;
	number3 = (number / 10) % 10;	
	number4 = number % 10;
	
	// Nhap 4 so nguyen nghich dao
	reverseNumber = number4 * 1000 + number3 * 100 + number2 * 10 + number1;
	
	// In ra ket qua
	printf("So nguyen nghich dao la: %d",reverseNumber);
	
	return 0;
}
