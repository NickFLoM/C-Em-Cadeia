#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 60");
	int id;
	printf("Classificação de categoria \n");
	printf("Digite sua idade \n");
	scanf("%d",&id);
	if(id = 5 && id >= 7 ){
		printf("Particapa no Infantil A \n");
	}
	if(id = 8 && id >=10 ){
		printf("Participa no Infantil B \n");
	}	
	if(id = 11 && id >=13 ){
		printf("Participa no Juvenil A \n");
	}
	if(id = 14 && id >= 17 ){
		printf("Participa no Juvenil B \n ");
	}
	if(id >= 18){
		printf("Esta no Senior \n");
	}
system("PAUSE");
return 0;
}
