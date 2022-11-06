#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char Nomes[40];                               // nome dependentes.
  int cont;                                     // break das entre respostas
  int op;                                       // Variavel da operação.
  float n1, n2, n3, n4, contador, contador1, i; // variaveis.
  int idaded[40];                               // Idade dos dependentes.
  char parente[40];								// Grau de parentesco.
  char materiais[40];							// Materiais de solicitação.
  int quantm[40];								//QUANTIDADE DOS MATERIAIS.

	
	
	// Primeira parte do painel

  printf("\n.__________________________________.");
  printf("\n|                                  |\n");
  printf("|   ★★ Painel do funcionário ★★    |\n");
  printf("|        ★ ACCESS FOR ALL ★        |");
  printf("\n|__________________________________|");

  // Menu das opções.
  printf("\n.__________________________________.");
  printf("\n|                                  |");
  printf("\n| 1- Cadastro de dependentes.      |");
  printf("\n| 2- solicitações do plano médico  |");
  printf("\n| 3- solicitações de materiais.    |\n");
  printf("| 4- Sair                          |\n");
  printf("|__________________________________|\n");
  printf("\n Selecione uma opção: ");
  scanf("%d", &op);
  printf("\n✎ _________________________________________________\n ");

  switch (op) {

  case 1:

    do {
	printf("\n ► Opção Cadastros de dependentes selecionada ◄\n ");
	printf("\n   Perfeito, Qual o nome do seu dependente ? \n");
	printf("   Digite o Nome: ");
	scanf("%S", &Nomes[0]);
	printf("   Qual a Idade: ");
	scanf("%d", &idaded);
	printf("   Grau de parentesco: ");
	scanf("%S",&parente);
	printf("   Perfeito %S %S foi cadastrado(a) com sucesso √√√ \n", &parente[0], &Nomes[0]);
	

      printf("\n____________________________________________________________\n");
      printf("\n  Para continuar digite 1 ou para sair digite 2 \n");
		printf("  Opção: ");
      scanf("%d", &cont);
		
      printf("\n____________________________________________________________\n");
    } while (cont == 1);

  case 2:

	  // Interligar com o banco de dados
	  // Aguardando banco de dados da Julia.

  case 3:
	  do {
		  
	  	printf(" \n  Solicitação de materiais de escritório\n ");
	  	printf(" Digite qual você material você precisa: ");
	  	scanf("%S", &materiais);
		printf("  Qual a quantidade você precisa ? ");
		scanf("%d", &quantm);
		printf("  Sua solicitação foi registrada com sucesso √√√");
		printf("\n____________________________________________________________\n");
		printf("\n  Digite 1 para solicitar mais materiais ou para sair digite 2 \n");
		printf("  Opção: ");
		scanf("%d", &cont);
		printf("\n____________________________________________________________\n");

		  } while (cont == 1);

  case 4:
	  printf("\n► Opção de sair selecionada ◄ \n");
    printf("\n Muito obrigado por utilizar nosso sistema.\n");
	  printf(" Para reportar erros no sistema  \n entre em contato com ► 0800 2018 9587 ◄. \n");
	  printf("\n___________________________________________________________\n");
	  break;
	
    //main();
	  
	  
	  
	default:
		
	printf("\n\n Desculpe não indentifiquei uma opção valida.");
    	printf("\n Que tal tentar de novo ? \n");
		printf("\n____________________________________________________________\n"); 
		printf("\n\n\n");
		printf("");


	return main();
	break;

    
  }
}
