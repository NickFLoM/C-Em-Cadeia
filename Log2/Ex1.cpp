#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 55");
	int o ;
	printf("Turno de Trabalho \n");
	printf("Digite inicio do seu horario de trabalho:\n 1-5hs ás 12,59hs\n 2-13hs ás 20,59hs \n 3- 21 hs ás 4,59 hs\n");
	scanf("%d", &o);
	
	switch(o){
		case 1:
			printf("Seu turno é na parte da manhã \n");
		break;
		case 2:
			printf("Seu turno é na parte da tarde \n");
		break;
		case 3:
			printf("Seu turo é na noite \n");
		break;
	default: printf("Horario invalido \n");
		break;
	}
system("PAUSE");
return 0;
}
