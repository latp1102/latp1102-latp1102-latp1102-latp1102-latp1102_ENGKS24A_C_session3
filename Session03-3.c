#include<stdio.h>
float Pi = 3.14;

int main() {
	// khai bao float
    int radius;  
    int perimeter;  
    int area; 

    // Nhap du lieu ban kinh 
    printf("Nhap ban kinh hinh tron: ");
    scanf("%d", &radius);

    
    perimeter = 2 * Pi * radius;
    area = Pi * radius * radius;

    
    printf("Chu vi hinh tron: %.2d\n", perimeter);
    printf("Dien tich hinh tron: %.2d", area);

    return 0;
}

