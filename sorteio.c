/*Kelson Teixeira
*Estudante de Engenharia Mecatrônica - UnB (Universidade de Brasília)
*Programa com propósito de gerar um número aleatório para sorteios*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

/**********************************beauty**************/
int oq (){ /* Função meramente estética */

	system ("clear");       

	usleep(100000); 	printf("     ?????????????\n");
	usleep(100000);		printf("    ???         ???\n");
	usleep(100000);		printf("   ???           ???\n");
	usleep(100000);		printf("  ???             ???\n");
	usleep(100000);		printf("   ??             ???\n");
	usleep(100000);		printf("                 ???\n");
	usleep(100000);		printf("                ???\n");
	usleep(100000);		printf("               ???\n");
	usleep(100000);		printf("              ???\n");
	usleep(100000);		printf("             ???\n");
	usleep(100000);		printf("            ???\n");
	usleep(100000);		printf("            ???\n");
	usleep(100000);		printf("            ???\n");
	usleep(100000);		printf("            ???\n");
	usleep(100000);		printf(" \n");
	usleep(100000);		printf("            ???\n");
	usleep(100000);		printf("            ???\n");

	sleep (2);

	system ("clear");

return 0;
}


int main () { 
	int a, b; /*a é uma váriável responsável por receber o número de rifas, 
				*b é a váriavel que assumirá o valor do número sorteado*/

	system("clear"); 
	sleep(1);

	printf("\n\nEscreva o nùmero de rifas a serem sorteadas e presione ENTER:");
				
	scanf("%d", &a);
	getchar();
	
	system ("clear");
			
	printf("\n\nO número de Rifas é %d\n", a);
	a = a+1; /*novo valo de a, para que haja possibilidade do valor digitado também ser sorteado*/


	printf("Aperte ENTER para sortear!\n");
	getchar();

	srand(time(NULL)); /*gera o número aletório a partir do relógio*/
	b = rand()%a;
			
	oq();
			
	printf("\n\nO número sorteado foi %d\n\n", b);

return 0;
}