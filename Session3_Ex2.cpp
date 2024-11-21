#include<stdio.h>

int main(){
	// khai bao bien
	float  Celsius, Fahrenheit;
	// Cho nguoi dung nhap nhiet do
	printf("Ban hay nhap nhiet do theo Celsius nhe: ");
	scanf("%f",&Celsius);
	// tinh toan doi tu Celsius sang Fahrenheit
	Fahrenheit = (Celsius * 9/5) + 32;
	// in ket qua ra man hinh
	printf("Nhiet do doi tu Celsius sang Fahrenheit la: %f", Fahrenheit);
	// ket thyc
	return 0
}

