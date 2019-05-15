#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 60");
	int id;
	printf("Interrvalo de idades \n");
	printf("Digite sua idade \n");
	scanf("%d",&id);
	if(id = 10 && id <= 18 ){
		printf("Sua idade é %d \n", id);
	}else{
		printf("Fora da idade minima \n");
	}
system("PAUSE");
return 0;
}
