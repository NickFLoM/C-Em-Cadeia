#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 60");
	int a, b, c;
	printf("Se � ou n�o um triangulo \n");
	printf("Digite o valor de a \n");
	scanf("%d",&a);
	printf("Digite o valor de b \n");
	scanf("%d",& b);
	printf("Digite o valor de c \n");
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a){
		if(a==b && b==c){
			printf("� equilatero \n");
		}	
	}else{
		if(a!=b && b!=c && a!=c){
			printf("� escaleno \n");
		}else{
			if(a!=b && b==c || a == b && b != c){
			printf("� isosceles \n");
		}else{
			printf("N�o forma um triandulo");
			}
		}
	}
system("PAUSE");
return 0;
}



