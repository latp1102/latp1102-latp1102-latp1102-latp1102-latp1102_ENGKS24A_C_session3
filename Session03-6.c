#include<stdio.h>

int main(){
	// khai bao float
	float edge, height, bottom, area;
	
	// Nhap day hinh tam giac
	printf("Moi ban nhap vao day la: ");
	scanf("%f",&edge);
	
	// Nhap chieu cao
	printf("Moi nhap vao chieu cao la: ");
	scanf("%f",&height);
	
	// Tinh dien tich
	area = ( edge + height) / 2;
	
	// In ket qua
	printf("Dien tich là: %.1f",area);
	
	return 0;
}
