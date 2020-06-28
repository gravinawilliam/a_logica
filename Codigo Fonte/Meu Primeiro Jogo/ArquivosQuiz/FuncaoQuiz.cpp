#include "../RotaQuiz.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "locale.h"
//Declarando funcoes
int main();
void menu();
int funcaoCronometro();
int TituloDoJogotext();
int EscolheDificuldadetext();
int SteveIntroducaotext();
int SteveAcertouPerguntatext();
int SteveErrouPerguntatext();
int StevePerdeuJogotext();
int StevePulaEtapastext();
int PerguntaPulaEtapastext();
int PerguntaJogarNovamentetext();
int QuizParte1text();
int QuizParte2text();
int QuizParte3text();
int QuizParte4text();
int QuizParte5text();
int QuizParte6text();
int QuizParte7text();
int QuizParte8text();
int QuizParte9text();
int QuizParte10text();
//Modo Quiz

int vida = 0;
int pulaEtapa = 0;
int pegaResposta;
int jogarNovamente = 0;
int dificuldade = 0;
int pontosJogador = 0;
int pontosAcertar;
int pontosErrar;

//Variaveis para gravação de arquivo
int acertosQ = 0;
int errosQ = 0;




int TituloDoJogo(){
    TituloDoJogotext();
    Sleep(700);
    system("cls");
    TituloDoJogotext();
    Sleep(700);
    system("cls");
    TituloDoJogotext();
    Sleep(4000);

    return 0;
}

int SteveIntroducao(){
    SteveIntroducaotext();

    return 0;
}

int EscolheDificuldade(){
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    EscolheDificuldadetext();
    printf("Digite sua escolha: ");
    scanf("%i", &dificuldade);
    switch (dificuldade)
    {
    case 1: // facil
        vida = 4;
        pulaEtapa = 2;
        pontosAcertar = 10;
        pontosErrar = 5;
        break;
    case 2: // medio
        vida = 2;
        pulaEtapa = 1;
        pontosAcertar = 15;
        pontosErrar = 10;
        break;
    case 3: // dificil
        vida = 1;
        pulaEtapa = 0;
        pontosAcertar = 20;
        pontosErrar = 20;
        break;
    default:
        EscolheDificuldade();
        break;
    }
    pontosJogador = 0;
    QuizParte1();
    system("cls");
    QuizParte2();
    system("cls");
    QuizParte3();
    system("cls");
    QuizParte4();
    system("cls");
    QuizParte5();
    system("cls");
    QuizParte6();
    system("cls");
    QuizParte7();
    system("cls");
    QuizParte8();
    system("cls");
    QuizParte9();
    system("cls");
    QuizParte10();
    system("cls");
    QuizParte11();
    system("cls");
    QuizParte12();


    return 0;
}

int JogarNovamente(){
    PerguntaJogarNovamentetext();
    printf("Digite sua escolha: ");
    scanf("%i", &jogarNovamente);
    if(jogarNovamente == 1){
        EscolheDificuldade();
    }
    if (jogarNovamente == 2){
        printf("você será retornado ao menu");
        Sleep(3000);
        main();
    }
    return 0;
}




//var
char nomeCaminhoQ[20] = {"ranking/"};
void PassaVQuiz(char nomeLogin[20]){
    strcat(nomeCaminhoQ, nomeLogin);
    strcat(nomeCaminhoQ, ".txt");
}

void gravaPontos(){
FILE* QuizPontos;
    QuizPontos = fopen(nomeCaminhoQ, "r+");
    if (fopen(nomeCaminhoQ, "r+") == NULL){
        printf("\nNao foi possivel achar o arquivo");
        printf("\nNOME COM CAMINHO: %s", nomeCaminhoQ);
    }
    fprintf(QuizPontos, "Acertos:%i\nErros:%i\nPontos:%i", acertosQ, errosQ, pontosJogador);
fclose(QuizPontos);
}

int QuizParte1() //fase 1
{
    setlocale(LC_ALL, "Portuguese");
    gravaPontos();
    system ("cls");
    //inciando jogo
    printf("     ...Quiz 1...   ... %i Vidas ...  ... %i Pontos ...  ... %i Pular Quiz ... \n\n", vida, pontosJogador, pulaEtapa);
    QuizParte1text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 1: // resposta certa
        pontosJogador += pontosAcertar;
        acertosQ++;
        SteveAcertouPerguntatext();
        Sleep(2000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 2:\n");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            QuizParte1();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
            system("pause");
        }

        break;
    default:
        if(vida == 0)
        {
            StevePerdeuJogotext(); // mudar o nome do arquivo para stevePerdeuText
            system("pause");
            system ("cls");
            JogarNovamente();
        }else{
            pontosJogador -= pontosErrar;
            SteveErrouPerguntatext();
            system("pause");
            system("cls");
            vida--;
            errosQ++;
            gravaPontos();
        }
        if(pontosJogador < 0){
            pontosJogador = 0;
        }

        QuizParte1();
    }

    gravaPontos();
    return 0;
}
int QuizParte2() //fase 2
{
    system ("cls");
    //inciando jogo
    printf("     ...Quiz 2...   ... %i Vidas ...  ... %i Pontos ...  ... %i Pula Perguntas ... \n\n", vida, pontosJogador, pulaEtapa);
    QuizParte2text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 3: // resposta certa
        pontosJogador += pontosAcertar;
        acertosQ++;
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(2000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 3:\n");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            QuizParte2();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
        }

        break;
    default:
        if(vida == 1)
        {
            StevePerdeuJogotext(); // mudar o nome do arquivo para stevePerdeuText
            system("pause");
            system ("cls");
            JogarNovamente();
        }else{
            pontosJogador -= pontosErrar;
            SteveErrouPerguntatext();
            system("pause");
            system("cls");
            vida--;
            errosQ++;
            gravaPontos();
        }
        if(pontosJogador < 0){
            pontosJogador = 0;
        }
        QuizParte2();
    }
    gravaPontos();

    return 0;
}
int QuizParte3() //fase 3
{
    system ("cls");
    //inciando jogo
    printf("     ...Quiz 3...   ... %i Vidas ...  ... %i Pontos ...  ... %i Pula Perguntas ... \n\n", vida, pontosJogador, pulaEtapa);
    QuizParte3text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 2: // resposta certa
        pontosJogador += pontosAcertar;
        acertosQ++;
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(2000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 4:\n");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
             printf("\nNão pode pular etapa\n");
            QuizParte3();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
        }
        break;
    default:
        if(vida == 1)
        {
            StevePerdeuJogotext();
            system("pause");
            system ("cls");
            JogarNovamente();
        }else{
            pontosJogador -= pontosErrar;
            SteveErrouPerguntatext();
            system("pause");
            system("cls");
            vida--;
            errosQ++;
            gravaPontos();
        }
        if(pontosJogador < 0){
            pontosJogador = 0;
        }
        QuizParte3();
    }

    gravaPontos();
    return 0;
}
int QuizParte4() //fase 4
{
    system ("cls");
    //inciando jogo

    printf("     ...Quiz 4...   ... %i Vidas ...  ... %i Pontos ...  ... %i Pula Perguntas ... \n\n", vida, pontosJogador, pulaEtapa);
    QuizParte4text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 1: // resposta certa
        pontosJogador += pontosAcertar;
        acertosQ++;
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(2000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 5:\n");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            QuizParte4();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
        }

        break;
    default:
        if(vida == 1)
        {
            StevePerdeuJogotext();
            system("pause");
            system ("cls");
            JogarNovamente();
        }else{
            pontosJogador -= pontosErrar;
            SteveErrouPerguntatext();
            system("pause");
            system("cls");
            vida--;
            errosQ++;
            gravaPontos();
        }
        if(pontosJogador < 0){
            pontosJogador = 0;
        }
        QuizParte4();
    }

    gravaPontos();
    return 0;
}

int QuizParte5() //fase 5
{
    system ("cls");
    //inciando jogo

    printf("     ...Quiz 5...   ... %i Vidas ...  ... %i Pontos ...  ... %i Pula Perguntas ... \n\n", vida, pontosJogador, pulaEtapa);
    QuizParte5text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 1: // resposta certa
        pontosJogador += pontosAcertar;
        acertosQ++;
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(2000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 6:\n");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            QuizParte5();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
        }

        break;
    default:
        if(vida == 1)
        {
            StevePerdeuJogotext();
            system("pause");
            system ("cls");
            JogarNovamente();
        }else{
            pontosJogador -= pontosErrar;
            SteveErrouPerguntatext();
            system("pause");
            system("cls");
            vida--;
            errosQ++;
            gravaPontos();
        }
        if(pontosJogador < 0){
            pontosJogador = 0;
        }
        QuizParte5();
    }

    gravaPontos();
    return 0;
}

int QuizParte6() //fase 4
{
    system ("cls");
    //inciando jogo

    printf("     ...Quiz 6...   ... %i Vidas ...  ... %i Pontos ...  ... %i Pular Quiz ... \n\n", vida, pontosJogador, pulaEtapa);
    QuizParte6text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 4: // resposta certa
        pontosJogador += pontosAcertar;
        acertosQ++;
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(2000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 7:\n");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            QuizParte6();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
        }

        break;
    default:
        if(vida == 1)
        {
            StevePerdeuJogotext();
            system("pause");
            system ("cls");
            JogarNovamente();
        }else{
            pontosJogador -= pontosErrar;
            SteveErrouPerguntatext();
            system("pause");
            system("cls");
            vida--;
            errosQ++;
            gravaPontos();
        }
        if(pontosJogador < 0){
            pontosJogador = 0;
        }
        QuizParte6();
    }

    gravaPontos();
    return 0;
}

int QuizParte7() //fase 4
{
    system ("cls");
    //inciando jogo

    printf("     ...Quiz 7...   ... %i Vidas ...  ... %i Pontos ...  ... %i Pular Quiz ... \n\n", vida, pontosJogador, pulaEtapa);
    QuizParte7text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 3: // resposta certa
        pontosJogador += pontosAcertar;
        acertosQ++;
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(2000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 8:\n");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            QuizParte7();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
        }

        break;
    default:
        if(vida == 1)
        {
            StevePerdeuJogotext();
            system("pause");
            system ("cls");
            JogarNovamente();
        }else{
            pontosJogador -= pontosErrar;
            SteveErrouPerguntatext();
            system("pause");
            system("cls");
            vida--;
            errosQ++;
            gravaPontos();
        }
        if(pontosJogador < 0){
            pontosJogador = 0;
        }
        QuizParte7();
    }

    gravaPontos();
    return 0;
}

int QuizParte8() //fase 4
{
    system ("cls");
    //inciando jogo

    printf("     ...Quiz 8...   ... %i Vidas ...  ... %i Pontos ...  ... %i Pular Quiz ... \n\n", vida, pontosJogador, pulaEtapa);
    QuizParte8text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 4: // resposta certa
        pontosJogador += pontosAcertar;
        acertosQ++;
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(2000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 9:\n");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            QuizParte8();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
        }

        break;
    default:
        if(vida == 1)
        {
            StevePerdeuJogotext();
            system("pause");
            system ("cls");
            JogarNovamente();
        }else{
            pontosJogador -= pontosErrar;
            SteveErrouPerguntatext();
            system("pause");
            system("cls");
            vida--;
            errosQ++;
            gravaPontos();
        }
        if(pontosJogador < 0){
            pontosJogador = 0;
        }
        QuizParte8();
    }

    gravaPontos();
    return 0;
}

int QuizParte9() //fase 4
{
    system ("cls");
    //inciando jogo

    printf("     ...Quiz 9...   ... %i Vidas ...  ... %i Pontos ...  ... %i Pular Quiz ... \n\n", vida, pontosJogador, pulaEtapa);
    QuizParte9text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 4: // resposta certa
        pontosJogador += pontosAcertar;
        acertosQ++;
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(2000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 10:\n");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            QuizParte9();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
        }

        break;
    default:
        if(vida == 1)
        {
            StevePerdeuJogotext();
            system("pause");
            system ("cls");
            JogarNovamente();
        }else{
            pontosJogador -= pontosErrar;
            SteveErrouPerguntatext();
            system("pause");
            system("cls");
            vida--;
            errosQ++;
            gravaPontos();
        }
        if(pontosJogador < 0){
            pontosJogador = 0;
        }
        QuizParte9();
    }

    gravaPontos();
    return 0;
}

int QuizParte10() //fase 4
{
    system ("cls");
    //inciando jogo

    printf("     ...Quiz 10...   ... %i Vidas ...  ... %i Pontos ...  ... %i Pular Quiz ... \n\n", vida, pontosJogador, pulaEtapa);
    QuizParte10text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 2: // resposta certa
        pontosJogador += pontosAcertar;
        acertosQ++;
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(2000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 11:\n");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            QuizParte10();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
        }

        break;
    default:
        if(vida == 1)
        {
            StevePerdeuJogotext();
            system("pause");
            system ("cls");
            JogarNovamente();
        }else{
            pontosJogador -= pontosErrar;
            SteveErrouPerguntatext();
            system("pause");
            system("cls");
            vida--;
            errosQ++;
            gravaPontos();
        }
        if(pontosJogador < 0){
            pontosJogador = 0;
        }
        QuizParte10();
    }

    gravaPontos();
    return 0;
}

int QuizParte11() //fase 4
{
    system ("cls");
    //inciando jogo

    printf("     ...Quiz 11...   ... %i Vidas ...  ... %i Pontos ...  ... %i Pular Quiz ... \n\n", vida, pontosJogador, pulaEtapa);
    QuizParte11text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 3: // resposta certa
        pontosJogador += pontosAcertar;
        acertosQ++;
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(2000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 12:\n");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            QuizParte11();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
        }

        break;
    default:
        if(vida == 1)
        {
            StevePerdeuJogotext();
            system("pause");
            system ("cls");
            JogarNovamente();
        }else{
            pontosJogador -= pontosErrar;
            SteveErrouPerguntatext();
            system("pause");
            system("cls");
            vida--;
            errosQ++;
            gravaPontos();
        }
        if(pontosJogador < 0){
            pontosJogador = 0;
        }
        QuizParte11();
    }

    gravaPontos();
    return 0;
}

int QuizParte12() //fase 4
{
    system ("cls");
    //inciando jogo

    printf("     ...Quiz 12...   ... %i Vidas ...  ... %i Pontos ...  ... %i Pular Quiz ... \n\n", vida, pontosJogador, pulaEtapa);
    QuizParte12text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 3: // resposta certa
        pontosJogador += pontosAcertar;
        acertosQ++;
        SteveGanhouJogotext();
        Sleep(2000);
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nN�o pode pular etapa\n");
            QuizParte12();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
        }

        break;
    default:
        if(vida == 1)
        {
            StevePerdeuJogotext();
            system("pause");
            system ("cls");
            JogarNovamente();
        }else{
            pontosJogador -= pontosErrar;
            SteveErrouPerguntatext();
            system("pause");
            system("cls");
            vida--;
            errosQ++;
            gravaPontos();
        }
        if(pontosJogador < 0){
            pontosJogador = 0;
        }
        QuizParte12();
    }
    gravaPontos();
    return 0;
}
