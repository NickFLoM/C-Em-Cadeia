#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 55");
	int o ;
	float re, n1, n2;
	printf("Operações \n");
	printf("Digite a operação que deseja:\n 1- soma\n 2- subtração\n 3-divisão\n 4-multiplicação\n");
	scanf("%d", &o);
	
	switch(o){
		case 1:
			printf("Digite o primeiro número \n");
			scanf("%f",& n1);
			printf("Digite o segundo número \n");
			scanf("%f",& n2);
			re=	n1 + n2;
			printf("O resiltado é  %f\n", re);
		break;
		case 4:
			printf("Digite o primeiro número \n");
			scanf("%f",& n1);
			printf("Digite o segundo número \n");
			scanf("%f",& n2);
			re=	n1 * n2;
			printf("O resultado %f \n", re );
		break;
		case 3:
			printf("Digite o primeiro número \n");
			scanf("%f",& n1);
			printf("Digite o segundo número \n");
			scanf("%f",& n2);
			n1 / n2;
		printf("O resultado é %f\n", re);
		break;
		case 2:
			printf("Digite o primeiro número \n");
			scanf("%f",& n1);
			printf("Digite o segundo número \n");
			scanf("%f",& n2);
			n1 - n2;
			printf("O resultado é %f \n", re);
		break;
	default: printf("Impossivel calcular \n");
		break;
	}
system("PAUSE");
return 0;
}
