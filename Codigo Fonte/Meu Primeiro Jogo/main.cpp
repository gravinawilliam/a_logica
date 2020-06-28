#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iostream>
#include <conio.h>
#include "RotaQuiz.h"
#include "rotasPuzzle.h"
#include <sys/stat.h>
//==================
int Pazzle(int fase);
int Quiz();
int main();
void menu();
int Login();

//var globais
int decisaoGlobal;
bool admOnline = false;
char logADM[20] = {"adm"};
char tipoArquivo[10] = {".txt"}; //tipo de arquivo para junção com os registros em .TXT.

char nomeLogin[20] = {""};
char Espera[1];

//var para as fases
bool PuzzleContinuaG = false; //serve para quando o jogador ja tiver passado da fase 1.

//var para registro e leitura de arquivo
char nomeLoginComCaminho[30] = {"logs/"}; // Define o caminho para a pasta de registros( logs ), para juntar com o nome do arquvivo.
//FILE *abreARegistro;
FILE *abreRegistro;
FILE *Ranking;
char nome[20];
char senha[30];
char PersN[6];
char faseAtual[20];
char QuizAtual[20];

int numF = 1;
int numQ = 1;
int NewPer = 2;
int fase = 0;

//Quiz
int Acertos;
int Erros;
int pontosQ;

//QuizChar
char AcertosC[5];
char ErrosC[5];
char PontosC[5];

bool NomeJaComCaminho;

int faseAtual2Main;
//teste de continuidade
void PassaVar2(int faseAtual2){
faseAtual2Main = faseAtual2;
}

//attDedados
void Att(){
strcat(nomeLoginComCaminho, nomeLogin);
strcat(nomeLoginComCaminho, ".txt");

abreRegistro = fopen(nomeLoginComCaminho, "r");


fscanf(abreRegistro,"Nome:%s\n", nome);
fscanf(abreRegistro,"Senha:%s\n", senha);
fscanf(abreRegistro,"Fase:%s\n", faseAtual);
fscanf(abreRegistro,"NewPers:%s\n", PersN);
fscanf(abreRegistro,"Quiz:%s\n", QuizAtual);



if (strcmp(faseAtual, "1") == 0){fase = 1;}
if (strcmp(faseAtual, "2") == 0){fase = 2;}
if (strcmp(faseAtual, "3") == 0){fase = 3;}
if (strcmp(faseAtual, "4") == 0){fase = 4;}
if (strcmp(faseAtual, "5") == 0){fase = 5;}
if (strcmp(faseAtual, "6") == 0){fase = 6;}
if (strcmp(faseAtual, "7") == 0){fase = 7;}
if (strcmp(faseAtual, "8") == 0){fase = 8;}
if (strcmp(faseAtual, "9") == 0){fase = 9;}
if (strcmp(faseAtual, "10") == 0){fase = 10;}

fcloseall;
}


//----------------------------------------------------------------------
using namespace std;

int registro(){
//var
char nomeRegister[20] = {""};
char nomeRegisterComCaminho[30] = {"logs/"}; // caminho para pasta de registros.
char senhaRegister[20] = {""};


     // abre arquivo

    printf("\n\n\t Digite seu nome de login[maximo 10 digitos]: ");
    fflush(stdin);
    gets(nomeRegister);

    //junção do nome com o caminho da pasta.
    strcat(nomeRegisterComCaminho, nomeRegister); // variavel caminho está declarada como variavel global no inicio do codigo.
    strcat(nomeRegisterComCaminho, tipoArquivo);
    //--------------------------------------

    //veridica se arquivo ja existe
    abreRegistro = fopen(nomeRegisterComCaminho, "r");
    if ((abreRegistro = fopen(nomeRegisterComCaminho, "r")) == NULL){
        printf("\n\t\t Nome disponivel");
        printf("\n\n\t Digite sua senha: ");
        gets(senhaRegister);

        //Grava dados nele
        //geração de configurações pra cada conta.
        abreRegistro = fopen(nomeRegisterComCaminho, "w+t");
        fprintf(abreRegistro, "Nome:%s\nSenha:%s\nFase:%i\nNewPers:%i\nQuiz:%i", nomeRegister, senhaRegister, numF, NewPer, numQ);
        fclose(abreRegistro);
        //-------------------------------------------------------------
        //---------------------------Ranking---------------------------
        //cria o arquivo de ranking dentro da pasta ranking
        char RankingCaminho[30] = {"ranking/"};

        strcat(RankingCaminho, nomeRegister);
        strcat(RankingCaminho, ".txt");

        Ranking = fopen(RankingCaminho, "w+t");
        fprintf(Ranking, "Acertos:%i\nErros:%i\nPontos:%i\n", Acertos, Erros, pontosQ);
        fclose(Ranking);

        //-------------------------------------------------------------
        main();
        }else{

        //Quando arquivo ja existe
        printf("\n\n\t\t Nome já está sendo usado. Faça login na tela de login ");
        Sleep(5001);
        fclose(abreRegistro);
        main();
        }

system("pause");
return 0;
}
int login(){


char senhaLogin[20] = {""};
char nomeLoginComCaminho[30] = {"logs/"};

//veridicação de senha

char senhaVerific[20];



    printf("\n\t nome: ");
    fflush(stdin);
    gets(nomeLogin);

    //junção do nome com o caminho da pasta.
    strcat(nomeLoginComCaminho, nomeLogin); // variavel caminho está declarada como variavel global no inicio do codigo.
    strcat(nomeLoginComCaminho, tipoArquivo);
    //--------------------------------------

    //verificando nome
    abreRegistro = fopen(nomeLoginComCaminho, "r");
    if ((abreRegistro = fopen(nomeLoginComCaminho, "r")) == NULL){
        printf("\n\n\t\t Usuario Não existe.");

        Sleep(3001);
        fclose(abreRegistro);
        main();
    }else{

        //Quando o nome existe.
        printf("\n\t Senha: ");
        fflush(stdin);
        gets(senhaLogin);

    printf("\n\t Verificando credenciais...");
    Sleep(2001);


    //leitura de arquivo: -------------------Global
    Att();
    //---------------------------------------------------Global

     //verificando se sao iguai
     if (strcmp(senha, senhaLogin) != 0){
        printf("\n\n\t Senha errada.");
        fclose(abreRegistro);
        Sleep(2001);
        main();

     }else{
        printf("\n\n\t Login confirmado.");
        //add aqui o menu.
        //verificar se é adm.
        if (strcasecmp(nomeLogin, logADM) == 0){
            admOnline = true;
            printf("\n\t\t\t Entrando como Administrador.");
        }

        //add aqui o menu.
        Sleep(2001);
        fclose(abreRegistro);
        menu();

     }

    }




return 0;
}

//Pontos


void MostraPontos(){
char nomeCaminhoQMain[20] = {"ranking/"};
system("cls");

strcat(nomeCaminhoQMain, nomeLogin);
strcat(nomeCaminhoQMain, ".txt");
//bool NomeJaComCaminho = true;

FILE *PontosQ;

    PontosQ = fopen(nomeCaminhoQMain, "r");
    if (fopen(nomeCaminhoQMain, "r") == NULL){printf("Nao foi possivel abrir o arquivo.\nNomeCaminhoQMain: %s", nomeCaminhoQMain);}

    fscanf(PontosQ, "Acertos:%s\nErros:%s\nPontos:%s", AcertosC, ErrosC, PontosC);


fclose(PontosQ);
//printf("\nDesempenho do jogador: %s\nPontos:%s\nAcertos:%s\nErros:%s\n", nomeLogin, PontosC, AcertosC, ErrosC);
printf("\n                                         Desempenho do jogador: %s\n                                         Acertos: %s\n                                         Erros: %s\n\n                                         Pontos: %s\n\n", nomeLogin, AcertosC, ErrosC, PontosC);



printf("\n\n\n                               Aperte enter para voltar ao menu");
fflush(stdin);
gets(Espera);

strcat(nomeCaminhoQMain, "");
}


int main(){
printf("Carregando...");

setlocale(LC_ALL, "Portuguese");
//--------
//puzzle5();
//-----
Login();
return 0;
}
int Login(){
    setlocale(LC_ALL, "Portuguese");
    //Verifica se pasta logs existe. se nao existir o sistema cria uma.

    int f = mkdir("logs");
    if (f == -1){
        printf("\n Diretorio existe");
    }else{
        printf("\n Diretorio nao existe");
        system("md logs");
        system("cls");
    }
    //-----------------------------------------------------------------

    system("cls");
    //PlaySound(TEXT("Musica Antiguo Egipto.wav"), NULL, SND_ASYNC|SND_LOOP);


    printf("\t\t\t\tBem-vindo ao projeto integrador do curso de Ciência da computação – 1P UniFagoc.\n");

    printf("\n\t1] Login");
    printf("\n\t2] registro");
    printf("\n\t Escolha do jogador: ");
    scanf("%d", &decisaoGlobal);



    switch(decisaoGlobal){
        case 1:
            login();
            break;
        case 2:
            registro();
            break;
        default:
            printf("\n\tOpção invalida.");
            break;
    }


}

void menu(){
//var
bool RunMenu = true;
PassaVar(nomeLoginComCaminho, PersN, nome, senha, faseAtual, QuizAtual); // Envia as variaveis de registro para o arquivo FunçõesFase.cpp
PassaVQuiz(nomeLogin);
Att();
//QUIZ

gravaPontos();
//----------------------------------------


    while(RunMenu){
        system("cls");
        printf("\t\t Bem-vindo ao projeto integrador, do curso “Ciência da Computação – 1p 2020 UniFagoc”");
        puts("\n\n");
        puts("\n\n");
        printf("\n\t1] Jogar Modo Quiz.");
        printf("\n\t2] Jogar Modo Puzzle.");
        printf("\n\t3] Desempenho Jogador.");
        printf("\n\t4] Informações do Jogo.");
        printf("\n\t5] Sair.");
        if (admOnline == true){
            printf("\n\n\t6]Escolher fases.");
        }
        printf("\n\n\t Escolha do jogador: ");
        scanf("%d", &decisaoGlobal);

        switch(decisaoGlobal){

        case 1:
            RunMenu = false;
            Quiz();
            break;
        case 2:
            RunMenu = false;
            Pazzle(fase);
            break;
        case 3:
            MostraPontos();

            break;
        case 4://----------------------------------------------------------------------------*
                            printf(" Este é um jogo desenvolvido por estudantes.\n");
                        for (int i = 0; i < 11; i++){
                            printf("...");
                            Sleep(300);
                        }
                        printf(" Um dia ele pode ser melhorado por outras pessoas,\n");
                        for (int i = 0; i < 11; i++){
                            printf("...");
                            Sleep(300);
                        }
                        printf("  ou talvez até mesmo pelos próprios desenvolvedores.\n");
                        printf("\n");
                        for (int i = 0; i < 11; i++){
                            printf("...");
                            Sleep(300);
                        }
                        printf(" Agradecemos por terem tirado um pouco do seu tempo \n");
                        for (int i = 0; i < 11; i++){
                            printf("...");
                            Sleep(300);
                        }
                        printf(" para aproveitar essa História, e esses desafios. \n");
                        printf("\n");
                        for (int i = 0; i < 11; i++){
                            printf("...");
                            Sleep(300);
                        }
                        printf(" Esperamos que tenham gostado do jogo!\n");
                        printf("\n");
                        for (int i = 0; i < 11; i++){
                            printf("...");
                            Sleep(300);
                        }
                        printf(" De toda equipe do projeto, para vocês curiosos.\n");
                            system("pause");
            break;//----------------------------------------------------------------------------*
        case 5:
            Sleep(600);
            main();
            break;
        if (admOnline == true){
        case 6:
            printf("\n\tPuzzle 1 a 10");
            printf("\n\tIr para o menu: 0");
            printf("\n\tEscolha do adm: ");
            scanf("%d", &decisaoGlobal);
            switch(decisaoGlobal){
            case 1: PazzleFase1(); break; case 2:PazzleFase12(); break; case 3:PuzzleFase2p1(); matarmembro(); naomatar(); break;
            case 4:PuzzleFase2p2(); break;case 5:puzzle5(); break; case 6:Puzzle6(); break; case 7:puzzle7(); break;
            case 8:puzzle8(); break;case 9:puzzle9(); break; case 10:Puzzle10(); break; case 11: menu(); break;

            default:
                printf("\n\topções de 1 a 11");
                break;
            }
            break;
        }
        default:
            printf("\n\t Opção invalida! Tente: 1, 2, 3, 4 e 5.");
            break;
        }
    }
}

//==========Quiz incio ==============
int Quiz()
{
setlocale(LC_ALL, "Portuguese");
//var global para modo QUIZ
int TQ = 1000; // Tempo padrao para algo Desenvolvimento.
int TQ1 = 1; // Tempo padrao para algo Desenvolvimento.
char QuizResp[20];
char RecQuizResp[20] = "S";
int ResuRecQuizResp;
bool initQuiz = false;



    Sleep(1500);
    system("cls");
    Sleep(TQ1);
    Sleep(TQ1);
    printf("\n   Bem vindo ao modo Quiz :)");
    Sleep(TQ1);
    printf("\n   Esse modo terá vidas, e Pula-Etapas:)");
    Sleep(TQ1);
    printf("\n   Tenha um bom proveito. :)");
    Sleep(TQ1);
    printf("\n\n                 Divirta-se...");
    Sleep(TQ1);
    printf("\n\n\t\t Iniciar Quiz? [S-N]\n\n");
    scanf("%s", &QuizResp);
    ResuRecQuizResp = strcasecmp(QuizResp, RecQuizResp);
        if (ResuRecQuizResp == 0)
        {
            initQuiz = true;
        }
        if (ResuRecQuizResp != 0)
        {
            printf("\n\n OK, Voce sera retornado ao menu inicial...");
            Sleep(1000);
            system("cls");
            Sleep(1500);
            menu();
        }
            if (initQuiz == true)
            {   //inicio do jogo

                Sleep(1500);
                system("cls");
                Sleep(1500);
                printf("          Iniciando Quiz...");
                Sleep(1500);
                system("cls");
                Sleep(1500);
                system("cls");
                //printf("     ...Quiz 1...         ...Vida [indisponivel]...    ...Pula-Etapas [indisponivel]... \n\n");
                 printf("     \n\n");
                 TituloDoJogo();
                system("cls");
                SteveIntroducao();
                system("pause");
                EscolheDificuldade();
            }
return 0;
}
//==========Quiz fim ==============


//==========Puzzle incio ==============
int Pazzle(int fase){
setlocale(LC_ALL, "Portuguese");
//Var global para MODO PAZZLE
int T = 2000; // Variavel para tempo do texto da historia - Apenas para desenvolvimento.
int T1 = 30001; // Variavel para tempo do texto da historia - Apenas para desenvolvimento.
char PazzleRP[20];
char RecPazzleRP[20] = "S";
int resultRecPazzle;
bool PazzleInit = false;

Att();//Atualização de registro para as variaveis

if (fase > 1 && fase <= 10){
        printf("\n\n");
        printf("\n\t1]Continuar.");
        printf("\n\t2]Novo Jogo.");
        printf("\n\t0]Voltar.");
        scanf("%i", &decisaoGlobal);

        switch(decisaoGlobal){
    case 1:
        PuzzleContinuaG = true;
        break;
    case 2:
        printf("\nIniciando jogo novo!");
        fase = 1;
        break;
    case 0:
        menu();
        break;
    default:
        printf("\nOpção invalida.");
        Sleep(2001);
        break;
        }

}

    Sleep(2000);
    system("cls");
    printf("Bem-vindo ao Modo Puzzle :)\n");
    Sleep (1001);
    printf("O modo terá história, não terá tempo ... não em todas as fazes, \n nem vida. Fique à vontade para ler a história e pensar bastante :) \n");
    Sleep (1001);
    printf("\n\t  iniciar jogo? [S - N]\n");
    scanf("%s", &PazzleRP);
    Sleep (1000);
        if (strcasecmp(PazzleRP, "S") == 0){
            PazzleInit = true;
        }else{
        printf("\n\n OK, Voce sera retornado ao menu inicial...");
        Sleep(1000);
        system("cls");
        Sleep(1500);
        menu();
        }
            if (PazzleInit == true)
            {

            system("cls");

            if (PuzzleContinuaG == false){

                printf("          Inciando pazzle...");
                Sleep(2000);
                system("cls");
                system("color 0B");
                printf("                                                                                                    ...prólogo...\n\n");
                Sleep(3000);
                HistoriaPart1();
                system("color 0B");
                Sleep(T);
                HistoriaPart2();
                Sleep(T);
                HistoriaPart3();
                Sleep(T);
                HistoriaPart4();
                system("pause");
                system("cls");
                printf("                                                                                                    ...Fase 1...\n\n");
                Sleep(3000);
                HistoriaFase1Part1();
                Sleep(T);
                HistoriaFase1Part2();
                system("pause");
                system("cls");
                printf("                                                                                                    pazzle Fase 1:\n\n");
                HistoriaFase1Part3();


                //puzzle 1 fase 1
                PazzleFase1();

            }
            Att();
            //----------------------puzzle 2 fase 1
            if (fase == 2 || faseAtual2Main == 2){
            PazzleFase12();
            }
            //Att();

            if (((strcasecmp(PersN, "2") == 0) && (fase == 3)) ||((strcasecmp(PersN, "2") == 0) && (faseAtual2Main == 3))){
            //----------------------
                //indo para fase 2
                printf("\n                ... Barulho auto de algo sendo arrastado ...");
                Sleep(2001);
                system("cls");
                Sleep(1001);
                printf("\n                Todos estão vendo isso... realmente era um desafio para sairmos deste lugar... ");
                printf("\n                Vamos, vamos ... – Gritou Ana.");
                Sleep(3001);
                system("cls");
                soHistRenderFase2P1();
                Sleep(T1);
                system("pause");
                system("cls");
                soHistRenderFase2P2();
                Sleep(T1);
                system("pause");
                system("cls");
            }
            //------------------------

            //Puzzle 3 fase 2
            if (fase == 3 || faseAtual2Main == 3){
                if (strcasecmp(PersN, "2") == 0){
            PuzzleFase2p1();

            }}
            Att();
            if ((PuzzleContinuaG == true && fase == 3) ||(PuzzleContinuaG == true && faseAtual2Main == 3)){
                if(strcasecmp(PersN, "2") != 0){
            matarmembro();
            naomatar();
            }}
            Att();
            //----------------------
            //puzzle 4 fase 2
            if (fase == 4 || faseAtual2Main == 4){
            PuzzleFase2p2();

            }
            Att();
            //----------------------------
            //fase 3
            /*
            if (decisaoGlobal == 125){

            //Espaço para a história
            Sleep(1001);
            system("cls");
            printf("\n\nParte da história ainda nao feita");
            Sleep(3001);
            system("cls");
            }*/
            //Puzzle 5
            if (fase == 5 || faseAtual2Main == 5){
            puzzle5();
            }
            //-------------------------------------------------
            /*if (decisaoGlobal == 125){

            //Espaço para a história
            Sleep(1001);
            system("cls");
            printf("\n\nParte da história ainda nao feita");
            Sleep(3001);
            system("cls");
            }*/
            //Puzzle 6
            if (fase == 6 || faseAtual2Main == 6){
            Puzzle6();
            }
            //-------------------------------------------------
            //--------------------------------------------------------------------------------------------------------------------------------------


            //fase 4
            //Puzzle 7
            if (fase == 7 || faseAtual2Main == 7){
            puzzle7();
            }
            //-------------------------------------------------
            //Puzzle 8
            if (fase == 8 || faseAtual2Main == 8){
            puzzle8();
            }
            //-------------------------------------------------
            //--------------------------------------------------------------------------------------------------------------------------------------
            //Puzzle 9
            if (fase == 8 || faseAtual2Main == 9){
            puzzle9();
            }
            //--------------------------------------------------
            //Puzzle 10
            if (fase == 10 || faseAtual2Main == 10){
            Puzzle10();
            }
            //--------------------------------------------------
}
return 0;
}

//==========Puzzle Final ==============
