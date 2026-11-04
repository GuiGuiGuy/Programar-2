#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand(time(NULL));
	int p1 = rand() % 999 + 1,num,num3=0;
	do {
		printf("Diz um numero:\n ");
		scanf_s("%d", &num);
		num3 = num3 + 1;
		if (num < p1) 
		{
			printf("O Numero esta para cima\n");
		}
		if(num>p1)
		{
			printf("O Numero esta para baixo\n");
		}

	} while (num != p1);
	printf("Acertou o numero:%d\n ", p1);
	printf("Esta foi o numero de tentativas:%d", num3);
}