#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 55");
	int o ;
	float re, n1, n2;
	printf("Opera��es \n");
	printf("Digite a opera��o que deseja:\n 1- soma\n 2- subtra��o\n 3-divis�o\n 4-multiplica��o\n");
	scanf("%d", &o);
	
	switch(o){
		case 1:
			printf("Digite o primeiro n�mero \n");
			scanf("%f",& n1);
			printf("Digite o segundo n�mero \n");
			scanf("%f",& n2);
			re=	n1 + n2;
			printf("O resiltado �  %f\n", re);
		break;
		case 4:
			printf("Digite o primeiro n�mero \n");
			scanf("%f",& n1);
			printf("Digite o segundo n�mero \n");
			scanf("%f",& n2);
			re=	n1 * n2;
			printf("O resultado %f \n", re );
		break;
		case 3:
			printf("Digite o primeiro n�mero \n");
			scanf("%f",& n1);
			printf("Digite o segundo n�mero \n");
			scanf("%f",& n2);
			n1 / n2;
		printf("O resultado � %f\n", re);
		break;
		case 2:
			printf("Digite o primeiro n�mero \n");
			scanf("%f",& n1);
			printf("Digite o segundo n�mero \n");
			scanf("%f",& n2);
			n1 - n2;
			printf("O resultado � %f \n", re);
		break;
	default: printf("Impossivel calcular \n");
		break;
	}
system("PAUSE");
return 0;
}
