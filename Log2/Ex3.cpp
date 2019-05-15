#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 55");
	int o ;
	printf("Lache BigMac \n");
	printf("Digite o lanche desejado:\n 1-BigMac\n 2-Quarteirão \n 3-MacChicken\n 4-MacMelt\n 5-MacMax\n");
	scanf("%d", &o);
	
	switch(o){
		case 1:
			printf("Seu lanche é o BigMac \n");
		break;
		case 2:
			printf("Seu lanche é o Quarteirão \n");
		break;
		case 3:
			printf("Seu lanche é o MacChicken \n");
		break;
		case 4:
			printf("Seu lanche é o MacMelt \n");
		break;
		case 5:
			printf("Seu lanche é o MacMax \n");
		break;
	default: printf("Opção invalida \n");
		break;
	}
system("PAUSE");
return 0;
}

