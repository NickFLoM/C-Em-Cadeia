#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 55");
	int o ;
	float re, saq, em, sal, dep, in, saqn, depn;
	printf("Cixa Eletronico \n");
	printf("Digite a operação que deseja:\n 1- saque\n 2- emprestimo\n 3-saldo\n 4-deposito\n");
	scanf("%d", &o);
	in = 10000.00;
	
	
	switch(o){
		case 1:
			printf("Quantidade de retirada \n");
			scanf("%f",& saq);
			saqn = in - saq;
			printf("O novo saldo é  %f\n", saqn);
		break;
		//case 2:
		//	printf("Digite o primeiro número \n");
		//	scanf("%f",& n2);
		//	printf("Digite o segundo número \n");
		//	scanf("%f",& n2);
		//	re=	n1 * n2;
		//	printf("O resultado %f \n", re );
		//break;
		case 3:
			sal = saqn + depn;
			printf("O seu saldo é %f\n", sal);
		break;
		case 4:
			printf("Digite o valor do deposito \n");
			scanf("%f", &dep);
			depn = in + dep; 
			printf("O saldo é %f \n", depn);
		break;
	default: printf("Conta invalida \n");
		break;
	}
system("PAUSE");
return 0;
}
