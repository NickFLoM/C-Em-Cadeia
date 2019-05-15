#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 55");
	float h, p, imc ;
	printf("IMC \n");
	printf("Digite sua altura \n");
	scanf("%f", &h);
	printf("Digite seu peso \n");
	scanf("%f", &p);
	imc = p/(h*h);
	if(imc < 18){
	printf("Magreza \n");
	}
	if(imc <= 18,01 && imc >= 24,9){
	printf("Saúdavel \n");
	}
	if(imc <= 25 && imc >= 29,9){
	printf("Sobrepeso \n");
	}
	if(imc > 30){
	printf("Obesidade \n");
	}
system("PAUSE");
return 0;
}
