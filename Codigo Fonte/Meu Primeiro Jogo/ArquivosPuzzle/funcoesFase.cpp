#include "../rotasPuzzle.h"

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iostream>

using namespace std;
int menu();

//Funcoes
int PazzleFase12();

//var global
int i;
int PersNovo1;
int decisoesGlobal; // variavel para decisoes basicas.
int escolhaGlobal; // variavel para escolhas basicas.
char escolhaGlobalChar[20]; //variavel para string de escolhas.
bool WiGlobal = true;


int FotoVer = 0;
int PapiroVer = 0;
int Papiro2Ver = 0;

bool RunPuzzleG1; //variaveis para sistema de repetição basica das fases. Começando pela fase 3.
bool RunPuzzleG2; //variaveis para sistema de repetição basica das fases. Começando pela fase 3.
bool RunPuzzleG3 = true; //variaveis para sistema de repetição basica das fases. Começando pela fase 3.
//Modo Puzzle
//FASE 1 Puzzle 1/2
FILE *RegistroFF;
int T = 10000; // Variavel para tempo do texto da historia - Apenas para desenvolvimento.
bool run = true;

char nomeLoginComCaminhoAFF[30];
char nomeAFF[20];
char senhaAFF[30];
char faseAtualAFF[20];
char QuizAtualAFF[20];

//var de fase
int faseAtual2 = 1;

void PassaVar(char nomeLoginComCaminho[30], char PersN[6], char nome[20], char senha[30], char faseAtual[6], char QuizAtual[6]){ //Passa os valores da varivel nome..... pora outra variavel global




    strcpy(nomeLoginComCaminhoAFF, nomeLoginComCaminho);
    strcpy(nomeAFF, nome);
    strcpy(senhaAFF, senha);
    strcpy(faseAtualAFF, faseAtual);
    strcpy(QuizAtualAFF, QuizAtual);





    if (strcmp(PersN, "1") == 0){
        PersNovo1 = 1;
    }
    if (strcasecmp(PersN, "0") == 0){
        PersNovo1 = 0;
    }else if(strcasecmp(PersN, "2") == 0){
        PersNovo1 = 2;

    }

strcat(nomeLoginComCaminhoAFF, "");
}

int FimDeJogo(){
system("cls");
        for(i = 0; i <= 5; i++){
            Sleep(1001);
            printf("\n\t\t *A câmara foi inundada de água, e todos os personagens principais morreram – Fim de Jogo*");
        }

//Atualiza no registro a fase em que está.
char faseAtualAFF[6] = {"1"};
bool PersNovo1 = 2;
RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
if(fopen(nomeLoginComCaminhoAFF, "r+") == NULL){printf("\nNao foi possivel salvar! Arquivo nao encontrado...");system("pause");}
else{printf("\nSalvo com sucesso!");}
fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
fclose(RegistroFF);
Sleep(1001);

faseAtual2 = 1;
PassaVar2(faseAtual2);
//---------------------------------------
system("pause");
menu();
}


int PazzleFase1() // puzle 1
{
setlocale(LC_ALL, "Portugues");

//Atualiza no registro a fase em que está.
char faseAtualAFF[6] = {"1"};
bool PersNovo1 = 2;
RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
if(fopen(nomeLoginComCaminhoAFF, "r+") == NULL){printf("\nNao foi possivel salvar! Arquivo nao encontrado...");system("pause");}
else{printf("\nSalvo com sucesso!");}
fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
fclose(RegistroFF);
Sleep(1001);

//---------------------------------------

bool RunningRP1 = true;
char RP1 [20];
char recRP1[20] = "->";
int resultRecPR1;

                while(RunningRP1)
                    {
                    system("cls");
                    HistoriaFase1Part3();
                    printf("\n                    Escreva o conectivo certo, caso erre não acontecerá nada.");
                    printf("\n                         seu Conectivo: ");
                    scanf("%s", RP1);
                    resultRecPR1 = strcasecmp(RP1, recRP1);
                        if (resultRecPR1 == 0)
                        {
                        printf("\n                    hmm...");


                        //Atualiza no registro a fase em que está.
                        char faseAtualAFF[6] = {"2"};
                        RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
                        if(fopen(nomeLoginComCaminhoAFF, "r+") == NULL){printf("\nNao foi possivel salvar! Arquivo nao encontrado...");system("pause");}
                        else{printf("\nSalvo com sucesso!");}
                        fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
                        fclose(RegistroFF);
                        Sleep(1001);
                        //---------------------------------------

                        faseAtual2 = 2;
                        PassaVar2(faseAtual2);

                        RunningRP1 = false;

                        return 0;
                        }
                        if (resultRecPR1 != 0)
                        {
                        printf("\n                      Essa? ... Essa nao funcionou, tenta outra...");
                        Sleep(2000);
                        }
                    }
                    Sleep(1000);
                    PazzleFase12();

return 0;
}

int PazzleFase12() // puzle 2
{
setlocale(LC_ALL, "Portugues");
int HistoriaFase12Part1();
bool RunningRP12 = true;
char RP12 [20];
char recRP12[20] = "V";
int resultRecPR12;

        system("cls");
        Sleep(1000);
        HistoriaFase12Part1();
        Sleep(T);

            while (RunningRP12)
            {
            system("cls");
            HistoriaFase12Part1();
            printf("\n                    Escreva a resposta certa, caso erre não acontecerá nada.");
            printf("\n                         sua resposta: ");
            scanf("%s", RP12);
            resultRecPR12 = strcasecmp(RP12, recRP12);
                if (resultRecPR12 == 0)
                {
                printf("\n                    Bom, é esse...\n\n");

                    //Atualiza no registro a fase em que está.
                    char faseAtualAFF[6] = {"3"};
                    RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
                    if(fopen(nomeLoginComCaminhoAFF, "r+") == NULL){printf("\nNao foi possivel salvar! Arquivo nao encontrado...");system("pause");}
                    else{printf("\nSalvo com sucesso!");}
                    fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
                    fclose(RegistroFF);
                    Sleep(1001);

                    faseAtual2 = 3;
                    PassaVar2(faseAtual2);
                    //---------------------------------------


                RunningRP12 = false;
                return 0;
                }
                if (resultRecPR12 != 0)
                {
                printf("\n                      Hmm... Não me parece certo.");
                Sleep(2000);
                }
            }




    return 0;
}
//Decisao de matar ou salvar membro.
//fase 2 puzzle 1
int DecR1;
int PuzzleFase2p1(){ // puzlle 3
setlocale(LC_ALL, "Portuguese");


//var
bool RunF2Pu1 = true;

//iniciando a fase 2 puzzle 1
    for (i = 0; i < 1;){
    system("cls");
    printf("                                                                                                   ...Fase 2...");
    printf("\n      Olha, tem um declínio estranho na parede, parece um botão, e olha essa pintura, parece Anúbis. \n      Pessoal Anúbis é o deus do submundo, devemos apertar? – Disse Ana. ");
    printf("\n\n       Ação do jogador [1- Sim] [n2- Nao]\n");
    int decF2P1;
    scanf("%d", &decF2P1);
    Sleep(1001);
    switch(decF2P1){
    case 1:
        printf("[esolha 1]\n");//Matou um personagem

            //Add informação dentro de arquivo
            PersNovo1 = false;
            //escrever o registro todo
            RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
            fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
            fclose(RegistroFF);

            //----------------------------------------------

        Sleep(2001);
        system("cls");
        Decisao1TextRenderFase2Puzzle1();
        Sleep(5001);
        system("pause");
        i = 1;
        int matarmembro();
        matarmembro();
        break;
    case 2:
        printf("[esolha 2]\n"); //Salvou um personagem
        PersNovo1 = true;

            //FILE *RegistroFF;
            //escrever o registro todo
            RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
            fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
            fclose(RegistroFF);
            system("pause");
            //-------------------------------------------------------------------------

        Sleep(2001);
        system("cls");
        Decisao2TextRenderFase2Puzzle1();
        Sleep(5001);
        system("pause");
        i = 1;
        i = 1;
        int naomatar();
        naomatar();
        break;
    default:
         printf("\n         Opção invalida... use 1 para Sim, 2 para Não.\n");
         Sleep(3001);
        break;
    }
}




return 0;
}

int matarmembro(){
if ((PersNovo1 == false) && (run == true)){



        //Decisao 1 Matar membro
    while (PersNovo1 == false && run == true){
        system("cls");
        Decisao1TextRenderFase2Puzzle1();
        printf("\n1] Ver ilustração do desenho.");
        printf("\n2] Tentar resolver o puzzle.");
        printf("\n3] Pedir conselho de Ana.");
        printf("\n4] Pedir conselho de Charles.");
        scanf("%d", &DecR1);


        switch(DecR1){
            Sleep(3001);
            system("cls");
    case 1:
        Sleep(2001);
        FotoVer = 1;
        sdlPuzzle(FotoVer, PapiroVer, Papiro2Ver);
        FotoVer = 0;
        break;
    case 2:
        Sleep(3001);
        int PuzzleFase2P1Estruct();
        PuzzleFase2P1Estruct();
        break;
    case 3:
        printf("\n\tOlha está escrito A = 100 em uma das paredes... ");
        system("pause");
        break;
    case 4:
        printf("\n\tObserve bem a imagem. ");
        system("pause");
        break;

    default:
        printf("Opção invalida... Opções validas: [1, 2, 3 e 4].");
        Sleep(3001);
        break;
        }
    }
}
return 0;
}
int naomatar(){

    //Decisao 2 Salvar Membro
    if (PersNovo1 == true){
    while ((PersNovo1 == true) && (run == true)){
        system("cls");
        Decisao2TextRenderFase2Puzzle1();
        printf("\n1] Ver ilustração do desenho.");
        printf("\n2] Tentar resolver o puzzle.");
        printf("\n3] Pedir conselho de Ana.");
        printf("\n4] Pedir conselho de charles.");
        printf("\n5] Pedir conselho de Afonso.");
        scanf("%d", &DecR1);

        switch(DecR1){
    case 1:
        Sleep(2001);
        FotoVer = 1;
        sdlPuzzle(FotoVer, PapiroVer, Papiro2Ver);
        FotoVer = 0;
        break;
    case 2:
        Sleep(3001);
        int PuzzleFase2P1Estruct();
        PuzzleFase2P1Estruct();
        break;
    case 3:
        printf("\n\tOlha está escrito A = 100 em uma das paredes... ");
        system("pause");
        break;
    case 4:
        printf("\n\tObserve bem a imagem. ");
        system("pause");
        break;
    case 5:
        printf("\n\tTente subtrair a quantidade exata para que ambos juntos, \n\tresultem em 100%% do tanque de alquimia. ");
        system("pause");
        break;
    default:
        printf("Opção invalida... Opções validas: [1, 2, 3 e 4].");
        Sleep(3001);
        break;
        }

    }
}
return 0;
}
//estrutura do puzzle 1 fase 2 opção : tentar resolver puzzle
//var
int ReservaL1 = 300;
int ReservaL2 = 300;
int Poco1 = 100;
int Poco2 = 100;
int LiqP = 0;
int EscolhaF2P1p1 = 15;
bool F2P1p1 = true;
bool F2P1p2 = false;
bool RunningFase2P1 = true;
int itemJogar = 15;
int quantidade = 0;
int escolha2 = 0;
int escolha3 = 0;
bool F2P1Finalizada = false;
int ProductFinal = 0;
bool FunF2P2 = true;

int PuzzleFase2P1Estruct(){ // estrutura do puzzle 1 fase 2 opção : tentar resolver puzzle


//iniciar
    while (RunningFase2P1){
        system("cls");
        //Se nao ouver reservas
        if (ReservaL1 < 100 && Poco1 == 0 || ReservaL2 < 100 && Poco2 == 0){
            system("cls");
            printf("\n     Não há mais reservas dos liquidos!!!");
            Sleep(2001);
            for (i = 0; i < 7; i ++){
                Sleep(1001);
                printf("\n\t\t\t    !!!!!     todos morreram e  Voçê perdeu o jogo.     !!!!!        \n");
            }
            system("pause");
            menu();
        }

        //Painel princiapal
        printf("\n\n\t\t\t\t\t\t  Painel Principal\n\n");
        printf("\n\t\t\t\t  Reservatório 1         |         Reservatório 2  \n");
        printf("\t\t\t\t      | %d |                            | %d |", ReservaL1, ReservaL2);
        printf("\n\n");
        printf("\t\t\t\t   Poço 1:                                  Poço 2\n");
        printf("\t\t\t\t   | %d |                                  | %d |", Poco1, Poco2);
        printf("\n\n");
        printf("\n\n\t\t\t\t                 Tanque de mistura");
        printf("\n\t\t\t\t                       | %d |", LiqP);




        printf("\n\n\n\n");
        printf("\n  Diminuir quantidade do poço 1 [1].");
        printf("\n  Diminuir quantidade do poço 2 [2].");
        printf("\n  Pegar reservatório para o poço 1  [3].");
        printf("\n  Pegar reservatório para o poço 2  [4].");
        printf("\n  Misturar os dois líquidos no poço inferior  [5].");
        printf("\n  Escolher item a ser jogado para completar a alquimia [6].");
        printf("\n  Voltar [0].");
        if (F2P1Finalizada == true){
        printf("\n Pegar ele com o jarro e o entornar no local com as setas e o desenho do jarro.[7].");
        }
        int escF2P1S2;
        scanf("%d", &escF2P1S2);


        switch(escF2P1S2){
    case 1:
        if(FunF2P2 == true){
        printf("\nQuantidade a ser subtraída do poço: ");
        scanf("%d", &quantidade);

        if (quantidade >=0 && quantidade <= 100){
            printf(" Tem certeza que deseja subtrair %d do poço? !Use 1 para Sim! ", quantidade);
            scanf("%d", &escolha2);
            if (escolha2 == 1){
               printf("\n  Foi subtraído %d do poço", quantidade);
               Poco1 = Poco1 - quantidade;
            }
            else
                {
            printf("\n   Não fizemos nada");
            }
            Sleep(2001);
        }
        else{
            printf("\n Tente uma quantidade maior que 0 e menor que 100");
            printf("\n Quantidade digitada: %d", quantidade);
            Sleep(5001);
        }
            }else{ // Quando as alavancas nao funcionarem
            for(i = 0; i < 5; i++){
                    printf("\t\t\t !!!...As alavancas não estão funcionando!!!...!!!\n");
                    Sleep(1001);
                }

        }
        break;
    case 2:
        if(FunF2P2 == true){
        printf("\nQuantidade a ser subtraída do poço: ");
        scanf("%d", &quantidade);
        if (quantidade >=0 && quantidade <= 100){
            printf(" Tem certeza que deseja subtrair %d do poço? !Use 1 para Sim! ", quantidade);
            scanf("%d", &escolha2);
            if (escolha2 == 1){
               printf("\n  Foi subtraído %d do poço", quantidade);
               Poco2 = Poco2 - quantidade;
            }
            else
                {
            printf("\n   Não fizemos nada");
            }
            Sleep(2001);
        }
            }else{ // Quando as alavancas nao funcionarem
            for(i = 0; i < 5; i++){
                    printf("\t\t\t !!!...As alavancas não estão funcionando!!!...!!!\n");
                    Sleep(1001);
                }

        }
        break;
    case 3:
        if(FunF2P2 == true){
        if (ReservaL1 >= 100){
            printf("\nDigite 1 para confirmar. [1]");
            scanf("%d", &escolha2);
            if (escolha2 == 1){
                printf("\n Foi o poço principal 1 foi abastecido, e a sobra foi perdida.");
                Poco1 = 100;
                ReservaL1 = ReservaL1 - 100;

            }else{
                printf("\n Nada foi feito!");
                Sleep(2001);
            }
        }else{
        printf("\n Não a mais reservatorios para o poço principal 1.");
        Sleep(3001);
        }
            }else{ // Quando as alavancas nao funcionarem
            for(i = 0; i < 5; i++){
                    printf("\t\t\t !!!...As alavancas não estão funcionando!!!...!!!\n");
                    Sleep(1001);
                }

        }
        break;
    case 4:
        if(FunF2P2 == true){
        if (ReservaL2 >= 100){
            printf("\nDigite 1 para confirmar. [1]");
            scanf("%d", &escolha2);

            if (escolha2 == 1){
                printf("\n Foi o poço principal 1 foi abastecido, e a sobra foi perdida.");
                Poco2 = 100;
                ReservaL2 = ReservaL2 - 100;

            }else{
                printf("\n Nada foi feito!");
                Sleep(2001);
            }
        }else{
        printf("\n Não a mais reservatorios para o poço principal 1.");
        Sleep(3001);
        }
            }else{ // Quando as alavancas nao funcionarem
            for(i = 0; i < 5; i++){
                    printf("\t\t\t !!!...As alavancas não estão funcionando!!!...!!!\n");
                    Sleep(1001);
                }

        }
        break;
    case 5:
        if(FunF2P2 == true){
        if (Poco1 > 0 || Poco2 > 0){
            printf("\nTem certeza que deseja iniciar a alquimia?[[1] para Sim]");
            scanf("%d", &escolha2);
            if (escolha2 == 1){
                if (Poco1 + Poco2 >= 90 && Poco1 + Poco2 <= 100){
                    printf("\n\t\t\t *..Explosão pequena...*");
                    Sleep(5001);
                    LiqP = Poco1 + Poco2;
                }else{printf("\n\t\t\t *...Líquido está instável, e não servirá para o próximo paço...*");Sleep(5001);}
            }
        }else{
        printf("\nUm dos poços está vazio.");
        }
            }else{ // Quando as alavancas nao funcionarem
            for(i = 0; i < 5; i++){
                    printf("\t\t\t !!!...As alavancas não estão funcionando!!!...!!!\n");
                    Sleep(1001);
                }

        }
        break;

    case 6:
        if (FunF2P2 == true){
        if (LiqP == 100){

        printf("\n Escolha um item. [1 - Crânio] [2 - Osso de um dedo] [3 - colar]");
        scanf("%d", &escolha3);
        printf("\n\tTem certeza que deseja jogar o item %d no poço? \n\tSe não for o certo não terá uma segunda chance!! [[1] para sim]", escolha3);
        scanf("%d", &escolha2);
            if (escolha2 == 1){
                if (escolha3 == 1){
                printf("\n\t\O líquido mudou para a cor azul e está brilhando, parece que funcionou.");
                Sleep(2001);
                printf("\n\tSugiro pegar ele com o jarro e o entornar no local com as setas e o desenho do jarro.\n\t");
                Sleep(2001);
                F2P1Finalizada = true;
                FunF2P2 = false;
                ProductFinal = 1;
                system("pause");
                }
                if(escolha3 == 2){
                printf("\n\t\O líquido mudou para a cor rosa e está brilhando, parece que funcionou.");
                Sleep(2001);
                printf("\n\tSugiro pegar ele com o jarro e o entornar no local com as setas e o desenho do jarro.\n\t");
                Sleep(2001);
                F2P1Finalizada = true;
                FunF2P2 = false;
                ProductFinal = 2;
                system("pause");
                }
                if (escolha3 == 3){
                printf("\n\t\O líquido mudou para a cor preta, parece que o líquido ficou poluído.\n\tMas não temos escolha, as alavancas parecem não funcionar...");
                Sleep(2001);
                printf("\n\tSugiro pegar ele com o jarro e o entornar no local com as setas e o desenho do jarro.\n\t");
                Sleep(2001);
                F2P1Finalizada = true;
                FunF2P2 = false;
                ProductFinal = 3;
                system("pause");

                }else{printf("\n Você escolheu um objeto que não existe. Escolha entre 1 a 3.");}

            }else{printf("\n Nada foi feito");}

        }else{
            printf("\nDeve fazer a primeira parte da alquimia, criar o líquido!!");
            Sleep(3001);
        }
        }else{
        printf("\n\tVocê já fez isso, e não se deve fazer mais de uma vez.\n");
        system("pause");
        }
        break;
    case 7:
        if (ProductFinal == 1){ // item 1 Cranio
          //Inicia a fase 3, abre a porta para ir para a fase 3... Pula o puzzle 2 da fase 2.

            //Atualiza no registro a fase em que está.
            char faseAtualAFF[6] = {"5"};
            RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
            if(fopen(nomeLoginComCaminhoAFF, "r+") == NULL){printf("\nNao foi possivel salvar! Arquivo nao encontrado...");system("pause");}
            else{printf("\nSalvo com sucesso!");}
            fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
            fclose(RegistroFF);
            Sleep(1001);

            faseAtual2 = 5;
            PassaVar2(faseAtual2);
            //---------------------------------------



          printf("\n\t\t\t!..Barulho muito alto por trás das paredes...!");
          system("pause");
          RunningFase2P1 = false;
          run = false;


        //fase 3. Voltando ao rumo do puzzle.
        }
        if (ProductFinal == 2){ // item 2 Dedo
          //iniciar a historia e a fase 2 puzzle 2.


            //Atualiza no registro a fase em que está.
            char faseAtualAFF[6] = {"4"};
            RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
            if(fopen(nomeLoginComCaminhoAFF, "r+") == NULL){printf("\nNao foi possivel salvar! Arquivo nao encontrado...");system("pause");}
            else{printf("\nSalvo com sucesso!");}
            fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
            fclose(RegistroFF);
            Sleep(1001);

            faseAtual2 = 4;
            PassaVar2(faseAtual2);
            //---------------------------------------


          RunningFase2P1 = false;
          run = false;
          //int PuzzleFase2p2();
          //PuzzleFase2p2();


        }
        if (ProductFinal == 3){ // item 3 Colar
            //abre a uma escotilha q inunda a camara toda e mata os personagens afogados. Termina o jogo.
            system("cls");
            printf("\n\t\tCinco escotilhas dentro da câmara são abertas, e a sala toda começa a se inundar rapidamente,\n\t\tNenhum personagem principal sobreviveu.\n");
            Sleep(5001);
           RunningFase2P1 = false;
           run = false;
           FimDeJogo();
        }
        break;

    case 0:
        if (PersNovo1 == true){
            system("cls");
           naomatar();
        }
        else{
           system("cls");
           matarmembro();
        }

        break;
    default:
        printf("Opção invalida... Opções validas: [1, 2, 3, 4, 5, 6 e 0].");
        Sleep(3001);
        break;
        }
}
return 0;
}


//var
bool butonFase2P2 = true;
bool runF2Puzzle2 = true;
bool Japassou = false;
int decisoesF2P2;
int PuzzleFase2p2(){

    if (Japassou == false){
    system("cls");
    int TextRenderFase2Puzzle2P2();
    TextRenderFase2Puzzle2P2();
    if (PersNovo1 == true){
        printf("\n      Pessoal!! – Exclamou Afonso – Olhem essa parte da parede, parece muito com um botão! Devo apertar?");
        printf("\n      Olha parece aqueles que estavam na sala anterior! - Disse Ana.");
        printf("\n      Devo apertar? – Perguntou Afonso.");
        printf("\n        Escolha do jogador: [1 - Sim] [2 - Não].");
        scanf("%d", &decisoesF2P2);
        if (decisoesF2P2 == 1){
        printf("\n        Escolha: [Sim]");
        Sleep(3001);
        printf("\n            * Uma caixa na parede se abre e dentro tem um papiro, os personagens pegam *");
        printf("\n                                  * Papiro poderá ser aberto depois *\n\n");
        }else{
        printf("\n         Escolha: [Não]");
        butonFase2P2 = false;
        Sleep(3001);
        }

    }
    printf("\n      Nós ficamos algum tempo olhando aquele lugar, e encontramos escrituras onde falava que aquilo tudo nas\n      prateleiras eram líquidos para alquimia. Como na sala anterior, devemos fazer uma para sair.\n\n         *As instruções de como funciona esse mecanismo estão detalhadas em um papiro em uma das prateleiras *\n\n");
    system("pause");
    system("cls");
    }
    Japassou = true;
    //interações com o jogador ---
    while (runF2Puzzle2){
        system("cls");
        int TextRenderFase2Puzzle2P2();
        TextRenderFase2Puzzle2P2();
        if (PersNovo1 == true){
            printf("\n      Pessoal!! – Exclamou Afonso – Olhem essa parte da parede, parece muito com um botão! Devo apertar?");
            printf("\n      Olha parece aqueles que estavam na sala anterior! - Disse Ana.");
            printf("\n      Devo apertar? – Perguntou Afonso.");
            printf("\n        Escolha do jogador: [1 - Sim] [2 - Não].");
            if (decisoesF2P2 == 1){
            printf("\n\n        Escolha: [Sim]");
            printf("\n            * Uma caixa na parede se abre e dentro tem um papiro, os personagens pegam *");
            printf("\n                                  * Papiro poderá ser aberto depois *\n\n");
            }else{
            printf("\n         Escolha: [Não]");
            butonFase2P2 = false;
            }


        }
        if (decisoesF2P2 == 1){printf("\n\t0] Ver papiro do Afonso");}
        printf("\n\n\t1] Ver Papiro com instruções.");
        printf("\n\t2] Tentar resolver Puzzle.");
        printf("\n\t3] Pedir ajuda a Ana.");
        printf("\n\t4] Pedir ajuda a Charles.");
        if (PersNovo1 == true){printf("\n\t5] pedir ajuda a Afonso.");}
        scanf("%d", &decisoesGlobal);

        switch (decisoesGlobal){
            if (decisoesF2P2 == 1){
           case 0:
               Papiro2Ver = 1;
               sdlPuzzle(FotoVer, PapiroVer, Papiro2Ver);
               Papiro2Ver = 0;
            break;
            }
           case 1:
               PapiroVer = 1;
               sdlPuzzle(FotoVer, PapiroVer, Papiro2Ver);
               PapiroVer = 0;
               system("cls");
            break;
           case 2:
               system("cls");
               int Puzzle2Fase2Estrutura();
               Puzzle2Fase2Estrutura();
            break;
           case 3:
               printf("\n\t Você tem que primeiro tentar decifrar oque está escrito no papiro, \n\tuse lógica para isso – Disse Ana – Eu acho que essa letra diferente significa que \n\t\talgo pertence a algo.");
               printf("\n");
               system("pause");
               system("cls");
            break;
           case 4:
               printf("\n\t Você tem que primeiro misturar dois frascos – Disse Charles - Em segundo \n\tmisturar um item com uma essência. Por fim misturar os dois e derramar nos dois tanques.");
               printf("\n");
               system("pause");
               system("cls");
            break;
            if (PersNovo1 == 1){
           case 5:
                printf("\n\t  Não sei o que dizer!! – Disse Afonso.");
                printf("\n");
                system("pause");
                system("cls");
            break;
            }

           default:
               printf("Opção invalida... Opções validas: [1, 2, 3 e 4].");
               Sleep(3001);
            break;


        }
    }//Fim do While do puzzle 2 fase 2
return 0;
}
//var
bool runF2Puzzle2Estrutura = true;
int frasco1, frasco2, Essencia, itemP2, feitoP6, feitoP7;
int resulTFrasco, ResultEI;
int JaEscolheu1 = 0, JaEscolheu2 = 0, JaEscolheu3 = 0, jaEscolheu4 = 0;

int Puzzle2Fase2Estrutura(){

    while (runF2Puzzle2Estrutura){
        system("cls");



        //interface
        int EstruturaP2F2();
        EstruturaP2F2();
        printf("\n\n");
        printf("\n\t1] Ver inventário");
        printf("\n\t2] Escolher dois frasco");
        printf("\n\t3] Escolher uma essência");
        printf("\n\t4] Escolher um item");
        printf("\n\t0] Voltar");
        if (jaEscolheu4 == 1){
            printf("\n\t5] Jogar mistura nos dois tanques e puxar a alavanca!");
        }
        scanf("%d", &escolhaGlobal);

        switch(escolhaGlobal){
        case 1:
               system("cls");

                for(i = 0; i < 1;){
                    system("cls");
                           //inventario
                    printf("\n                                   Inventario do jogador para este puzzle");
                    printf("\n|-----------------------------------------------------------------------------------------------------------------|");
                    printf("\n|                                            inventário do jogador                                                |");
                    printf("\n|                            |------------------------------------------------|                                   |");
                    printf("\n|                            |           %d         Frascos          %d         |                                   |", frasco1, frasco2);
                    printf("\n|                            |------------------------------------------------|                                   |");
                    printf("\n|                            |               Essência escolhida               |                                   |");
                    printf("\n|                            |                       [%d]                      |                                   |", Essencia);
                    printf("\n|                            |------------------------------------------------|                                   |");
                    printf("\n|                           ~                 item escolhido                   ~                                  |");
                    printf("\n|                         ~                          %d                            ~                               |",itemP2);
                    printf("\n|                       ~............................................................~                            |");
                    printf("\n|                                                                                                                 |");
                    printf("\n|-----------------------------------------------------------------------------------------------------------------|");
                    printf("\n\n");
                    printf("\n\t1] Misturar os frascos com líquidos, só tem uma chance");
                    printf("\n\t2] Misturar a essência com o item, só tem uma chance");
                    if (JaEscolheu1 == 1 && JaEscolheu2 == 1){
                    printf("\n\t3] Misturar o resultado da primeira e segunda mistura");
                    }
                    printf("\n\t0] Voltar");
                    scanf("%i", &escolhaGlobal);

                    switch(escolhaGlobal){
                case 1:
                    printf("Tem certeza que deseja misturar os líquidos? Você só tem uma chance! [1– Sim] [2 –Não]");
                    scanf("%d", &escolhaGlobal);
                    if (escolhaGlobal == 1){
                            if (frasco1 == 1 && frasco2 == 4 || frasco1 == 4 && frasco2 == 1){
                                feitoP6 = 1;
                                printf("\n\tO líquido ficou um pouco brilhante!!");
                                Sleep(2001);
                            }else{
                                printf("\n\t líquido ficou um pouco escuro");
                                Sleep(2001);
                            }
                        JaEscolheu1 = 1;
                    }else{
                        printf("\nNada foi feito!");
                        Sleep(2001);
                    }
                    break;
                case 2:
                    printf("Tem certeza que deseja misturar o item com a essência? Você só tem uma chance! [1– Sim] [2 –Não]");
                    scanf("%d", &escolhaGlobal);
                    if (escolhaGlobal == 1){
                            if (Essencia == 3 && itemP2 == 4){
                            feitoP7 = 1;
                             printf("\n\tO líquido ficou um pouco brilhante!!");
                             Sleep(2001);
                            }else{
                                printf("\n\t líquido ficou um pouco escuro");
                                Sleep(2001);
                            }
                        JaEscolheu2 = 1;
                    }else{
                        printf("\nNada foi feito!");
                        Sleep(2001);
                    }
                    break;
                if (JaEscolheu1 == 1 && JaEscolheu2 == 1){
                case 3:
                    if (feitoP6 + feitoP7 == 2){
                        printf("\n\t...");
                        Sleep(1001);
                        printf("\n\t   ...");
                        Sleep(1001);
                        printf("\n\t      ...");
                        Sleep(1001);
                        printf("\n\t         ...");
                        Sleep(1001);
                        printf("\n\t              O liquido ficou vermelho! Sugiro o jogar nos dois tanques!");
                        Sleep(2001);
                    }else{
                        printf("\n\t             o líquido ficou escuro!");
                        Sleep(2001);
                    }
                    Sleep(5001);
                    jaEscolheu4 = 1;
                    break;
                }

                case 0:
                    i = 1;
                    Puzzle2Fase2Estrutura();
                    break;
                default:
                    printf("\n Escolha invalida.");
                    break;
                    }
                }
            break;
        case 2:
            if (JaEscolheu1 == 0){
            for (i = 0; i < 1;){
                printf("\n\tEscolha");
                printf("\n\t\tPrimeiro frasco: ");
                scanf("%d", &frasco1);
                if (frasco1 < 1 || frasco1 > 6){printf("\nNão existe esse frasco, tente um que exista na interface!");Sleep(2001); frasco1 = NULL;}
                printf("\n\t\tSegundo frasco: ");
                scanf("%d", &frasco2);
                if (frasco2 < 1 || frasco1 > 6){printf("\nNão existe esse frasco, tente um que exista na interface!");Sleep(2001); frasco2 = NULL;}
                if (frasco2 == frasco1){
                    printf("\nfrasco ja escolhido. Tesnte outro diferente");
                    Sleep(2001);
                    frasco2 = NULL;
                }else{i = 1;}
            }}else{
                printf("\n Já escolheu 2 frascos.");
                Sleep(2001);
            }
            break;
        case 3:
            if (JaEscolheu2 == 0){
            for (i = 0; i < 1;){
            printf("\n\tDigite o numero da esseência: ");
            scanf("%d", &Essencia);
            if (escolhaGlobal < 1 || escolhaGlobal > 3){printf("\nNão existe essa essência, tente um que exista na interface!");Sleep(2001);Essencia = NULL;}
            else{i = 1;}
            }}
            break;
        case 4:
            if (JaEscolheu2 == 0){
            for (i = 0; i < 1;){
            printf("\n\tEscolha um item: ");
            scanf("%d", &itemP2);
            if(itemP2 < 1 || itemP2 > 5){printf("\nEscolha um item que tenha na interface.");Sleep(2001); itemP2 = NULL;}
            else{i = 1;}
            }
            break;
        case 0:
            Japassou = true;
           PuzzleFase2p2();
            break;
        if (jaEscolheu4 == 1){
                case 5:
                    if (feitoP6 + feitoP7 == 2){
                    printf("\n\t                        *Barulho muito alto atras das paredes*");



                    //Atualiza no registro a fase em que está.
                    char faseAtualAFF[6] = {"5"};
                    RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
                    if(fopen(nomeLoginComCaminhoAFF, "r+") == NULL){printf("\nNao foi possivel salvar! Arquivo nao encontrado...");system("pause");}
                    else{printf("\nSalvo com sucesso!");}
                    fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
                    fclose(RegistroFF);
                    Sleep(1001);

                    faseAtual2 = 5;
                    PassaVar2(faseAtual2);
                    //---------------------------------------



                    i = 1;
                    runF2Puzzle2Estrutura = false;
                    runF2Puzzle2 = false;
                }else{
                printf("\n\t                        *Barulho muito alto atras das paredes*");
                FimDeJogo();
                }
                break;
                }

        default:
           printf("\n\t Opcões validas: 1, 2, 3, 4, 5 e 0");
           Sleep(3001);
           system("cls");
            break;


}
}
}
return 0;
}

//fase 3----------------------------------------------3
//var
char Palavra1[10], Palavra2[10], Palavra3[10], Palavra4[10];
int puzzle5Estrutura(char Palavra1[10], char Palavra2[10], char Palavra3[10], char Palavra4[10]);
//Puzzle 5
int puzzle5(){
system("cls");
//var
RunPuzzleG1 = true;
//História


    while (RunPuzzleG1){ //estrutura 1 puzzle 5
        system("cls");
       Puzzle5Texto();

        printf("\n\n\t1] Ver instruções.");
        printf("\n\t2] Tentar resolver Puzzle.");
        printf("\n\t3] Pedir ajuda a Ana.");
        printf("\n\t4] Pedir ajuda a Charles.");
        if (PersNovo1 == true){printf("\n\t5] pedir ajuda a Afonso.");}
        scanf("%d", &decisoesGlobal);

        switch (decisoesGlobal){
           case 1:
                printf("\n\tO jogador deve montar uma frase com palavras especificas. As palavras estão\n\t escondidas, e para ser reveladas o jogador deve concluir a tabela verdade. Cada\n\t acerto de V ou F mostra uma palavra da frase. Você só terá uma chance por palavra, \n\t mas pode tentar descobrir a frase quantas vezes quiser.\n");                system("pause");
               system("cls");
            break;
           case 2:
               RunPuzzleG2 = true;
               system("cls");
               puzzle5Estrutura(Palavra1, Palavra2, Palavra3, Palavra4);

               system("cls");
            break;
           case 3:
               printf("\n\t : Terá que fazer esse sem minha ajuda! - Exclamou Ana");
               printf("\n");
               system("pause");
               system("cls");
            break;
           case 4:
               printf("\n\t lembre-se do que usou no primeiro desafio – Disse Charles.");
               printf("\n");
               system("pause");
               system("cls");
            break;
            if (PersNovo1 == 1){
           case 5:
                printf("\n\t  tente lembrar do que usou no segundo desafio – Disse Afonso.");
                printf("\n");
                system("pause");
                system("cls");
            break;
            }

           default:
               printf("Opção invalida... Opções validas: [1, 2, 3 e 4].");
               Sleep(3001);
            break;





    }

}
return 0;
}
//var



char VF1[3] = {"F"}; char VF5[3] = {"F"};
char VF2[3] = {"F"}; char VF6[3] = {"V"};
char VF3[3] = {"V"}; char VF7[3] = {"F"};
char VF4[3] = {"V"}; char VF8[3] = {"V"};

char RS1[3] = {" "}, RS2[3] = {" "}, RS3[3] = {" "}, RS4[3] = {" "};
char frase[30];


//Japassou = false;
int puzzle5Estrutura(char Palavra1[10], char Palavra2[10], char Palavra3[10], char Palavra4[10]){

    while(RunPuzzleG3){
        system("cls");
        printf("\n\n\t1]Escrever frase.");
        printf("\n\n\t2]Tentar decifrar tabela.");
        printf("\n\n\t0]Voltar.");
        scanf("%i", &escolhaGlobal);

        switch(escolhaGlobal){
        case 1:
        printf("\n\n\tSe escreverdes da forma certa a porta se abrirá!");
        printf("\n\n\tPodes tentares o quanto quiserdes.");
        printf("Escreva: ");
        fflush(stdin);
        gets(frase);
        if(strcasecmp(frase, "Rei dos idiotas reina!") == 0){
            RunPuzzleG1 = false;
            RunPuzzleG2 = false;
            RunPuzzleG3 = false;


                    //Atualiza no registro a fase em que está.
                    char faseAtualAFF[6] = {"6"};
                    RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
                    if(fopen(nomeLoginComCaminhoAFF, "r+") == NULL){printf("\nNao foi possivel salvar! Arquivo nao encontrado...");system("pause");}
                    else{printf("\nSalvo com sucesso!");}
                    fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
                    fclose(RegistroFF);
                    Sleep(1001);

                    faseAtual2 = 6;
                    PassaVar2(faseAtual2);
                    //---------------------------------------



            printf("\n...");
            Sleep(1001);
            printf("\n   ...");
            Sleep(1001);
            printf("\n      ...");
            Sleep(1001);
            printf("\n         ...");
            Sleep(1001);
            printf("\n            Barulho alto por trás das paredes ");
            Sleep(3001);
        }else{
            printf("\n\n\t Não é essa!");
            Sleep(3001);
        }
            break;

        case 2:
        for(i = 0; i < 2; i++){
        system("cls");
        printf("\n\t\t\t\t| A | B | A ^ B | palavra |");
        printf("\n\t\t\t\t| %s | %s |   %s   | %s ", VF1, VF5, RS1, Palavra1);
        printf("\n\t\t\t\t| %s | %s |   %s   | %s ", VF2, VF6, RS2, Palavra2);
        printf("\n\t\t\t\t| %s | %s |   %s   | %s ", VF3, VF7, RS3, Palavra3);
        printf("\n\t\t\t\t| %s | %s |   %s   | %s \n", VF4, VF8, RS4, Palavra4);
        system("pause");
        if (Japassou == false){
            printf("\n\n\n\tDigite a resposta da linha 1: ");
            scanf("%s", RS1);
            if (strcasecmp(RS1, "F") == 0){Palavra1 = {"Rei"};}
            printf("\n\tDigite a resposta da linha 2: ");
            scanf("%s", RS2);
            if (strcasecmp(RS2, "F") == 0){Palavra2 = {"dos"};}
            printf("\n\tDigite a resposta da linha 3: ");
            scanf("%s", RS3);
            if (strcasecmp(RS3, "F") == 0){Palavra3 = {"idiotas"};}
            printf("\n\tDigite a resposta da linha 4: ");
            scanf("%s", RS4);
            if (strcasecmp(RS4, "V") == 0){Palavra4 = {"reina!"};}
            Japassou = true;
            }
        }
        break;
        case 0:
            RunPuzzleG2 = false;
            puzzle5();
            break;
        default:
        printf("\nOpção invalida!");
            break;
            }
    }


system("pause");
return 0;
}
//-------------------------------------------------
int Puzzle6Estrutura(char Palavra1[10], char Palavra2[10], char Palavra3[10], char Palavra4[10]);
//Puzzle 6
int Puzzle6(){
system("cls");
//var
RunPuzzleG1 = true;
//História

    while (RunPuzzleG1){ //estrutura 1 puzzle 6
        Puzzle6Texto();
        Puzzle6p1Texto();

        printf("\n\n\t1] Ver instruções.");
        printf("\n\t2] Tentar resolver Puzzle.");
        printf("\n\t3] Pedir ajuda a Ana.");
        printf("\n\t4] Pedir ajuda a Charles.");
        if (PersNovo1 == true){printf("\n\t5] pedir ajuda a Afonso.");}
        scanf("%d", &decisoesGlobal);

        switch (decisoesGlobal){
           case 1:
                printf("\n\tO jogador deve montar uma frase com palavras especificas. As palavras estão\n\t escondidas, e para ser reveladas o jogador deve concluir a tabela verdade. Cada\n\t acerto de V ou F mostra uma palavra da frase. Você só terá uma chance por palavra, \n\t mas pode tentar descobrir a frase quantas vezes quiser.\n");                system("pause");
               system("cls");
            break;
           case 2:
               RunPuzzleG2 = true;
               system("cls");
               Puzzle6Estrutura(Palavra1, Palavra2, Palavra3, Palavra4);

               system("cls");
            break;
           case 3:
               printf("\n\t : Terá que fazer esse sem minha ajuda! - Exclamou Ana");
               printf("\n");
               system("pause");
               system("cls");
            break;
           case 4:
               printf("\n\t lembre-se do que usou no primeiro desafio – Disse Charles.");
               printf("\n");
               system("pause");
               system("cls");
            break;
            if (PersNovo1 == 1){
           case 5:
                printf("\n\t  tente lembrar do que usou no segundo desafio – Disse Afonso.");
                printf("\n");
                system("pause");
                system("cls");
            break;
            }

           default:
               printf("Opção invalida... Opções validas: [1, 2, 3 e 4].");
               Sleep(3001);
            break;





    }

}
return 0;
}
//-------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------------------
int Puzzle6Estrutura(char Palavra1[10], char Palavra2[10], char Palavra3[10], char Palavra4[10]){
char RS1[3] = {" "}, RS2[3] = {" "}, RS3[3] = {" "}, RS4[3] = {" "};
char frase[30] = {""};

    while(RunPuzzleG3){
        system("cls");
        printf("\n\n\t1]Escrever frase.");
        printf("\n\n\t2]Tentar decifrar tabela.");
        printf("\n\n\t0]Voltar.");
        scanf("%i", &escolhaGlobal);

        switch(escolhaGlobal){
        case 1:
        printf("\n\n\tSe escreverdes da forma certa a porta se abrirá!");
        printf("\n\n\tPodes tentares o quanto quiserdes.");
        printf("Escreva: ");
        fflush(stdin);
        gets(frase);
        if(strcasecmp(frase, "Ele morreu por todos!") == 0){
            RunPuzzleG1 = false;
            RunPuzzleG2 = false;
            RunPuzzleG3 = false;


                    //Atualiza no registro a fase em que está.
                    char faseAtualAFF[6] = {"7"};
                    RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
                    if(fopen(nomeLoginComCaminhoAFF, "r+") == NULL){printf("\nNao foi possivel salvar! Arquivo nao encontrado...");system("pause");}
                    else{printf("\nSalvo com sucesso!");}
                    fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
                    fclose(RegistroFF);
                    Sleep(1001);

                    faseAtual2 = 7;
                    PassaVar2(faseAtual2);
                    //---------------------------------------



            printf("\n...");
            Sleep(1001);
            printf("\n   ...");
            Sleep(1001);
            printf("\n      ...");
            Sleep(1001);
            printf("\n         ...");
            Sleep(1001);
            printf("\n            Barulho alto por trás das paredes ");
            Sleep(3001);
            return 0;
        }else{
            printf("\n\n\t Não é essa!");
            Sleep(3001);
        }
            break;

        case 2:
            for(i = 0; i < 2; i++){
            system("cls");
        printf("\n\t\t\t\t| A | B | A' <-> B | palavra |");
        printf("\n\t\t\t\t| %s | %s |    %s     | %s ", VF1, VF5, RS1, Palavra1);
        printf("\n\t\t\t\t| %s | %s |    %s     | %s ", VF2, VF6, RS2, Palavra2);
        printf("\n\t\t\t\t| %s | %s |    %s     | %s ", VF3, VF7, RS3, Palavra3);
        printf("\n\t\t\t\t| %s | %s |    %s     | %s \n", VF4, VF8, RS4, Palavra4);
        system("pause");
        if (Japassou == false){
            printf("\n\n\n\tDigite a resposta da linha 1: ");
            scanf("%s", RS1);
            if (strcasecmp(RS1, "F") == 0){Palavra1 = {"Ele"};}
            printf("\n\tDigite a resposta da linha 2: ");
            scanf("%s", RS2);
            if (strcasecmp(RS2, "V") == 0){Palavra2 = {"morreu"};}
            printf("\n\tDigite a resposta da linha 3: ");
            scanf("%s", RS3);
            if (strcasecmp(RS3, "V") == 0){Palavra3 = {"por"};}
            printf("\n\tDigite a resposta da linha 4: ");
            scanf("%s", RS4);
            if (strcasecmp(RS4, "F") == 0){Palavra4 = {"todos!"};}
            Japassou = true;
            }

        }
        break;
        case 0:
            RunPuzzleG2 = false;
            Puzzle6();
            break;
        default:
        printf("\nOpção invalida!");
            break;
            }
    }



return 0;
}

//fase 4
//Puzzle 7
int puzzle7(){
//var
RunPuzzleG1 = true;
i = 1;


    while(RunPuzzleG1){
        system("cls");
        if (i == 1){
        Puzzle7Texto();
        Puzzle7p1Texto();
        }else{
            printf("\n\n\n\n\n........................................................................................................................\n");
            printf("\n\n\n\n\n\t\t\tSe errar de novo, talvez não teremos mais tempo! – Disse Ana.\n");
            printf("\n\n\n\n\n........................................................................................................................\n");
            Sleep(3001);
        }
    printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tForam utilizados mais de 2 milhoes e 300 mil blocos na construcao da Grande Piramide e mais de \n\t\t30 mil homens. Quantos blocos em media foram colocados por cada homem na construcao da Grande Piramide?\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\t1) Aproximadamente 220 blocos por pessoa\n");
	printf ("\t\t2) Aproximadamente 35 blocos por pessoa\n");
	printf ("\t\t3) Aproximadamente 76 blocos por pessoa\n");
	printf ("\t\t4) Aproximadamente 132 blocos por pessoa\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ? ");
	scanf ("%i",&escolhaGlobal);

        if (escolhaGlobal == 4){
                printf("\n\n\t\tBoa! Vamos para o outro agora. – Disse Charles.\n");

                    //Atualiza no registro a fase em que está.
                    char faseAtualAFF[6] = {"8"};
                    RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
                    if(fopen(nomeLoginComCaminhoAFF, "r+") == NULL){printf("\nNao foi possivel salvar! Arquivo nao encontrado...");system("pause");}
                    else{printf("\nSalvo com sucesso!");}
                    fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
                    fclose(RegistroFF);
                    Sleep(1001);

                    faseAtual2 = 8;
                    PassaVar2(faseAtual2);
                    //---------------------------------------
            Sleep(5001);
            return 0;
        }else{
            if (i <= 1){
                printf("\n\t\t\t Não, não é esse ");
                i++;
                Sleep(2001);
            }else{
                FimDeJogo();
                return 0;
            }
        }


    }

return 0;
}

//-------------------------------------------------
//Puzzle 8
int puzzle8(){
RunPuzzleG1 = true;



    while(RunPuzzleG1){
        system("cls");
            printf("\n\n\n\n\n........................................................................................................................\n");
            printf("\n\n\n\n\n\t\t\tSe errar talvez não teremos mais tempo! – Disse Ana.\n");
            printf("\n\n\n\n\n........................................................................................................................\n");
            Sleep(3001);

    printf ("\t\t*--------------------------------*\n");
	printf ("\t\tAs OS blocos utilizados na construcao da Piramide de Queops pesavam em media 31,25 toneladas \n\t\tcada. Quantas Toneladas foram utilizadas no Total na construcao dessa Piramide? \n\n");
    printf ("\t\t1) Aproximadamente 80200000 toneladas \n");
	printf ("\t\t2) Aproximadamente 60920100 toneladas\n");
	printf ("\t\t3) Aproximadamente 71875000 toneladas\n");
	printf ("\t\t4) Aproximadamente 58288000 toneladas\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%i",&escolhaGlobal);

        if (escolhaGlobal == 3){
                printf("\n\n\t\tIsso!!Gritou Ana.\n");
                printf("\n\n\t\tVamos! - Disse Charles.\n");


                    //Atualiza no registro a fase em que está.
                    char faseAtualAFF[6] = {"9"};
                    RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
                    if(fopen(nomeLoginComCaminhoAFF, "r+") == NULL){printf("\nNao foi possivel salvar! Arquivo nao encontrado...");system("pause");}
                    else{printf("\nSalvo com sucesso!");}
                    fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
                    fclose(RegistroFF);
                    Sleep(1001);

                    faseAtual2 = 9;
                    PassaVar2(faseAtual2);
                    //---------------------------------------
            Sleep(5001);
            return 0;
        }else{

                printf("\n\t\t\t Não, não é esse ");
                Sleep(5001);
                FimDeJogo();
                return 0;
            }
        }

return 0;
}
//-------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
//Puzzle9
int puzzle9(){
//var
RunPuzzleG1 = true;
system("cls");
//historia
HistoriaFase5P1();
system("pause");

    while(RunPuzzleG1){
        system("cls");
        HistoriaFase5P2();
        printf("\n\n\t\tDigite o nome do seu rei: ");
        fflush(stdin);
        gets(escolhaGlobalChar);

        if (strcasecmp(escolhaGlobalChar, "Snefru") == 0){
                    //Atualiza no registro a fase em que está.
                    char faseAtualAFF[6] = {"10"};
                    RegistroFF = fopen(nomeLoginComCaminhoAFF, "r+");
                    if(fopen(nomeLoginComCaminhoAFF, "r+") == NULL){printf("\nNao foi possivel salvar! Arquivo nao encontrado...");system("pause");}
                    else{printf("\nSalvo com sucesso!");}
                    fprintf(RegistroFF, "Nome:%s\nSenha:%s\nFase:%s\nNewPers:%i\nQuiz:%s", nomeAFF, senhaAFF, faseAtualAFF, PersNovo1, QuizAtualAFF);
                    fclose(RegistroFF);
                    Sleep(1001);

                    faseAtual2 = 10;
                    PassaVar2(faseAtual2);
                    //---------------------------------------


            Sleep(2001);
            printf("\n\n\t Pronto. Acho que...");
            Sleep(1001);
            printf("\n\n\t Olha sua direita! – exclamou Ana. ");
            system("pause");
            return 0;
        }else{
            printf("\n\n\n\n\n........................................................................................................................\n");
            printf("\n\n\n\n\n\t\t\tSe errar de novo, talvez não teremos mais tempo! – Disse Ana.\n");
            printf("\n\n\n\n\n........................................................................................................................\n");
            Sleep(3001);
        }
    }
return 0;
}
//Puzzle 10

int Puzzle10(){
//var
RunPuzzleG1 = true;
RunPuzzleG2 = true;

system("cls");
Puzzle10p1();
system("pause");

    while(RunPuzzleG1){
        printf("\n\tA uma escritura na parede, e um desafio abaixo. Acreditava que só faltava esse para terminar...");
        Sleep(3001);
        printf("\n\tE estava certo!");
        printf("\n\n                                   Aperte enter para ler");
        fflush(stdin);
        gets(escolhaGlobalChar);
        system("cls");
        Puzzle10p2();
        scanf("%i", &escolhaGlobal);
        printf("\n");
        for (i = 0; i < 11; i++){
            printf("...");
            Sleep(500);
        }
        printf("Pressione enter para ler o restante da história!");
        fflush(stdin);
        gets(escolhaGlobalChar);
        FinalHistoria();
        Sleep(4001);
        printf("\n\n\t\t\t ...Pessoal?! O almoço está pronto!");
        Sleep(4001);
        printf("\n\n\t\t\tAah, é sua vó! Melhor irmos! Deixa isso que ia falar para depois!\n");
        Sleep(6001);
        for (i = 0; i < 11; i++){
            printf("...");
            Sleep(400);
        }
        printf(" História: Matheus Franzoni\n");
        for (i = 0; i < 11; i++){
            printf("...");
            Sleep(300);
        }
        printf(" Puzzles: Leo Assis\n");
        for (i = 0; i < 11; i++){
            printf("...");
            Sleep(300);
        }
        printf(" Puzzles: Matheus Franzoni\n");
        printf("\n");
        for (i = 0; i < 11; i++){
            printf("...");
            Sleep(300);
        }
        printf(" Este é um jogo desenvolvido por estudantes.\n");
        for (i = 0; i < 11; i++){
            printf("...");
            Sleep(300);
        }
        printf(" Um dia ele pode ser melhorado por outras pessoas,\n");
        for (i = 0; i < 11; i++){
            printf("...");
            Sleep(300);
        }
        printf("  ou talvez até mesmo pelos próprios desenvolvedores.\n");
        printf("\n");
        for (i = 0; i < 11; i++){
            printf("...");
            Sleep(300);
        }
        printf(" Agradecemos por terem tirado um pouco do seu tempo \n");
        for (i = 0; i < 11; i++){
            printf("...");
            Sleep(300);
        }
        printf(" para aproveitar essa História, e esses desafios. \n");
        printf("\n");
        for (i = 0; i < 11; i++){
            printf("...");
            Sleep(300);
        }
        printf(" Esperamos que tenham gostado do jogo!\n");
        printf("\n");
        for (i = 0; i < 11; i++){
            printf("...");
            Sleep(300);
        }
        printf(" De toda equipe do projeto, para vocês curiosos.\n");


        printf("\n\n\n\t Pressione enter para sair.");
        fflush(stdin);
        gets(escolhaGlobalChar);
        printf("\nSaindo!");
        printf("\nObrigado!");
        Sleep(5001);
        exit(0);

    }

return 0;
}
