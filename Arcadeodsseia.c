
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include<conio.h>
#include<unistd.h>

int main()
{

setlocale(LC_ALL, "Portuguese");
int r, v, f, c, i, q;
float p;


void slowPrint(char*str, int delay){
	int i;
	
	for(i = 0; str[i] != '\0'; i++)
	{putchar(str[i]);
	fflush(stdout);
	usleep(delay*500);
	}
}


while(i){
printf("Coloque em tela cheia");
Sleep(3000);
system("cls");

printf(" \n");
printf(" \n");
printf("                                                                        /AAAA\\         |RRRRRRRR\\   |CCCCCCCCCCC|        /AAAA\\          |DDDDDDDDD\\    |EEEEEEEEE|                                     \n                               ");
printf("                                        /AAAAAA\\        |RRR| \\RRR\\  |CCCCCCCCCCC|       /AAAAAA\\         |DDD|  \\DDD\\   |EEEEEEEEE|                          \n                               ");
printf("                                       /AAA/\\AAA\\       |RRR|  |RRR| |CCC|              /AAA/\\AAA\\        |DDD|   |DDD|  |EEE|                           \n                               ");
printf("                                      /AAA/  \\AAA\\      |RRR| /RRR/  |CCC|             /AAA/  \\AAA\\       |DDD|   |DDD|  |EEEEEEE|                          \n                               ");
printf("                                     /AAAAAAAAAAAA\\     |RRRRRRR/    |CCC|            /AAAAAAAAAAAA\\      |DDD|   |DDD|  |EEEEEEE|                                  \n                               ");
printf("                                    /AAA/      \\AAA\\    |RRR|\\RRR\\   |CCC|           /AAA/      \\AAA\\     |DDD|   |DDD|  |EEE|                           \n                               ");
printf("                                   /AAA/        \\AAA\\   |RRR| \\RRR\\  |CCCCCCCCCCC|  /AAA/        \\AAA\\    |DDD|  /DDD/   |EEEEEEEEE|                            \n                               ");
printf("                                  /AAAA\\        /AAAA\\  |RRR|  \\RRR\\ |CCCCCCCCCCC| /AAAA\\        /AAAA\\   |DDDDDDDDD/    |EEEEEEEEE|                              \n                               ");
printf("                             -----------------------------------------------------------------------------------------------------------\n");
printf("                                                                                           U M A    O D I S S E I A    E L E T R O N I C A         \n ");
printf("                                                           -----------------------------------------------------------------------------------------------------------\n");
printf(" \n");
printf("                                                                                                        Selecione o jogo: \n");
printf(" \n");
printf("                                                                                                        (1)Cobra na caixa\n");
printf(" \n");
printf("                                                                                                        (2)Show do milhao\n");
printf(" \n");
printf("                                                                                                         (3)Gousmar War\n");
    printf(" \n");
printf("                                                                                                             (4)Sair");
printf(" \n");

int jogo;

scanf("%d", &jogo);

system("cls");

if(jogo==1){


	bool theBoxIsSnake(int box){
	
	if(box != 1){
	return false;
	}
	
	return true;
	}
	bool theButtonIsInTheBox(int box){
	
	if(box != 2){
	return false;
	}
	return true;
	}
	
	bool isThisBoxSelected(int box){
	
	if(box != 3){
	return false;
	}
	return true;
	}
	
	void genereteBoxes(int boxes[5]){
	   
	    for( i = 0; i < 5; i++){
	        boxes[i] = 0;
	    }
	   
	    int snakePosition = 0, buttonPosition = 0;
	        srand(time(NULL));
	    while (snakePosition == buttonPosition){
	        snakePosition = rand() % 5;
	        buttonPosition = rand() % 5;
	        boxes[snakePosition] = 1;
	        boxes[buttonPosition] = 2;
	    }
	   
	}
	
	
	
	char nomeJG1[100], nomeJG2[101];
	int roundPlayer, selectBox, boxes[5], selectedOption=0, selectedBoxes[3];
	
	bool theGameIsFinished = false;
	 printf("Bem vindo ao Cobra na Caixa!!\n");
	
	printf("digite o nickname do primeiro jogador: \n");
	fflush(stdin);
	gets(nomeJG1);
	
	printf("Agora o nickname do segundo jogador: \n");
	fflush(stdin);
	gets( nomeJG2);
	
	srand(time(NULL));
	
	roundPlayer = 1 + (rand() % 2); //escolhe 1 ou 2
	
	    genereteBoxes(boxes);
	
	
	while (i){ //theGameIsRunning
	
	
	
	if(roundPlayer == 1){
	printf("\nO jogador da rodada eh %s \n\n", nomeJG1);
	printf("Escolha a caixa que vai abrir\n\nCaixa 1\nCaixa 2 \nCaixa 3 \nCaixa 4 \nCaixa 5 \n");
	scanf("%d", &selectBox);
	
	if(selectBox > 5 || selectBox < 1){
		printf("Essa caixa não existe.\nEscolha outra porfavor");
		continue;
	}
	
	else if(theBoxIsSnake(boxes[selectBox-1]) ){
	printf("voce selecionou a caixa com a cobra, voce perdeu!\nDeseja comecar o jogo novamente?(1)\nou deseja ir pro menu?(2)");
	scanf("%d", &selectedOption);

		if (selectedOption == 1){
			system("cls");
		} else if( selectedOption == 2){
			system("cls");
			break; 
		}
	genereteBoxes(boxes);
	continue;
	}
	else if(theButtonIsInTheBox(boxes[selectBox-1])){
	printf("voce selecionou a caixa com o botão, você ganhou!!!\nDeseja começar o jogo novamente?(1)\n ou deseja ir pro menu?(2)");
	scanf("%d", &selectedOption);
		if (selectedOption == 1){
			system("cls");
		}
		else if( selectedOption == 2){
			system("cls");
			break;
		}
	genereteBoxes(boxes);
	continue;
	}else if( isThisBoxSelected(boxes[selectBox - 1])){
	   printf("Essa caixa ja foi selecionada. Escolha outra por favor");
	    continue;
	}
	
	printf("A caixa que voce escolheu esta vazia.");
	   boxes[selectBox - 1] = 3;
	   
	   roundPlayer = 2;
	
	
	}else{ printf("\nO jogador da rodada eh %s \n\n", nomeJG2);
	printf("Escolha a caixa que vai abrir\n\nCaixa 1\nCaixa 2 \nCaixa 3 \nCaixa 4 \nCaixa 5 \n");
	scanf("%d", &selectBox);
	
	if(selectBox > 5 || selectBox < 1){
		printf("Essa caixa não existe.\nEscolha outra porfavor");
		continue;
	}
	
	if(theBoxIsSnake(boxes[selectBox-1]) ){
	printf("voce selecionou a caixa com a cobra, voce perdeu!\nDeseja comecar o jogo novamente?(1)\nou deseja ir pro menu?(2)");
	scanf("%d", &selectedOption);
		if (selectedOption == 1){
			system("cls");
		}
		else if( selectedOption == 2){
			system("cls");
			break; 
		}
	continue;
	}
	else if(theButtonIsInTheBox(boxes[selectBox-1])){
	printf("voce selecionou a caixa com o botao, voce ganhou!!!\nDeseja comecar o jogo novamente?(1)\nou deseja ir pro menu?(2)");
	scanf("%d", &selectedOption);
		if (selectedOption == 1){
			system("cls");
		}
		else if( selectedOption == 2){
			system("cls");
			break;
		}
	genereteBoxes(boxes);
	continue;
	}
	else if( isThisBoxSelected(boxes[selectBox - 1])){
	   printf("Essa caixa ja foi selecionada. Escolha outra por favor \n");
	   continue;
	}
	
	    printf("A caixa que voce escolheu esta vazia.\n");
	    boxes[selectBox - 1] = 3;
	    roundPlayer = 1;
	}

	}
	
	
	}
	

else if(jogo == 2){



while(jogo == 2){


printf("perguntas e respostas \n");
printf("vamos começar? pressione Enter \n");
getchar();
system("cls");



 

printf("pergunta na tela:  \n" );
printf("Qual o nome dado ao estado da água em forma de gelo?  \n");
printf("(1) líquido (2) solido  \n");
printf("(3) gasoso (4) vaporoso  \n");

scanf("%d",& r);

system("cls");

if(r == 2){
p = 0 + 10;
printf("sua resposta está... correta! você ganhou R$ %0.2f \n", p);
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");

}else{
p = 0 + 0;
printf("sua resposta está incorreta, a resposta certa é a numero 2, 'solido', você ganhou R$ %0.2f. \n");
printf("deseja recomeçar? (1), deseja parar? (2)");
scanf("%d",&v);
if(v == 1){
	continue;
}
else{
	system("cls");
	break;
}
} system("cls");




// corte seco

printf("pergunta na tela:  \n" );
printf("Quem é a namorada do Mickey?  \n");
printf("(1) Margarida (2) Ariel  \n");
printf("(3) Minnie    (4) Olivia Palito  \n");

scanf("%d",& r);

system("cls");

if(r == 3){
p = p + 10;
printf("sua resposta está... correta! você ganhou R$ %0.2f \n", p);
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");

}else{
p = p + 0;
printf("sua resposta está incorreta, a resposta certa é a numero 3, 'Minnie', você ganhou R$ %0.2f. \n");
printf("deseja recomeçar? (1), deseja parar? (2)");
scanf("%d",&v);
if(v == 1){
	continue;
}
else{
	system("cls");
	break;
}

} system("cls");


//corte seco



printf("pergunta na tela:  \n" );
printf(" Qual é o personagem do folclore brasileiro que tem uma perna só?  \n");
printf("(1) Cuca     (2) Boitatá  \n");
printf("(3) Curupira (4) Saci-pererê  \n");

scanf("%d",& r);

system("cls");

if(r == 4){
p = p + 30;
printf("sua resposta está... correta! você ganhou R$ %0.2f \n", p);
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");

}else{
p = p + 0;
printf("sua resposta está incorreta, a resposta certa é a numero 4, 'Saci-pererê', você ganhou R$ %0.2f. \n");
printf("deseja recomeçar? (1), deseja parar? (2)");
scanf("%d",&v);
if(v == 1){
	continue;
}
else{
	system("cls");
	break;
}

} system("cls");


// corte seco


printf("pergunta na tela:  \n" );
printf(" Fidel Castro nasceu em que país? \n");
printf("(1) Cuba     (2) Brasil  \n");
printf("(3) Venezuela (4) holanda  \n");

scanf("%d",& r);

system("cls");

if(r == 1){
p = p + 50;
printf("sua resposta está... correta! você ganhou R$ %0.2f \n", p);
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");

}else{
p = p + 0;
printf("sua resposta está incorreta, a resposta certa é a numero 1, 'Cuba', você ganhou R$ %0.2f. \n");
printf("deseja recomeçar? (1), deseja parar? (2)");
scanf("%d",&v);
if(v == 1){
	continue;
}
else{
	system("cls");
	break;
}

} system("cls");


// corte seco


printf("pergunta na tela:  \n" );
printf(" como enxergamos o mundo a nossa volta? \n");
printf("(1) reflexão difusa     (2) reflexão pontual  \n");
printf("(3) reflexão plana      (4) reflexão concava  \n");

scanf("%d",& r);

system("cls");

if(r == 1){
p = p + 50;
printf("sua resposta está... correta! você ganhou R$ %0.2f \n", p);
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");

}else{
p = p + 0;
printf("sua resposta está incorreta, a resposta certa é a numero 1, 'Reflexão Difusa', você ganhou R$ %0.2f. \n");
printf("deseja recomeçar? (1), deseja parar? (2)");
scanf("%d",&v);
if(v == 1){
	continue;
}
else{
	system("cls");
	break;
}

} system("cls");


// corte seco


printf("pergunta na tela:  \n" );
printf(" o som é um tipo de onda? \n");
printf("(1) elétromagnetica (2) inercial  \n");
printf("(3) solar           (4) mecânica  \n");

scanf("%d",& r);

system("cls");

if(r == 4){
p = p + 50;
printf("sua resposta está... correta! você ganhou R$ %0.2f \n", p);
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");

}else{
p = p + 0;
printf("sua resposta está incorreta, a resposta certa é a numero 4, 'Mecânica', você ganhou R$ %0.2f. \n");
printf("deseja recomeçar? (1), deseja parar? (2)");
scanf("%d",&v);
if(v == 1){
	continue;
}
else{
	system("cls");
	break;
}

} system("cls");


// corte seco

printf("pergunta na tela:  \n" );
printf(" Qual a solução (Sqrt(4))^2 \n");
printf("(1) 2 (2) 16  \n");
printf("(3) 8 (4) 4  \n");

scanf("%d",& r);

system("cls");

if(r == 4){
p = p + 50;
printf("sua resposta está... correta! você ganhou R$ %0.2f \n", p);
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");

}else{
p = p + 0;
printf("sua resposta está incorreta, a resposta certa é a numero 4, '4', você ganhou R$ %0.2f. \n");
printf("deseja recomeçar? (1), deseja parar? (2)");
scanf("%d",&v);
if(v == 1){
	continue;
}
else{
	system("cls");
	break;
}

} system("cls");


// corte seco



printf("pergunta na tela:  \n" );
printf(" Quanto tempo aproximadamente a luz do sol leva para chegar até a terra \n");
printf("(1) 7 Minutos (2) 9 Minutos  \n");
printf("(3) 8 Minutos (4) 10 Minutos  \n");

scanf("%d",& r);

system("cls");

if(r == 3){
p = p + 50;
printf("sua resposta está... correta! você ganhou R$ %0.2f \n", p);
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");

}else{
p = p + 0;
printf("sua resposta está incorreta, a resposta certa é a numero 3, '8 minutos', você ganhou R$ %0.2f. \n");
printf("deseja recomeçar? (1), deseja parar? (2)");


scanf("%d",&v);

if(v == 1){
	continue;
}
else{
	system("cls");
	break;
}

} system("cls");


// corte seco


printf("pergunta na tela:  \n" );
printf(" Qual cantor é o pai da dupla Sandy e Júnior? \n");
printf("(1) Leonardo (2) Xororó  \n");
printf("(3) Zezé di Camargo (4) Chitãozinho  \n");

scanf("%d",& r);

system("cls");

if(r == 2){
p = p + 100;
printf("sua resposta está... correta! você ganhou R$ %0.2f \n", p);
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");

}else{
p = p + 0;
printf("sua resposta está incorreta, a resposta certa é a numero 2, 'Xororó', você ganhou R$ %0.2f. \n");
printf("deseja recomeçar? (1), deseja parar? (2)");
scanf("%d",&v);
if(v == 1){
	continue;
}
else{
	break;
	system("cls");
}

}printf("parabéns você ganhou o premio maxímo de %o.2f.\n(1)Jogar Novamente\n(2)Ir para o menu");
scanf("%d", &v);
if(v == 1){
	continue;
}
else{
	system("cls");
	break;
}
 system("cls");

}

// corte secobreak;

}else if(jogo==3){
void clearKeyboardBuffer(void) {
  while (getchar() != '\n');
}

  printf("Bem vindo ao Gousmar War!\n");
  char jgr1[100], jgr2[100];

  printf("digite o nome do jogador 1:");
  fflush(stdin);
  gets(jgr1);

  printf("digite o nome do jogador 2:");
  fflush(stdin);
  gets(jgr2);

  int jogo = 3, i;

  system("cls");
  int roundPlayer, escolha, furias[4] = {1,1,1,1};
  while (jogo == 3) {
    srand(time(NULL));
    roundPlayer = 1 + (rand() % 2);
    for (i = 0; i < 4; i++) {
      furias[i] = 1;
    }

    while ((furias[0] != 5 && furias[1] != 0) || (furias[2] != 0 && furias[3] != 0)) {

      if (roundPlayer == 1) {
        clearKeyboardBuffer();
        printf("Pressione ENTER para continuar...");
        getchar();
        system("cls");
        printf("jogador da rodada eh %s\n", jgr1);
        printf("(1)atacar \n(2)dividir\n");
        scanf("%d", & escolha);

        if (escolha == 2) {

          if ((furias[0] != 0 && furias[1] != 0) || (furias[0] == 1 || furias[1] == 1)) {
            printf("Voce não pode dividir! Você tem duas Gousmar.");
            continue;
          } else if (furias[0] <= 5 && furias[1] == 0) {
            furias[0] = furias[0] - 1;
            furias[1] = 1;

            printf(" gousmar 1 e 2 tem %d e %d de fúria agora.", furias[0], furias[1]);
            roundPlayer = 2;
            continue;

          } else if (furias[0] == 0 && furias[1] <= 5) {
            furias[1] = furias[1] - 1;
            furias[0] = 1;
            printf(" gousmars 1 e 2 tem %d e %d de fúria agora.", furias[0], furias[1]);
            roundPlayer = 2;
            continue;
          }
          //PLayer1
        } else if (escolha == 1) {
          
          printf("escolha qual gousmar vai atacar\n (1) gousmar 1 de %s(%d de fúria)\n (2) gousmar 2 de %s(%d de fúria)\n", jgr2, furias[2], jgr2, furias[3]);
          scanf("%d", & escolha);
          if (escolha == 1) {
            printf("qual de suas gosmars voce deseja que ataque?\n gousmar1 (1)(%d de fúria)\n gousmar2 (2)(%d de fúria)\n", furias[0], furias[1]);
            scanf("%d", & escolha);
            if (escolha == 1) {
              if (furias[2] == 0 || furias[0] == 0) {
                printf("Esta gousmar esta com nenhuma fúria. NÃO PODE ATACAR OU SER ATACADA");
                continue;
              }

              furias[2] = furias[0] + furias[2];
              furias[0] = 1;
            printf("                        %s          vs       %s                                            \n", jgr1, jgr2);  
            printf("                        ________________________________                                                   \n ");  
			printf("                      |                                |             \n");
			printf("                       |  gousmar  1       gousmar 1    |               \n");
			printf("                       |  %d de fúria      %d de fúria    |                    \n", furias[0], furias[2]);
			printf("                       |  gousmar  2       gousmar 2    |                  \n");
			printf("                       |  %d de fúria      %d de fúria    |                 \n", furias[1], furias[3]);	
            printf("                       |________________________________|\n");
              roundPlayer = 2;
              if (furias[2] > 5) {
                furias[2] = 0;
              }
              if (furias[2] == 0 && furias[3] == 0) {
                printf("o %s ganhou!!!\n", jgr1);
                printf("voce quer jogar novamente? (1)sim (2)nao\n");
                scanf("%d", & escolha);
                jogo = (escolha == 1) ? 3 : 0;
                break;
              }

            } else if (escolha == 2) {
              if (furias[2] == 0 || furias[1] == 0) {
                printf("Esta gousmar esta com nenhuma furia. NÃO PODE ATACAR OU SER ATACADA");
                continue;
              }

              furias[2] = furias[1] + furias[2];
              furias[1] = 1;
            printf("                        %s          vs       %s                                            \n", jgr1, jgr2);  
            printf("                        ________________________________                                                   \n ");  
			printf("                      |                                |             \n");
			printf("                       |  gousmar  1       gousmar 1    |               \n");
			printf("                       |  %d de fúria      %d de fúria    |                    \n", furias[0], furias[2]);
			printf("                       |  gousmar  2       gousmar 2    |                  \n");
			printf("                       |  %d de fúria      %d de fúria    |                 \n", furias[1], furias[3]);	
			printf("                       |________________________________|\n");
              roundPlayer = 2;
              if (furias[2] > 5) {
                furias[2] = 0;
              }
              if (furias[2] == 0 && furias[3] == 0) {
                printf("o %s ganhou!!!", jgr1);
                printf("voce quer jogar novamente? (1)sim (2)não\n");
                scanf("%d", & escolha);
                jogo = (escolha == 1) ? 3 : 0;
                break;
              }
            }
          } else if (escolha == 2) {
            printf("qual de suas gosmars você deseja que ataque?\n gousmar1 (1)(%d de fúria)\n gousmar2 (2)(%d de fúria)\n\n", furias[0], furias[1]);
            scanf("%d", & escolha);
            if (escolha == 1) {
              if (furias[3] == 0 || furias[0] == 0) {
                printf("Esta gousmar esta com nenhuma fúria. NÃO PODE ATACAR OU SER ATACADA");
                continue;
              }

              furias[3] = furias[0] + furias[3];
              furias[0] = 1;
        	printf("                        %s          vs       %s                                            \n", jgr1, jgr2);  
            printf("                        ________________________________                                                   \n ");  
			printf("                      |                                |             \n");
			printf("                       |  gousmar  1       gousmar 1    |               \n");
			printf("                       |  %d de fúria      %d de fúria    |                    \n", furias[0], furias[2]);
			printf("                       |  gousmar  2       gousmar 2    |                  \n");
			printf("                       |  %d de fúria      %d de fúria    |                 \n", furias[1], furias[3]);	
			printf("                       |________________________________|\n");
              roundPlayer = 2;
              if (furias[3] > 5) {
                furias[3] = 0;
              }
              if (furias[2] == 0 && furias[3] == 0) {
                printf("o %s ganhou!!!", jgr1);
                printf("voce quer jogar novamente? (1)sim (2)nao\n");
                scanf("%d", & escolha);
                jogo = (escolha == 1) ? 3 : 0;
                break;
              }

            } else if (escolha == 2) {
              if (furias[3] == 0 || furias[1] == 0) {
                printf("Esta gousmar esta com nenhuma fúria. NÃO PODE ATACAR OU SER ATACADA");
                continue;
              }

              furias[3] = furias[1] + furias[3];
              furias[1] = 1;
                          printf("                        %s          vs       %s                                            \n", jgr1, jgr2);  
            printf("                        ________________________________                                                   \n ");  
			printf("                      |                                |             \n");
			printf("                       |  gousmar  1       gousmar 1    |               \n");
			printf("                       |  %d de fúria      %d de fúria    |                    \n", furias[0], furias[2]);
			printf("                       |  gousmar  2       gousmar 2    |                  \n");
			printf("                       |  %d de fúria      %d de fúria    |                 \n", furias[1], furias[3]);	
			printf("                       |________________________________|\n");
              roundPlayer = 2;
              if (furias[3] > 5) {
                furias[3] = 0;
              }
              if (furias[2] == 0 && furias[3] == 0) {
                printf("o %s ganhou!!!", jgr1);
                printf("voce quer jogar novamente? (1)sim (2)nao\n");
                scanf("%d", & escolha);
                jogo = (escolha == 1) ? 3 : 0;
                break;
              }

            }

          }
        }
        //Segundo Jogador
      } else {
        clearKeyboardBuffer();
        printf("Pressione ENTER para continuar...");
        getchar();
        system("cls");
        printf("o jogador da rodada eh %s\n", jgr2);
        printf("(1)atacar \n(2)dividir\n");
        scanf("%d", & escolha);

        if (escolha == 2) {

          if ((furias[2] != 0 && furias[3] != 0) || (furias[2] == 1 || furias[3] == 1)) {
            printf("voce não pode dividir. Você tem duas Gousmar!");
            continue;
          } else if (furias[2] <= 5 && furias[3] == 0) {
            furias[2] = furias[2] - 1;
            furias[3] = 1;

            printf(" gousmar 1 e 2 tem %d e %d de fúria agora.", furias[2], furias[3]);
            roundPlayer = 1;
            continue;

          } else if (furias[2] == 0 && furias[3] <= 5) {
            furias[3] = furias[3] - 1;
            furias[2] = 1;
            printf(" gousmars 1 e 2 tem %d e %d de fúria agora.", furias[2], furias[3]);
            roundPlayer = 1;
            continue;

          }

        } else if (escolha == 1) {
          printf("escolha qual gousmar vai atacar\n (1) gousmar 1 de %s(%d de furia)\n (2) gousmar 2 de %s(%d de fúria)\n", jgr1, furias[0], jgr1, furias[1]);
          scanf("%d", & escolha);
          if (escolha == 1) {
            printf("qual de suas gosmars você deseja que ataque?\n gousmar1 (1)(%d de fúria)\n gousmar2 (2)(%d de fúria)\n", furias[2], furias[3]);
            scanf("%d", & escolha);
            if (escolha == 1) {
              if (furias[2] == 0 || furias[0] == 0) {
                printf("Esta gousmar esta com nenhuma fúria. NÃO PODE ATACAR OU SER ATACADA");
                continue;
              }

              furias[0] = furias[2] + furias[0];
              furias[2] = 1;
            printf("                        %s          vs       %s                                            \n", jgr1, jgr2);  
            printf("                        ________________________________                                                   \n ");  
			printf("                      |                                |             \n");
			printf("                       |  gousmar  1       gousmar 1    |               \n");
			printf("                       |  %d de fúria      %d de fúria    |                    \n", furias[0], furias[2]);
			printf("                       |  gousmar  2       gousmar 2    |                  \n");
			printf("                       |  %d de fúria      %d de fúria    |                 \n", furias[1], furias[3]);
			printf("                       |________________________________|\n");	
              roundPlayer = 1;

              if (furias[0] > 5) {
                furias[0] = 0;
              }
              if (furias[0] == 0 && furias[1] == 0) {
                printf("o %s ganhou!!!", jgr2);
                break;
              }

            } else if (escolha == 2) { //aaaaaaaaa
              if (furias[3] == 0 || furias[0] == 0) {
                printf("Esta gousmar esta com nenhuma fúria. NÃO PODE ATACAR OU SER ATACADA");
                continue;
              }
              furias[0] = furias[0] + furias[3];
              furias[3] = 1;
            printf("                        %s          vs       %s                                            \n", jgr1, jgr2);  
            printf("                        ________________________________                                                   \n ");  
			printf("                      |                                |             \n");
			printf("                       |  gousmar  1       gousmar 1    |               \n");
			printf("                       |  %d de fúria      %d de fúria    |                    \n", furias[0], furias[2]);
			printf("                       |  gousmar  2       gousmar 2    |                  \n");
			printf("                       |  %d de fúria      %d de fúria    |                 \n", furias[1], furias[3]);	
			printf("                       |________________________________|\n");
              roundPlayer = 1;
              if (furias[0] > 5) {
                furias[0] = 0;
              }
              if (furias[0] == 0 && furias[1] == 0) {
                printf("o %s ganhou!!!", jgr2);
                printf("voce quer jogar novamente? (1)sim (2)nâo\n");
                scanf("%d", & escolha);
                jogo = (escolha == 1) ? 3 : 0;
                break;
              }
            }
          } else if (escolha == 2) {
            printf("qual de suas gosmars voce deseja que ataque?\n gousmar1 (1)(%d de fúria)\n gousmar2 (2)(%d de fúria)\n", furias[2], furias[3]);
            scanf("%d", & escolha);
            if (escolha == 1) {

              if (furias[2] == 0 || furias[1] == 0) {
                printf("Esta gousmar esta com nenhuma furia. NÃO PODE ATACAR OU SER ATACADA\n");
                continue;
              }

              furias[1] = furias[1] + furias[2];
              furias[2] = 1;
            printf("                        %s          vs       %s                                            \n", jgr1, jgr2);  
            printf("                        ________________________________                                                   \n ");  
			printf("                      |                                |             \n");
			printf("                       |  gousmar  1       gousmar 1    |               \n");
			printf("                       |  %d de fúria      %d de fúria    |                    \n", furias[0], furias[2]);
			printf("                       |  gousmar  2       gousmar 2    |                  \n");
			printf("                       |  %d de fúria      %d de fúria    |                 \n", furias[1], furias[3]);
			printf("                       |________________________________|\n");	
              roundPlayer = 1;

              if (furias[1] > 5) {
                furias[1] = 0;
              }

              if (furias[0] == 0 && furias[1] == 0) {
                printf("o %s ganhou!!!", jgr2);
                printf("voce quer jogar novamente? (1)sim (2)nao\n");
                scanf("%d", & escolha);
                jogo = (escolha == 1) ? 3 : 0;
                break;
              }

            } else if (escolha == 2) {
              if (furias[3] == 0 || furias[1] == 0) {
                printf("Esta gousmar esta com nenhuma furia. NÃO PODE ATACAR OU SER ATACADA\n");
                continue;
              }

              furias[1] = furias[3] + furias[1];
              furias[3] = 1;
            printf("                        %s          vs       %s                                            \n", jgr1, jgr2);  
            printf("                        ________________________________                                                   \n ");  
			printf("                      |                                |             \n");
			printf("                       |  gousmar  1       gousmar 1    |               \n");
			printf("                       |  %d de fúria      %d de fúria    |                    \n", furias[0], furias[2]);
			printf("                       |  gousmar  2       gousmar 2    |                  \n");
			printf("                       |  %d de fúria      %d de fúria    |                 \n", furias[1], furias[3]);	
			printf("                       |________________________________|\n");
              roundPlayer = 1;

              if (furias[1] > 5) {
                furias[1] = 0;
              }

              if (furias[0] == 0 && furias[1] == 0) {
                printf("o %s ganhou!!!", jgr2);
                printf("voce quer jogar novamente? (1)sim (2)nao\n");
                scanf("%d", & escolha);
                jogo = (escolha == 1) ? 3 : 0;
                break;
              }

            }

          }
        }
        }
      }

    }
  }

	

if(jogo==4){
printf("                                                                                                       Obrigado por jogar!\n");
break;
}
}
return 0;
}

