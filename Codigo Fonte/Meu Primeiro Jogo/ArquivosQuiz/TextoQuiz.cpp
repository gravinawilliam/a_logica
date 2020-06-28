#include "../RotaQuiz.h"

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "locale.h"

//part 1 ===========================================

int EscolheDificuldadetext()
{
    FILE *EscolheDificuldade;
    char textoEscolheDificuldade[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    EscolheDificuldade = fopen("textos/Quizz/escolheDificuldade.txt", "r");

    while(fgets(textoEscolheDificuldade, 20, EscolheDificuldade) !=NULL){
        printf("%s", textoEscolheDificuldade);
    }
    printf(" \n\n");
    fclose(EscolheDificuldade);

return 0;
}

int TituloDoJogotext()
{
    FILE *TituloDoJogo;
    char textoTituloDoJogo[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    TituloDoJogo = fopen("textos/Quizz/tituloJogo.txt", "r");

    while(fgets(textoTituloDoJogo, 20, TituloDoJogo) !=NULL){
        printf("%s", textoTituloDoJogo);
    }
    printf(" \n\n");
    fclose(TituloDoJogo);



return 0;
}

int PerguntaJogarNovamentetext()
{
    FILE *PerguntaJogarNovamente;
    char textoPJogarNovamente[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    PerguntaJogarNovamente = fopen("textos/Quizz/PerguntaJogarNovamente.txt", "r");

    while(fgets(textoPJogarNovamente, 20, PerguntaJogarNovamente) !=NULL){
        printf("%s", textoPJogarNovamente);
    }
    printf(" \n\n");
    fclose(PerguntaJogarNovamente);



return 0;
}

int PerguntaPulaEtapastext()
{
    FILE *PerguntaPulaEtapas;
    char textoPPulaEtapas[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    PerguntaPulaEtapas = fopen("textos/Quizz/PerguntaPulaEtapas.txt", "r");

    while(fgets(textoPPulaEtapas, 20, PerguntaPulaEtapas) !=NULL){
        printf("%s", textoPPulaEtapas);
    }
    printf(" \n\n");
    fclose(PerguntaPulaEtapas);



return 0;
}

int SteveIntroducaotext()
{
    FILE *SteveIntroducao;
    char textoSIntroducao[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    SteveIntroducao = fopen("textos/Quizz/steveIntroducao.txt", "r");

    while(fgets(textoSIntroducao, 20, SteveIntroducao) !=NULL){
        printf("%s", textoSIntroducao);
    }
    printf(" \n\n");
    fclose(SteveIntroducao);



return 0;
}

int SteveAcertouPerguntatext()
{
    FILE *SteveAcertou;
    char textoSAcertou[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    SteveAcertou = fopen("textos/Quizz/steveAcertou.txt", "r");

    while(fgets(textoSAcertou, 20, SteveAcertou) !=NULL){
        printf("%s", textoSAcertou);
    }
    printf(" \n\n");
    fclose(SteveAcertou);



return 0;
}

int SteveErrouPerguntatext()
{
    FILE *SteveErrou;
    char textoSErrou[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    SteveErrou = fopen("textos/Quizz/steveErrou.txt", "r");

    while(fgets(textoSErrou, 20, SteveErrou) !=NULL){
        printf("%s", textoSErrou);
    }
    printf(" \n\n");
    fclose(SteveErrou);



return 0;
}


int StevePerdeuJogotext()
{
    FILE *StevePerdeu;
    char textoSPerdeu[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    StevePerdeu = fopen("textos/Quizz/stevePerdeu.txt", "r");

    while(fgets(textoSPerdeu, 20, StevePerdeu) !=NULL){
        printf("%s", textoSPerdeu);
    }
    printf(" \n\n");
    fclose(StevePerdeu);



return 0;
}

int SteveGanhouJogotext()
{
    FILE *SteveGanhou;
    char textoSGanhou[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    SteveGanhou = fopen("textos/Quizz/steveGanhou.txt", "r");

    while(fgets(textoSGanhou, 20, SteveGanhou) !=NULL){
        printf("%s", textoSGanhou);
    }
    printf(" \n\n");
    fclose(SteveGanhou);



return 0;
}

int StevePulaEtapastext()
{
    FILE *StevePulaEtapas;
    char textoSPulaEtapas[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    StevePulaEtapas = fopen("textos/Quizz/stevePulaEtapa.txt", "r");

    while(fgets(textoSPulaEtapas, 20, StevePulaEtapas) !=NULL){
        printf("%s", textoSPulaEtapas);
    }
    printf(" \n\n");
    fclose(StevePulaEtapas);



return 0;
}




int QuizParte1text()
{
    FILE *QuizzParte1;
    char textoQ1[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte1 = fopen("textos/Quizz/quiz1.txt", "r");

    while(fgets(textoQ1, 20, QuizzParte1) !=NULL){
        printf("%s", textoQ1);
    }
    printf(" \n\n");
    fclose(QuizzParte1);



return 0;
}


//part 2 ===========================================
int QuizParte2text()
{
    FILE *QuizzParte2;
    char textoQ2[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte2 = fopen("textos/Quizz/quiz2.txt", "r");

    while(fgets(textoQ2, 20, QuizzParte2) !=NULL){
        printf("%s", textoQ2);
    }
    printf(" \n\n");
    fclose(QuizzParte2);



return 0;
}

int QuizParte3text()
{
    FILE *QuizzParte3;
    char textoQ3[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte3 = fopen("textos/Quizz/quiz3.txt", "r");

    while(fgets(textoQ3, 20, QuizzParte3) !=NULL){
        printf("%s", textoQ3);
    }
    printf(" \n\n");
    fclose(QuizzParte3);



return 0;
}

int QuizParte4text()
{
    FILE *QuizzParte4;
    char textoQ4[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte4 = fopen("textos/Quizz/quiz4.txt", "r");

    while(fgets(textoQ4, 20, QuizzParte4) !=NULL){
        printf("%s", textoQ4);
    }
    printf(" \n\n");
    fclose(QuizzParte4);



return 0;
}

int QuizParte5text()
{
    FILE *QuizzParte5;
    char textoQ5[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte5 = fopen("textos/Quizz/quiz5.txt", "r");

    while(fgets(textoQ5, 20, QuizzParte5) !=NULL){
        printf("%s", textoQ5);
    }
    printf(" \n\n");
    fclose(QuizzParte5);



return 0;
}

int QuizParte6text()
{
    FILE *QuizzParte6;
    char textoQ6[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte6 = fopen("textos/Quizz/quiz6.txt", "r");

    while(fgets(textoQ6, 20, QuizzParte6) !=NULL){
        printf("%s", textoQ6);
    }
    printf(" \n\n");
    fclose(QuizzParte6);



return 0;
}

int QuizParte7text()
{
    FILE *QuizzParte7;
    char textoQ7[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte7 = fopen("textos/Quizz/quiz7.txt", "r");

    while(fgets(textoQ7, 20, QuizzParte7) !=NULL){
        printf("%s", textoQ7);
    }
    printf(" \n\n");
    fclose(QuizzParte7);

return 0;
}

int QuizParte8text()
{
    FILE *QuizzParte8;
    char textoQ8[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte8 = fopen("textos/Quizz/quiz8.txt", "r");

    while(fgets(textoQ8, 20, QuizzParte8) !=NULL){
        printf("%s", textoQ8);
    }
    printf(" \n\n");
    fclose(QuizzParte8);



return 0;
}

int QuizParte9text()
{
    FILE *QuizzParte9;
    char textoQ9[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte9 = fopen("textos/Quizz/quiz9.txt", "r");

    while(fgets(textoQ9, 20, QuizzParte9) !=NULL){
        printf("%s", textoQ9);
    }
    printf(" \n\n");
    fclose(QuizzParte9);



return 0;
}

int QuizParte10text()
{
    FILE *QuizzParte10;
    char textoQ10[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte10 = fopen("textos/Quizz/quiz10.txt", "r");

    while(fgets(textoQ10, 20, QuizzParte10) !=NULL){
        printf("%s", textoQ10);
    }
    printf(" \n\n");
    fclose(QuizzParte10);



return 0;
}

int QuizParte11text()
{
    FILE *QuizzParte11;
    char textoQ11[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte11 = fopen("textos/Quizz/quiz11.txt", "r");

    while(fgets(textoQ11, 20, QuizzParte11) !=NULL){
        printf("%s", textoQ11);
    }
    printf(" \n\n");
    fclose(QuizzParte11);



return 0;
}

int QuizParte12text()
{
    FILE *QuizzParte12;
    char textoQ12[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte12 = fopen("textos/Quizz/quiz12.txt", "r");

    while(fgets(textoQ12, 20, QuizzParte12) !=NULL){
        printf("%s", textoQ12);
    }
    printf(" \n\n");
    fclose(QuizzParte12);



return 0;
}




