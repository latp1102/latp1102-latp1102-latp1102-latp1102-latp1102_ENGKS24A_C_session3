#include<stdio.h>

int main(){
	// Khai bao float
	float diemToan;
	float diemVan;
	float diemAnh;
	float tongDiem;
	float diemTB;
	
	// Nhap diem toan
	printf("Moi ban nhap diem toan la: ",diemToan);
	scanf("%f",&diemToan);
	
	// Nhap diem van
	printf("Moi ban nha diem van la: ",diemVan);
	scanf("%f",&diemVan);
	
	// Nhap diem anh
	printf("Moi ban nhap diem anh la: ",diemAnh);
	scanf("%f",&diemAnh);
	
	// Tinh toan
	// Tinh tong
	tongDiem = diemToan + diemVan + diemAnh;
	
	// Tinh diem TB
	diemTB = tongDiem / 3;
	
	// In ket qua
	printf("Tong Diem = %.1f\n",tongDiem);
	printf("Diem TB = %.1f",diemTB);
	
	return 0;
}
