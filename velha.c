/*Universidade de Brasília - UnB
 *Kelson Teixeira
 *Engenharia Mecatrônia
 *Matr.: 16/0130085
 *Trab.: 
 *APC - Algoritmo e Programação de Computadores
 *Professor: Francisco de Assis Cartaxo Pinheiro
 */


#include <stdio.h>
#include <stdlib.h>  


int main (){
	int i, j, verify = 1;
	char a = 1;
	char velha [3][3];

	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			velha [i][j] = ' ';
		}
	}

	while (verify > 0){
		system ("clear");
		printf ("%2c |%2c |%2c\n", velha [0][0], velha [0][1], velha [0][2]);
		printf ("-----------\n");
		printf ("%2c |%2c |%2c\n", velha [1][0], velha [1][1], velha [1][2]);
		printf ("-----------\n");
		printf ("%2c |%2c |%2c\n\n", velha [2][0], velha [2][1], velha [2][2]);

		if (verify > 0){
			do{
				do{
					do{
						printf ("Escolha sua jogada jogador 1:\nLinha:");
						scanf ("%d", &i);
						i--;
						printf ("Coluna:");
						scanf ("%d", &j);
						j--;
						if(velha [i][j] != ' '){
							printf ("posição inválida, tente de novo!\n");
						}
					}while (velha [i][j] != ' ');
				}while((j < 0)||(j > 2));
			}while((i < 0)||(i > 2));
				velha [i][j] = 'x';
		}
		verify = 0;
		for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
				if (velha [i][j] == ' '){
					verify ++;
				}
			}
		}


		system ("clear");
		printf ("%2c |%2c |%2c\n", velha [0][0], velha [0][1], velha [0][2]);
		printf ("-----------\n");
		printf ("%2c |%2c |%2c\n", velha [1][0], velha [1][1], velha [1][2]);
		printf ("-----------\n");
		printf ("%2c |%2c |%2c\n\n", velha [2][0], velha [2][1], velha [2][2]);

		if (verify > 0){
			do{
				do{
					do{
						printf ("Escolha sua jogada jogador 2:\nLinha:");
						scanf ("%d", &i);
						i--;
						printf ("Coluna:");
						scanf ("%d", &j);
						j--;
						if(velha [i][j] != ' '){
							printf ("posição inválida, tente de novo!\n");
						}
					}while (velha [i][j] != ' ');
				}while((j < 0)||(j > 2));
			}while((i < 0)||(i > 2));
				velha [i][j] = 'o';
		}
		verify = 0;
		for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
				if (velha [i][j] == ' '){
					verify ++;
				}
			}
		}

	}
	return 0; 
}