#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 55");
	char o ;
	printf("Estado Civil \n");
	printf("Digite a letra para o estado civil:\n S-Solteiro(a)\n C-Casa(a)\n D-Divorciado(a)\n V-Vi�vo(a)\n");
	scanf("%c", &o);
	
	switch(o){
		case 's':
			printf("Seu estado civil � Solteiro(a) \n");
		break;
		case 'c':
			printf("Seu estado civil � Casado(a) \n");
		break;
		case 'd':
			printf("Seu estado civil � Divorciado(a) \n");
		break;
		case 'v':
			printf("Seu estado civil � Vi�vo(a) \n");
		break;
	default: printf("Invalido \n");
		break;
	}
system("PAUSE");
return 0;
}
