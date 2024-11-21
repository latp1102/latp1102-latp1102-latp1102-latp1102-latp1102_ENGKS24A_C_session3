#include<stdio.h>

int main(){
	// khai bao float
	float edgeBottom, height, area;
	
	// Nhap day hinh tam giac
	printf("Moi ban nhap vao day la: ");
	scanf("%f",&edgeBottom);
	
	// Nhap chieu cao
	printf("Moi nhap vao chieu cao la: ");
	scanf("%f",&height);
	
	// Tinh dien tich
	area = (edgeBottom * height) / 2;
	
	// In ket qua
	printf("Dien tich là: %.f",area);
	
	return 0;
}
