#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 
	Fundanmentos da Linguagem c
	@author Francisco Vieira 
*/

int main(int argc, char *argv[]) {
	//linha abaixo configura idioma para português
	setlocale(LC_ALL, "portuguese");
	system("color 4");
	printf("Olá mundo\n");
	printf("olá Francisco\n");
	system("pause");
	//a linha abaixo limpa o prompt de comando
	system ("cls");
	//a linha abaixo modifica o background
	system("color 0A");
	printf ("códico de cores\n\n");
	printf("0 - preto\n");
	printf("1 - azul\n");
	printf("2 - verde\n");
	printf("3 - verde água\n");
	printf("4 - vermelho\n");
	printf("5 - roxo\n");
	printf("6 - amarelo\n");
	printf("7 - branco\n");
	printf("8 - cinza\n");
	printf("9 - azul claro\n");
	printf("A - verde claro\n");
	printf("B - verde água claro\n");
	printf("C - vermelho claro\n");
	printf("D - lilás\n");
	printf("E - amarelo claro\n");
	printf("F - branco brilhante\n");
	system("pause");
	;
	return 0;
}
