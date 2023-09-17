#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
	float cel, rea, fah, hasil1;
	
printf("=================PROGRAM KONVERSI SUHU=================");
printf("\nMasukkan Derajat Celcius    = ");
scanf("%f", &cel);
printf("\nMasukkan Derajat Reamur     = ");
scanf("%f", &rea);
printf("\nMasukkan Derajat Fahrenheit = ");
scanf("%f", &fah);

hasil1 = (cel * 0.8);
printf("\nKonversi Derajat dari %2.f Celcius ke Reamur\t: %.2f", cel,hasil1);
hasil1 = (cel * 1.8 +32);
printf("\nKonversi Derajat dari %2.f Celcius ke Fahrenheit\t: %.2f", cel,hasil1);
hasil1 = (cel + 273.15);
printf("\nKonversi Derajat dari %2.f Celcius ke Kelvin\t: %.2f\n", cel,hasil1);

hasil1 = (rea / 0.8);
printf("\nKonversi Derajat dari %2.f Reamur ke Celcius\t: %.2f", rea,hasil1);
hasil1 = (rea * 2.25 +32);
printf("\nKonversi Derajat dari %2.f Reamur ke Fahrennheit\t: %.2f", rea,hasil1);
hasil1 = (rea / 0.8) + 273.15;
printf("\nKonversi Derajat dari %2.f Reamur ke Kelvin\t: %.2f\n", rea,hasil1);

hasil1 = (fah - 32) / 1.8;
printf("\nKonversi Derajat dari %2.f Fahrenheit ke Celcius\t: %.2f", fah,hasil1);
hasil1 = (fah - 32) * 2.25;
printf("\nKonversi Derajat dari %2.f Fahrenheit ke Reamur\t: %.2f", fah,hasil1);
hasil1 = (fah + 459.67) / 1.8;
printf("\nKonversi Derajat dari %2.f Fahrenheit ke Kelvin\t: %.2f\n", fah,hasil1);
getch();
return 0;
}
