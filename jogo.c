/*Kelson Teixeira
*Estudante de Engenharia Mecatrônica - UnB (Universidade de Brasília)
*Jogo desenvolvido para a aula de APC (Algoritmos e Programação de Computadores)*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/*****************************Jogo Senha ***************************************/

int senha() {
	int valor, tentativa, A, again;
	char nome[50];
	srand(time(NULL));
	valor = rand()%100001;
	A = 1;
			system ("clear");
			sleep(1);	

			printf("			*********\n");
	    	printf("			* SENHA *\n");
	    	printf("			*********\n\n");

			printf("Pronto para mostrar o seu talento em adivinhar as coisas?\n");
			printf("Em quantas tentativas você consegue adivinhar uma senha\n");
			printf("Para desistir, adicione qualquer número inteiro negativo.\n");
			printf("que pode ser qualquer valor entre 0 e 100000?\n\n");
			printf("Para desistir, adicione qualquer número inteiro negativo.\n");
			printf("Escreva seu nome ou apelido:\n");
				scanf("%s", nome);

			printf("\nPreparado? Qual o seu primeiro chute?\n\n");
			

	do {
			printf("Tentativa: %d\n\n", A);

				scanf ("%d", &tentativa);
				getchar ();
				

					if (valor < tentativa){
						printf("%s, Você errou!\n", nome);
						printf("Pacerece que você não é tão bom assim\n");
						printf("A senha é um número menor, tente de novo:\n\n");
					}
					if ((valor > tentativa)&&(tentativa > -1)) {
						printf("Você errou!\n");
						printf("OMG, %s! Você é horrível!\n", nome);
						printf("A senha é um número maior, tente de novo:\n\n");
					}
					if (valor == tentativa){
						printf("YEAH! Parabéns %s! Você acertou em %d tentativas!\n", nome, A);
						printf("O mundo está preste a conhecer um novo gênio!\n\n");
						printf("Se desejar jogar novamente, aperte 5, se deseja sair aperte 6:");
						scanf ("%d", &again);
							if (again == 5){
							senha();
							}
							if (again == 6){
							main ();
							}


					}
	A++;

	}while ((valor != tentativa)&&(tentativa > -1));
	if (tentativa < 0){
		printf("Já vai, %s? Boa sorte! E Volte sempre!\n", nome);
		sleep (3);
	}

	printf("Aperte enter para sair:\n"); 
 	getchar();   
	return 0;
}

/************************************Jogo Charadas*********************************/

int charadas () {

	int B, C, D, again, t;
	char nome[50];
	D = 1; t = 2;

	oq ();

	system ("clear");
	sleep(1);

		printf("	><><><><><><\n");
		printf("	> CHARADAS <\n");
		printf("	><><><><><><\n\n");
		printf("Escreva seu nome ou apelido sem espaço:\n\n");

			scanf("%s", &nome);

			system("clear");

		printf("	><><><><><><\n");
		printf("	> CHARADAS <\n");
		printf("	><><><><><><\n\n");
		printf("%s, você é bom com charadas?\n", nome);
		printf("É um bom momento para testar suas habilidades!\n\n");
		
	do{ /*laço de repetição1 responsável por permitir a entrada apenas das opções dadas*/
		
		printf("Escolha um número de 1 a 3: ");

			scanf ("%d", &B);
			getchar ();

	} while (1 > B || B > 3);/*fim do laço de repetição1*/

				do{/*laço de repetição2 responsável por permitir jogar só duas vezes*/


						if (B == 1) {
								system("clear");
								printf("	><><><><><><\n");
								printf("	> CHARADAS <\n");
								printf("	><><><><><><\n\n");
							if (D==2){
								system("clear");
								printf("	><><><><><><\n");
								printf("	> CHARADAS <\n");
								printf("	><><><><><><\n\n");
								
								printf("\n\nTente de novo!\n\n");
							}

							printf("\n%s, você tem %d chance(s) para acertar!\n\n", nome, t);
							printf("\nQuais são as partículas que não gostam de estudar?\n\n");
							printf("1) Eletróns\n");
							printf("2) Prótons\n");
							printf("3) Anti-elétrons\n");
							printf("4) Neutrons\n\n");

							scanf ("%d", &C);
							getchar();

							if (C == 3)
									{
							 printf("\nVocê acertou!\nAnti-elétrons, pois são partículas de antimatéria.\n\n");
									sleep (3);			 
									  do{/*laço de repetição4 responsável por dar opções ao jogador que ganhou*/
							

									system("clear");
									printf("%s, você Ganhou! Parabéns!\n", nome);
									printf("Se você deseja jogar novamente, aperte 5 e enter,\n");
									printf("se você deseja voltar ao menu principal, aperte 6 e enter:\n");
									scanf("%d", &again);
									getchar();
								if (again == 5){
									charadas ();
								}
								if (again == 6){
									D=4;
								}
							
								}while(5 > again || again > 6); /*fim do laço de repetição4*/
									}
							
							}

						if (B == 2) {
								system("clear");
								printf("	><><><><><><\n");
								printf("	> CHARADAS <\n");
								printf("	><><><><><><\n\n");
							if (D==2){
								system("clear");
								printf("	><><><><><><\n");
								printf("	> CHARADAS <\n");
								printf("	><><><><><><\n\n");
								printf("Tente de novo!\n\n");
							}
							printf("\n%s, você tem %d chance(s) para acertar!\n\n", nome, t);
							printf("\nQual o animal mais antigo que existe?\n\n");
							printf("1) O macaco\n");
							printf("2) A zebra\n");
							printf("3) Os dinossauros\n");
							printf("4) Os peixes\n\n");

							scanf ("%d", &C);
							getchar();

								if (C == 2)
								{
								  printf("\nVocê acertou!\nA Zebra, pois ela é em preto e branco.\n\n");
								  sleep (3);
								  do{/*laço de repetição4 responsável por dar opções ao jogador que ganhou*/
							

									system("clear");
									printf("%s, você Ganhou! Parabéns!\n", nome);
									printf("Se você deseja jogar novamente, aperte 5 e enter,\n");
									printf("se você deseja voltar ao menu principal, aperte 6 e enter:\n");
									scanf("%d", &again);
									getchar();
								if (again == 5){
									charadas ();
								}
								if (again == 6){
									D=4;
								}
							
								}while(5 > again || again > 6); /*fim do laço de repetição4*/
								  
								   

								}
									if (C != 2)
									{
										printf("\nTente de novo!\n\n");
									}					
						}


				if (B == 3) {
						system("clear");
						printf("	><><><><><><\n");
						printf("	> CHARADAS <\n");
						printf("	><><><><><><\n\n");

					if (D==2){
						system("clear");
						printf("	><><><><><><\n");
						printf("	> CHARADAS <\n");
						printf("	><><><><><><\n\n");
						printf("Tente de novo!\n\n");
					}
					printf("\n%s, você tem %d chance(s) para acertar!\n\n", nome, t);
					printf("\nQuantos desenvolvedores de software são necessários para trocar uma lâmpada?\n\n");
					printf("1) 3\n");
					printf("2) 4\n");
					printf("3) 1\n");
					printf("4) Nenhum\n\n");

					scanf ("%d", &C);

						if (C == 4)
						{
						  	printf("\nVocê acertou!\nNenhum. Isso é um problema de hardware.\n\n");
						  	sleep (3);
						  	 	do{/*laço de repetição4 responsável por dar opções ao jogador que ganhou*/
							

									system("clear");
									printf("%s, você Ganhou! Parabéns!\n", nome);
									printf("Se você deseja jogar novamente, aperte 5 e enter,\n");
									printf("se você deseja voltar ao menu principal, aperte 6 e enter:\n");
									scanf("%d", &again);
									getchar ();
								if (again == 5){
									charadas ();
								}
								if (again == 6){
									D=4;
								}
							
								}while(5 > again || again > 6); /*fim do laço de repetição4*/
						 	 
						 	  
						}
						if (C != 4)
						{
								printf("\nTente de novo!\n\n");
						}					
				}

				D++;
				t--;
				}while (D < 3);/*fim do laço repetição2*/

						do{/*laço de repetição3 responsável por dar opções ao jogador que errou 2 vezes*/
							if (D==3){

									system("clear");
									printf("%s, você errou duas vezes e perdeu!\n", nome);
									printf("Se você deseja jogar novamente, aperte 5 e enter,\n");
									printf("se você deseja voltar ao menu principal, aperte 6 e enter:\n");
									scanf("%d", &again);
									getchar ();
								if (again == 5){
									charadas ();
								}
								if (again == 6){
									D=4;
								}
							}
						}while(5 > again || again > 6); /*fim do laço de repetição3*/

						

return 0;
}

/************Jogo Pedra-Papel-Tesoura PARA DESEMPATE DE DOIS JOGADORES***********/

int ppt2(){
	int j1, j2;

		system("clear");
		sleep(1);


		printf("\n	#######################\n");
		printf("	# PEDRA-PAPEL-TESOURA #\n");
		printf("	#######################\n\n");
		printf("Vocês Empataram!\nEscolha o novo jogador 1 e o novo jogador 2\n\n");
		printf("Opções:\n");
		printf("	1) PEDRA\n");
		printf("	2) PAPEL\n");
		printf("	3) TESOURA\n");


			do{
				printf("\nJogador 1: ");
					scanf("%d", &j1);
					getchar();
					system ("clear");
					sleep (1);
						if (j1 < 1 || j1 > 3)
						{
							printf("\nEssa opção não existe\n\n");
						}

			}while (j1 < 1 || j1 > 3);

			do{
				printf("\n	#######################\n");
				printf("	# PEDRA-PAPEL-TESOURA #\n");
				printf("	#######################\n\n");
				printf("Opções:\n");
				printf("	1) PEDRA\n");
				printf("	2) PAPEL\n");
				printf("	3) TESOURA\n");

				printf("\nJogador 2: ");
					scanf("%d", &j2);
					getchar();
					system ("clear");
					sleep (1);
						if (j2 < 1 || j2 > 3)
						{
							printf("\nEssa opção não existe\n\n");
						}

			}while (j2 < 1 || j2 > 3);

					/************Ganhador**************/

					/***********Jogador 1 *************/


						if ((j1 == 1)&&(j2 == 3))
						{
							system ("clear");

							printf("\n	#######################\n");
							printf("	# PEDRA-PAPEL-TESOURA #\n");
							printf("	#######################\n\n");
							printf("Jogador 1 venceu! Pedra contra Tesoura!\n\n");
						}

						if ((j1 == 2)&&(j2 == 1))
						{
							system ("clear");

							printf("\n	#######################\n");
							printf("	# PEDRA-PAPEL-TESOURA #\n");
							printf("	#######################\n\n");
							printf("Jogador 1 venceu! Papel contra Pedra!\n\n");
						}

						if ((j1 == 3)&&(j2 == 2))
						{
							system ("clear");

							printf("\n	#######################\n");
							printf("	# PEDRA-PAPEL-TESOURA #\n");
							printf("	#######################\n\n");
							printf("Jogador 1 venceu! Tesoura contra Papel!\n\n");
						}

						/*****************Jogador 2*********/

						if ((j2 == 1)&&(j1 == 3))
						{
							system ("clear");

							printf("\n	#######################\n");
							printf("	# PEDRA-PAPEL-TESOURA #\n");
							printf("	#######################\n\n");
							printf("Jogador 2 venceu! Pedra contra Tesoura!\n\n");
						}

						if ((j2 == 2)&&(j1 == 1))
						{
							system ("clear");

							printf("\n	#######################\n");
							printf("	# PEDRA-PAPEL-TESOURA #\n");
							printf("	#######################\n\n");
							printf("Jogador 2 venceu! Papel contra Pedra!\n\n");
						}

						if ((j2 == 3)&&(j1 == 2))
						{
							system ("clear");

							printf("\n	#######################\n");
							printf("	# PEDRA-PAPEL-TESOURA #\n");
							printf("	#######################\n\n");
							printf("Jogador 2 venceu! Tesoura contra Papel!\n\n");
						}

						if ((j2 == 1)&&(j1 == 1))
						{
							system ("clear");

							printf("\n	#######################\n");
							printf("	# PEDRA-PAPEL-TESOURA #\n");
							printf("	#######################\n\n");
							printf("Empate! Pedra com Pedra!\n\n");

							sleep(2);

							ppt2();
						}

						if ((j2 == 2)&&(j1 == 2))
						{
							system ("clear");

							printf("\n	#######################\n");
							printf("	# PEDRA-PAPEL-TESOURA #\n");
							printf("	#######################\n\n");
							printf("Empate! Papel com Papel!\n\n");

							sleep(2);

							ppt2();
						}

						if ((j2 == 3)&&(j1 == 3))
						{
							system ("clear");

							printf("\n	#######################\n");
							printf("	# PEDRA-PAPEL-TESOURA #\n");
							printf("	#######################\n\n");
							printf("Empate! Tesoura com Tesoura!\n\n");

							sleep(2);

							ppt2();
						}
printf("Aperte enter para sair:\n"); 
getchar();   
return 0;
}

/*************************************Jogo Pedra-Papel-Tesoura*******************/
int ppt(){
	int j1, j2, j3, E;
	system ("clear");
	sleep (1);
do{
		printf("\n	#######################\n");
		printf("	# PEDRA-PAPEL-TESOURA #\n");
		printf("	#######################\n\n");
		printf("Opções:\n");
		printf("	1) PEDRA\n");
		printf("	2) PAPEL\n");
		printf("	3) TESOURA\n");


			do{
				printf("\nJogador 1: ");
					scanf("%d", &j1);
					getchar();
					system ("clear");
					sleep (1);
						if (j1 < 1 || j1 > 3)
						{
							printf("\nEssa opção não existe\n\n");
						}

			}while (j1 < 1 || j1 > 3);

			do{
				printf("\n	#######################\n");
				printf("	# PEDRA-PAPEL-TESOURA #\n");
				printf("	#######################\n\n");
				printf("Opções:\n");
				printf("	1) PEDRA\n");
				printf("	2) PAPEL\n");
				printf("	3) TESOURA\n");

				printf("\nJogador 2: ");
					scanf("%d", &j2);
					getchar();
					system ("clear");
					sleep (1);
						if (j2 < 1 || j2 > 3)
						{
							printf("\nEssa opção não existe\n\n");
						}

			}while (j2 < 1 || j2 > 3);

			do{

				printf("\n	#######################\n");
				printf("	# PEDRA-PAPEL-TESOURA #\n");
				printf("	#######################\n\n");
				printf("Opções:\n");
				printf("	1) PEDRA\n");
				printf("	2) PAPEL\n");
				printf("	3) TESOURA\n");

				printf("\nJogador 3: ");
					scanf("%d", &j3);
					getchar();
					system ("clear");
					sleep (1);
						if (j3 < 1 || j3 > 3)
						{
							printf("\nEssa opção não existe\n\n");
						}

			}while (j3 < 1 || j3 > 3);


			if (j1 + j2 + j3 == 3 || j1 + j2 + j3 == 6 || j1 + j2 + j3 == 9)		
			{
				system ("clear");
				printf("\nEmpate! Jogue de novo!\n\n");		
			}

			

}while (j1 + j2 + j3 == 3 || j1 + j2 + j3 == 6 || j1 + j2 + j3 == 9); 
		


					/*condicionais para os ganhadore*/

								/*jogador 1*/

					if ((j1 == 1)&&(j2 == 3)&&(j3 == 3))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 1 venceu! Pedra contra Tesoura!\n\n");
					}

					if ((j1 == 2)&&(j2 == 1)&&(j3 == 1))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 1 venceu! Papel contra Pedra!\n\n");
					}

					if ((j1 == 3)&&(j2 == 2)&&(j3 == 2))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 1 venceu! Tesoura contra Papel!\n\n");				
					}

								/*jogador 2*/

					if ((j2 == 1)&&(j1 == 3)&&(j3 == 3))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 2 venceu! Pedra contra Tesoura!\n\n");
					}

					if ((j2 == 2)&&(j1 == 1)&&(j3 == 1))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 2 venceu! Papel contra Pedra!\n\n");
					}

					if ((j2 == 3)&&(j1 == 2)&&(j3 == 2))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 2 venceu! Tesoura contra Papel!\n\n");				
					}

								/*jogador 3*/

					if ((j3 == 1)&&(j1 == 3)&&(j2 == 3))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 3 venceu! Pedra contra Tesoura!\n\n");
					}

					if ((j3 == 2)&&(j1 == 1)&&(j2 == 1))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 3 venceu! Papel contra Pedra!\n\n");
					}

					if ((j3 == 3)&&(j1 == 2)&&(j2 == 2))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 3 venceu! Tesoura contra Papel!\n\n");				
					}

					/* Empate entre dois jogadores*/

								/*Jogadores 1 e 2*/


					if ((j1 == 1)&&(j2 == 1)&&(j3 == 3))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 3 perdeu! Jogadores 1 e 2 empataram!\nAperte qualquer número poder para desempatar\n\n");

							scanf("%d", &E);
							getchar();

								if (E >= 0 || E <= 0)
								{
									ppt2();
								}
					}

					if ((j1 == 2)&&(j2 == 2)&&(j3 == 1))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 3 perdeu! Jogadores 1 e 2 empataram!\nAperte qualquer número poder para desempatar\n\n");

							scanf("%d", &E);
							getchar();

								if (E >= 0 || E <= 0)
								{
									ppt2();
								}
					}

					if ((j1 == 3)&&(j2 == 3)&&(j3 == 2))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 3 perdeu! Jogadores 1 e 2 empataram!\nAperte qualquer número poder para desempatar\n\n");

							scanf("%d", &E);
							getchar();

								if (E >= 0 || E <= 0)
								{
									ppt2();
								}
					}

								/*Jogadores 1 e 3*/


					if ((j1 == 1)&&(j2 == 3)&&(j3 == 1))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 2 perdeu! Jogadores 1 e 3 empataram!\nAperte qualquer número poder para desempatar\n\n");

							scanf("%d", &E);
							getchar();
								if (E >= 0 || E <= 0)
								{
									ppt2();
								}
					}

					if ((j1 == 2)&&(j2 == 1)&&(j3 == 2))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 2 perdeu! Jogadores 1 e 3 empataram!\nAperte qualquer número poder para desempatar\n\n");

							scanf("%d", &E);
							getchar();

								if (E >= 0 || E <= 0)
								{
									ppt2();
								}
					}

					if ((j1 == 3)&&(j2 == 2)&&(j3 == 3))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 2 perdeu! Jogadores 1 e 3 empataram!\nAperte qualquer número poder para desempatar\n\n");

							scanf("%d", &E);
							getchar();

								if (E >= 0 || E <= 0)
								{
									ppt2();
								}
					}

									/*Jogadores 2 e 3 */ 


					if ((j1 == 3)&&(j2 == 1)&&(j3 == 1))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 1 perdeu! Jogadores 2 e 3 empataram!\nAperte qualquer número poder para desempatar\n\n");

							scanf("%d", &E);
							getchar();

								if (E >= 0 || E <= 0)
								{
									ppt2();
								}
					}

					if ((j1 == 1)&&(j2 == 2)&&(j3 == 2))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 1 perdeu! Jogadores 2 e 3 empataram!\nAperte qualquer número poder para desempatar\n\n");

							scanf("%d", &E);
							getchar();

								if (E >= 0 || E <= 0)
								{
									ppt2();
								}
					}

					if ((j1 == 2)&&(j2 == 3)&&(j3 == 3))
					{
						system ("clear");

						printf("\n	#######################\n");
						printf("	# PEDRA-PAPEL-TESOURA #\n");
						printf("	#######################\n\n");
						printf("Jogador 1 perdeu! Jogadores 2 e 3 empataram!\nAperte qualquer número poder para desempatar\n\n");

							scanf("%d", &E);

								if (E >= 0 || E <= 0)
								{
									ppt2();
								}
					}


 printf("Aperte enter para sair:\n"); 
 getchar();   
 return 0;
} 


/*****************************************************BEAUTY*********************************/
int beauty (){

	system("clear");

			usleep(100000);
			printf("(o-o)\n");
			usleep(100000);
			printf("	(o-o)\n");
			usleep(100000);
			printf("		(o-o)\n");
			usleep(100000);
			printf("			(o-o)\n");
			usleep(100000);
			printf("				(o-o)\n");
			usleep(100000);
			printf("					(o-o)\n");
			usleep(100000);
			printf("						(o-o)\n");
			usleep(100000);
			printf("							(o-o)\n");
			usleep(100000);
			printf("						(o-o)\n");
			usleep(100000);
			printf("					(o-o)\n");
			usleep(100000);
			printf("				(o-o)\n");
			usleep(100000);
			printf("			(o-o)\n");
			usleep(100000);
			printf("		(o-o)\n");
			usleep(100000);
			printf("	(o-o)\n");
			usleep(100000);
			printf("(o-o)\n");
			usleep(100000);
			printf("	(o-o)\n");
			usleep(100000);
			printf("		(o-o)\n");
			usleep(100000);
			printf("			(o-o)\n");
			usleep(100000);
			printf("				(o-o)\n");
			usleep(100000);
			printf("					(o-o)\n");
			usleep(100000);
			printf("						(o-o)\n");
			usleep(100000);
			printf("							(o-o)\n");
			usleep(100000);
			printf("						(o-o)\n");
			usleep(100000);
			printf("					(o-o)\n");
			usleep(100000);
			printf("				(o-o)\n");
			usleep(100000);
			printf("			(o-o)\n");
			usleep(100000);
			printf("		(o-o)\n");
			usleep(100000);
			printf("	(o-o)\n");
			usleep(100000);
			printf("(o-o)\n");
			usleep(100000);
			printf("	(o-o)\n");
			usleep(100000);
			printf("		(o-o)\n");
			usleep(100000);
			printf("			(o-o)\n");
			usleep(100000);
			printf("				(o-o)\n");
			usleep(100000);
			printf("					(o-o)\n");
			usleep(100000);
			printf("						(o-o)\n");
			usleep(100000);
			printf("							(o-o)\n");
			usleep(100000);
			printf("						(o-o)\n");
			usleep(100000);
			printf("					(o-o)\n");
			usleep(100000);
			printf("				(o-o)\n");
			usleep(100000);
			printf("			(o-o)\n");
			usleep(100000);
			printf("		(o-o)\n");
			usleep(100000);
			printf("	(o-o)\n");
			usleep(100000);
			printf("(o-o)\n");
			usleep(100000);
			printf("	(o-o)\n");
			usleep(100000);
			printf("		(o-o)\n");
			usleep(100000);
			printf("			(o-o)\n");
			usleep(100000);
			printf("				(o-o)\n");
			usleep(100000);
			printf("					(o-o)\n");
			usleep(100000);
			printf("						(o-o)\n");
			usleep(100000);
			printf("							(o-o)\n");
			usleep(100000);
			printf("						(o-o)\n");
			usleep(100000);
			printf("					(o-o)\n");
			usleep(100000);
			printf("				(o-o)\n");
			usleep(100000);
			printf("			(o-o)\n");
			usleep(100000);
			printf("		(o-o)\n");
			usleep(100000);
			printf("	(o-o)\n");
			usleep(100000);
			printf("(o-o)\n");

	system ("clear");
	
			printf("000000000000000000000000000000000000000000000000000000\n");
			printf("  00000000000000000000000000000000000000000000000000\n");
			printf("    0000000000000000000000000000000000000000000000\n");
			printf("      00000000000000000000000000000000000000000\n");
			printf("        0000000000000000000000000000000000000\n");
			printf("          000000000000000000000000000000000\n");
			printf("            00000000000000000000000000000\n");
			printf("              0000000000000000000000000\n");
			printf("                000000000000000000000\n");
			printf("                  00000000000000000\n");
			printf("                    0000000000000\n");
			printf("                      000000000\n");
			printf("                        00000\n");
			printf("                          0\n");

	sleep (1);
	system ("clear");
	usleep(500000);


return 0;
}

/***************************************oq**************************************/

int oq (){
system ("clear");
usleep(100000);
printf("     ?????????????\n");
usleep(100000);
printf("    ???         ???\n");
usleep(100000);
printf("   ???           ???\n");
usleep(100000);
printf("  ???             ???\n");
usleep(100000);
printf("   ??             ???\n");
usleep(100000);
printf("                 ???\n");
usleep(100000);
printf("                ???\n");
usleep(100000);
printf("               ???\n");
usleep(100000);
printf("              ???\n");
usleep(100000);
printf("             ???\n");
usleep(100000);
printf("            ???\n");
usleep(100000);
printf("            ???\n");
usleep(100000);
printf("            ???\n");
usleep(100000);
printf("            ???\n");
usleep(100000);
printf(" \n");
printf("            ???\n");
usleep(100000);
printf("            ???\n");
sleep (2);

return 0;
}




/****************************************MENU************************************/

	int main (){
		int jogo, j;
		j = 2;


		beauty();
		

	while (j > 1){

		system ("clear");

		printf("\n	@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
		printf("	@ ARROZ E PROGRAMAÇÃO DE COMPUTADORES @\n");
		printf("	@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
		printf("Menu:\n");
		printf("1) SENHAS\n");
		printf("2) CHARADAS\n");
		printf("3) PPT\n");
		printf("4) SAIR\n\n");
		printf("Escolha uma das opções:\n");

			scanf ("%d", &jogo);
			getchar ();

		switch (jogo){

		case 1: senha (); break;

		case 2: charadas (); break;

		case 3: ppt(); break;

		case 4: j=0;

		printf("\nJá vai embora?\nVolte sempre!\n\n");

		beauty();

		 break;
	}

	}
	return 0;
}
*/