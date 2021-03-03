#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*  Gestão Escolar 
	Diretor Francisco Vieira */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	system("color 05");
                    
printf("	8888b   888         888                   \n ");
printf("	88888b  888         888                    \n");
printf("	888Y88b 888 .d88b. 888888 8888b. .d8888b  \n");
printf("	888 Y88b888 d8 ""88  b8      88  88K     \n");      
printf("	888  Y88888 88  888  88   dd8888  8Y8888b.\n"); 
printf("	888   Y8888 Y88..88P Y8.  88  88     X888 \n");   
printf("	888    Y888  Y8 8 P  Y88  Y8 88888 88888P         \n"); 
       printf("\n");
	   system("pause");
	   system("cls");   
	   char aluno;(50);
	   char sexo;
	   int idade;             
       char disciplina; 
	   printf("cadastro do aluno \n\n");
	   printf("nome do aluno");
	   print("\n");
	   printf("sexo (F/M):");
	   scanf("%c",&sexo); 
	   printf("idade:");
       scanf("%d",&idade);
	
	   
	   system("pause");
	   system("cls");
	   
	   float nota1,nota2,nota3,nota4,media;
	printf("Digite a nota do 1 Bimestre: ");
	scanf("%f",&nota1);
	printf("Digite a nota do 2 Bimestre: ");
	scanf("%f",&nota2);
	printf("Digite a nota do 3 Bimestre: ");
	scanf("%f",&nota3);
	printf("Digite a nota do 4 Bimestre: ");
	scanf("%f",&nota4);
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("Média Anual: %.1f\n", media);
	system("pause");
	   	
	
	return 0;
}
