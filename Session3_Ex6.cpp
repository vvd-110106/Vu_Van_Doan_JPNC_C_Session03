#include<stdio.h>

int main(){
	// khai bao bien
	float canh, chieucao, dientich;
	// cho nguoi dung nhap do dai canh va chieu cao
	printf("Ban hay nhap do dai canh cua tam giac ");
	scanf("%f", &canh);
	printf("Ban hay nhap chieu cao cua tam giac ");
	scanf("%f", &chieucao);
	// tinh toan
	dientich = (chieucao * canh)/2;
	// In ra man hinh
	printf("Dien tich tam giac co do dai canh va chieu cao ban vua nhap la: %.3f", dientich);
	// ket thuc
	return 0;
}
