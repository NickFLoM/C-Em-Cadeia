#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 55");
	int o ;
	printf("Lache BigMac \n");
	printf("Digite o lanche desejado:\n 1-BigMac\n 2-Quarteir�o \n 3-MacChicken\n 4-MacMelt\n 5-MacMax\n");
	scanf("%d", &o);
	
	switch(o){
		case 1:
			printf("Seu lanche � o BigMac \n");
		break;
		case 2:
			printf("Seu lanche � o Quarteir�o \n");
		break;
		case 3:
			printf("Seu lanche � o MacChicken \n");
		break;
		case 4:
			printf("Seu lanche � o MacMelt \n");
		break;
		case 5:
			printf("Seu lanche � o MacMax \n");
		break;
	default: printf("Op��o invalida \n");
		break;
	}
system("PAUSE");
return 0;
}

