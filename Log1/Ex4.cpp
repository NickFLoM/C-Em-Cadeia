#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 60");
	float n1, n2, n3, n4, me;
	printf("Media Aluno \n");
	printf("Digite sua 1° nota \n");
	scanf("%f",&n1);
	printf("Digite sua 2° nota \n");
	scanf("%f",&n2);
	printf("Digite sua 3° nota \n");
	scanf("%f",&n3);
	printf("Digite sua 4° nota \n");
	scanf("%f",&n4);
	me = (n1+n2+n3+n4)/4;
	
	if(me >= 2,5 ){
		printf("Nota E \n");
	}
	if(me <2,5  && me >=4,9 ){
		printf("Nota D \n");
	}	
	if(me <5 && me >=6,9 ){
		printf("Nota C \n");
	}
	if(me <= 7 && me >= 8,9 ){
		printf("Nota B \n ");
	}
	if(me < 9 ){
		printf("Nota A \n");
	}
system("PAUSE");
return 0;
}
