#include "../rotasPuzzle.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "locale.h"

//Historia Do Puzzle
int t = 10;
FILE *HistoriaArquivo;
int HistoriaPart1()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    FILE *HistoriaP1;
    char textoHP1[20];


    HistoriaP1 = fopen("textos/Historia/HistoriaP1.txt", "r");

    while(fgets(textoHP1, 4, HistoriaP1) !=NULL){
        Sleep(t);
        printf("%s", textoHP1);
    }
    printf(" \n\n");
    fclose(HistoriaP1);
    return 0;
}

int HistoriaPart2()
{
    FILE *HistoriaP2;
    char textoHP2[20];


    HistoriaP2 = fopen("textos/Historia/HistoriaP2.txt", "r");

    while(fgets(textoHP2, 4, HistoriaP2) !=NULL){
        Sleep(t);
        printf("%s", textoHP2);
    }
    printf(" \n\n");
    fclose(HistoriaP2);
    return 0;
}

int HistoriaPart3()
{
    FILE *HistoriaP3;
    char textoHP3[20];


    HistoriaP3 = fopen("textos/Historia/HistoriaP3.txt", "r");

    while(fgets(textoHP3, 4, HistoriaP3) !=NULL){
        Sleep(t);
        printf("%s", textoHP3);
    }
    printf(" \n\n");
    fclose(HistoriaP3);
    return 0;
}

int HistoriaPart4()
{
    FILE *HistoriaP4;
    char textoHP4[20];


    HistoriaP4 = fopen("textos/Historia/HistoriaP4.txt", "r");

    while(fgets(textoHP4, 4, HistoriaP4) !=NULL){
            Sleep(t);
        printf("%s", textoHP4);
    }
    printf(" \n\n");
    fclose(HistoriaP4);
    return 0;
}

//Historia Fase 1 – texto 1/2
int HistoriaFase1Part1()
{
    FILE *HistoriaP1_F1;
    char textoHP1_F1[20];


    HistoriaP1_F1 = fopen("textos/Pazzle/fase1/HistoriaP1Fase1.txt", "r");

    while(fgets(textoHP1_F1, 20, HistoriaP1_F1) !=NULL){
        printf("%s", textoHP1_F1);
    }
    printf(" \n\n");
    fclose(HistoriaP1_F1);
    return 0;
}

int HistoriaFase1Part2()
{
    FILE *HistoriaP2_F1;
    char textoHP2_F1[20];


    HistoriaP2_F1 = fopen("textos/Pazzle/fase1/HistoriaP2Fase1.txt", "r");

    while(fgets(textoHP2_F1, 20, HistoriaP2_F1) !=NULL){
        printf("%s", textoHP2_F1);
    }
    printf(" \n\n");
    fclose(HistoriaP2_F1);
    return 0;
}
int HistoriaFase1Part3() // Pazzle fase 1
{
    FILE *HistoriaP3_F1;
    char textoHP3_F1[20];


    HistoriaP3_F1 = fopen("textos/Pazzle/fase1/HistoriaP3Fase1.txt", "r");

    while(fgets(textoHP3_F1, 20, HistoriaP3_F1) !=NULL){
        printf("%s", textoHP3_F1);
    }
    printf(" \n\n");
    fclose(HistoriaP3_F1);
    return 0;
}

int HistoriaFase12Part1() // Pazzle fase 1
{
    FILE *HistoriaP1_F12;
    char textoHP1_F12[20];


    HistoriaP1_F12 = fopen("textos/Pazzle/fase1/HistoriaP1Fase12.txt", "r");

    while(fgets(textoHP1_F12, 20, HistoriaP1_F12) !=NULL){
        printf("%s", textoHP1_F12);
    }
    printf(" \n\n");
    fclose(HistoriaP1_F12);
    return 0;
}

int HistoriaFase12Part2() // Pazzle fase 1
{
    FILE *HistoriaP2_F12;
    char textoHP2_F12[20];


    HistoriaP2_F12 = fopen("textos/Pazzle/fase1/HistoriaP2Fase12.txt", "r");

    while(fgets(textoHP2_F12, 20, HistoriaP2_F12) !=NULL){
        printf("%s", textoHP2_F12);
    }
    printf(" \n\n");
    fclose(HistoriaP2_F12);
    return 0;
}
//=====Fase2.2=======
int HistoriaFase22Part2() // Pazzle fase 2
{
    FILE *HistoriaP2_F22;
    char textoHP2_F22[20];


    HistoriaP2_F22 = fopen("textos/Pazzle/fase1/HistoriaP2Fase12.txt", "r");

    while(fgets(textoHP2_F22, 20, HistoriaP2_F22) !=NULL){
        printf("%s", textoHP2_F22);
    }
    printf(" \n\n");
    fclose(HistoriaP2_F22);
    return 0;
}
//=======Render Historia indo para a fase 2 part 1===========
int soHistRenderFase2P1() // Pazzle fase 2
{
    FILE *soHistFase2Part1;
    char text_hist_f2P1[20];


    soHistFase2Part1 = fopen("textos/Historia/HistoriaP5.txt", "r");

    while(fgets(text_hist_f2P1, 4, soHistFase2Part1) !=NULL){
        Sleep(t);
        printf("%s", text_hist_f2P1);
    }
    printf(" \n\n");
    fclose(soHistFase2Part1);
    return 0;
}
//=======Render Historia indo para a fase 2 part 2===========
int soHistRenderFase2P2() // Pazzle fase 2
{
    FILE *soHistFase2Part2;
    char text_hist_f2P2[20];


    soHistFase2Part2 = fopen("textos/Historia/HistoriaP6.txt", "r");

    while(fgets(text_hist_f2P2, 4, soHistFase2Part2) !=NULL){
        Sleep(t);
        printf("%s", text_hist_f2P2);
    }
    printf(" \n\n");
    fclose(soHistFase2Part2);
    return 0;
}

//Render Textos da fase 2 puzzle 1
//Decisao 1

int Decisao1TextRenderFase2Puzzle1(){

    FILE* tex_fase2_puzzle1p1;
    char tex_f2pu1_p1[20];

    tex_fase2_puzzle1p1 = fopen("textos/Pazzle/fase2/Puzzle1/1Puzzle1P1.txt", "r");


    while(fgets(tex_f2pu1_p1, 20, tex_fase2_puzzle1p1) !=NULL){
        printf("%s", tex_f2pu1_p1);
    }
    printf(" \n\n");
    fclose(tex_fase2_puzzle1p1);
return 0;
}
//Decisao 2 (d2)
int Decisao2TextRenderFase2Puzzle1(){

    FILE* d2tex_fase2_puzzle1p1;
    char d2tex_f2pu1_p1[20];

    d2tex_fase2_puzzle1p1 = fopen("textos/Pazzle/fase2/Puzzle1/2Puzzle1P1.txt", "r");

    while(fgets(d2tex_f2pu1_p1, 20, d2tex_fase2_puzzle1p1) != NULL){
        printf("%s", d2tex_f2pu1_p1);
    }
    printf(" \n\n");
    fclose(d2tex_fase2_puzzle1p1);
return 0;
}

// Fase 2 Puzzle 2
int TextRenderFase2Puzzle2P1() // Pazzle fase 2
{

    FILE *tex_fase2_puzzle2;
    char tex_fase2_p2_string[20];


    tex_fase2_puzzle2 = fopen("textos/Pazzle/fase2/Puzzle2/Puzzle2P1.txt", "r");

    while(fgets(tex_fase2_p2_string, 20, tex_fase2_puzzle2) !=NULL){
        printf("%s", tex_fase2_p2_string);
    }
    printf(" \n\n");
    fclose(tex_fase2_puzzle2);
    return 0;
}
int TextRenderFase2Puzzle2P2() // Pazzle fase 2
{
    FILE *tex_fase2_puzzle2P2;
    char tex_fase2_p2_stringP2[20];


    tex_fase2_puzzle2P2 = fopen("textos/Pazzle/fase2/Puzzle2/Puzzle2P2.txt", "r");

    while(fgets(tex_fase2_p2_stringP2, 20, tex_fase2_puzzle2P2) !=NULL){
        printf("%s", tex_fase2_p2_stringP2);
    }
    printf(" \n\n");
    fclose(tex_fase2_puzzle2P2);
    return 0;
}

int EstruturaP2F2(){

    FILE *Estruct_F2P2;
    char EstructChar_F2P2[20];

    Estruct_F2P2 = fopen ("textos/Pazzle/fase2/Puzzle2/F2P2 interface.txt", "r");

    while(fgets(EstructChar_F2P2, 20, Estruct_F2P2) != NULL){
        printf("%s", EstructChar_F2P2);
    }
    printf(" \n\n");

    fclose(Estruct_F2P2);

return 0;
}

//fase 3

//Puzzle 5
//Puzzle 5
int Puzzle5Texto(){

    FILE *Puzzle5;
    char Puzzle5Char[20];

    Puzzle5 = fopen ("textos/Pazzle/fase3/Puzzle5.txt", "r");

    while(fgets(Puzzle5Char, 20, Puzzle5) != NULL){
        printf("%s", Puzzle5Char);
    }
    printf(" \n\n");

    fclose(Puzzle5);

return 0;
}
//-------------------------------------------------
//Puzzle 6
int Puzzle6Texto(){

    FILE *Puzzle6;
    char Puzzle6Char[20];

    Puzzle6 = fopen ("textos/Pazzle/fase3/Puzzle6.txt", "r");

    while(fgets(Puzzle6Char, 20, Puzzle6) != NULL){
        printf("%s", Puzzle6Char);
    }
    printf(" \n\n");

    fclose(Puzzle6);

return 0;
}
int Puzzle6p1Texto(){

    FILE *Puzzle6p1;
    char Puzzle6p1Char[20];

    Puzzle6p1 = fopen ("textos/Pazzle/fase3/Puzzle6P1.txt", "r");

    while(fgets(Puzzle6p1Char, 4, Puzzle6p1) != NULL){
        Sleep(t);
        printf("%s", Puzzle6p1Char);
    }
    printf(" \n\n");

    fclose(Puzzle6p1);

return 0;
}
//-------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------


//fase 4
//Puzzle 7
int Puzzle7Texto(){

    FILE *Puzzle7;
    char Puzzle7Char[20];

    Puzzle7 = fopen ("textos/Pazzle/fase4/Puzzle7texto1.txt", "r");

    while(fgets(Puzzle7Char, 4, Puzzle7) != NULL){
            Sleep(t);
        printf("%s", Puzzle7Char);
    }
    printf(" \n");

    fclose(Puzzle7);

return 0;
}
int Puzzle7p1Texto(){

    FILE *Puzzle7p1;
    char Puzzle7p1Char[20];

    Puzzle7p1 = fopen ("textos/Pazzle/fase4/Puzzle7testo2.txt", "r");

    while(fgets(Puzzle7p1Char, 4, Puzzle7p1) != NULL){
            Sleep(t);
        printf("%s", Puzzle7p1Char);
    }
    printf(" \n\n");

    fclose(Puzzle7p1);

return 0;
}
//-------------------------------------------------
//Puzzle 8
//Nao tem texto
//-------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
//fase5
//História.
int HistoriaFase5P1(){
    FILE* HistoriaFase5;
    char historiaFase5[20];

    HistoriaFase5 = fopen("textos/Pazzle/fase5/Puzzle1/HistoriaP5.txt", "r");

    while(fgets(historiaFase5, 4, HistoriaFase5) != NULL){
        Sleep(t);
        printf("%s", historiaFase5);
    }
    printf(" \n\n");
    fclose(HistoriaFase5);


return 0;
}
int HistoriaFase5P2(){
    FILE* HistoriaFasep2;
    char historiaFase5p2[20];

    HistoriaFasep2 = fopen("textos/Pazzle/fase5/Puzzle1/HistoriaP5p1.txt", "r");

    while(fgets(historiaFase5p2, 4, HistoriaFasep2) != NULL){
        Sleep(t);
        printf("%s", historiaFase5p2);
    }
    printf(" \n\n");
    fclose(HistoriaFasep2);


return 0;
}
//-----------------------------------------------------------------
//Puzzle 9:
//Sem texto
//-----------------------------------------------------------------
//Puzzle 10:
int Puzzle10p1(){
    FILE* Puzzle10;
    char puzzle10[20];

    Puzzle10 = fopen("textos/Pazzle/fase5/Puzzle2/Puzzle10p1.txt", "r");

    while(fgets(puzzle10, 4, Puzzle10) != NULL){
        Sleep(50);
        printf("%s", puzzle10);
    }
    printf("\n\n");

    fclose(Puzzle10);
return 0;
}
int Puzzle10p2(){
    FILE* Puzzle10p2;
    char puzzle10p2[20];

    Puzzle10p2 = fopen("textos/Pazzle/fase5/Puzzle2/Puzzle10p2.txt", "r");

    while(fgets(puzzle10p2, 4, Puzzle10p2) != NULL){
        Sleep(50);
        printf("%s", puzzle10p2);
    }
    printf("\n\n");

    fclose(Puzzle10p2);
return 0;
}
int FinalHistoria(){
    FILE * Final;
    char FinalC[20];

    Final = fopen("textos/Pazzle/fase5/Puzzle2/final.txt", "r");

    while(fgets(FinalC, 4, Final) != NULL){
        Sleep(100);
        printf("%s", FinalC);
    }
    printf("\n\n");
    fclose(Final);
return 0;
}
//-----------------------------------------------------------------
