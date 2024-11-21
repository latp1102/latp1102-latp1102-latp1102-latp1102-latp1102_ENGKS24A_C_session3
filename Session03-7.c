#include<stdio.h>

int main(){
	// Khai bao int
	int number, sum, number1, number2, number3, number4;
	
	// Nhap 4 so nguyen
	printf("Moi ban nhap vao 4 so nguyen la: ");
	scanf("%d",&number);
	
	// Lay so hang nghin
	number1 = number / 1000;
	// Lay so hang tram
	number2 = (number / 100) % 10;
	//Lay so hang chuc
	number3 = (number / 10) % 10;
	// Lay so hang don vi	
	number4 = number % 10;
	
	
	// Tinh tong
	sum = number1 + number2 + number3 + number4;
	
	printf("Tong 4 so nguyen la: %d",sum);
	
	return 0;
}
