#include<stdio.h>

int main(){
	// khai bao bien
	float chuvi, dientich, bankinh;
	float pi = 3.14;
	// nhap ban kinh tu ban phim
	printf("Ban hay nhap ban kinh cua hinh tron ");
	scanf("%f", &bankinh);
	// tinh toan
	chuvi = 2 * pi * bankinh;
	dientich = pi * bankinh * bankinh;
	// In ra man hinh
	printf("Chu vi cua hinh tron do la: %.2f \n", chuvi);
	printf("Dien tich cua hinh tron la: %.2f \n", dientich);
	// ket thuc
	return 0;
}
