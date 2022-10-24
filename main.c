#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 25

int main() {
  char Nomes[20]; // nome dependentes.
  int op;                                    // Variavel da operação.
  float n1, n2, n3, n4, contador, contador1, i;  // variaveis.
   

  // Primeira parte do painel
  printf("\n.__________________________________.");
  printf("\n|                                  |\n");
  printf("|   ★★ Painel de funcionário ★★    |\n");
  printf("|       ★ ACESS FOR ALL :) ★       |");
  printf("\n|__________________________________|");

  // Menu das opções.
  printf("\n.__________________________________.");
	printf("\n|                                  |");
  printf("\n| 1- Cadastro de dependentes.      |");
  printf("\n| 2- solicitações do plano médico  |");
  printf("\n| 3- solicitações de materiais.    |\n");
  printf("| 4- Em breve mais opções.         |\n");
	printf("|__________________________________|\n");
	printf("\n Por favor selecionar a opção ");
	scanf("%d", &op);
	printf("______________________________________________________\n");

  switch (op) {

  case 1:
	  printf("\n ♣ Opção Cadastros de dependentes selecionada ♣\n ");
 	for(i=0; i < 10; i++ ){
    printf("\n   Perfeito, Qual o nome desse dependente ? \n");
    scanf("%S", &Nomes[0]);
		
		}
	  case 2:
	  printf("");

	  case 3:
	  printf("");

	  case 4:
	  printf("Estamos desenvolvendo mais opções em breve teremos mais :)");
	  
	  
  }
  return 0;
}
