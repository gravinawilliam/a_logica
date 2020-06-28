#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED
//função de tests
int teste();
int sdlPuzzle();
int RegiAtt();
void PassaVar(char nomeLoginComCaminho[30], char PersN[6], char nome[20], char senha[30], char faseAtual[6], char QuizAtual[6]); //para passar a var NomeLoginComCAminho para outra variavel dentro de um determinado arquivo.
void PassaVarR(char faseAtualAFF[6]); // Passa variaveis para o arquivo de registros.
void PassaVar2(int faseAtual2);

int sdlPuzzle(int FotoVer, int PapiroVer, int Papiro2Ver);

//Render Historia
int HistoriaPart1();
int HistoriaPart2();
int HistoriaPart3();
int HistoriaPart4();
int soHistRenderFase2P1();
int soHistRenderFase2P2();
//Render da Historia indo para fase 2 ...
//int HistoriaF1aF2Part1();

//Render historial jogavel
//Fase Parte 1/2 Puzzle 1 Historia
int HistoriaFase1Part1();
int HistoriaFase1Part2();
int HistoriaFase1Part3();

//Fase 1 Parte 2/2 Puzzle 2 Historia
int HistoriaFase12Part1();
int HistoriaFase12Part2();
//Fase parte 1/1 Puzzle 4 Fase 2
int HistoriaFase22Part2();

//Puzzle
//PuzzleFase1();
int PazzleFase1();//puzzle 1
int PazzleFase12();//puzzle 2

//puzzle fase 2
int PuzzleFase2p1();//puzzle 3
int PuzzleFase2p2();//Puzzle 4


//PuzzleFase2 Puzzle 1
int PuzzleFase2p1();
int Decisao1TextRenderFase2Puzzle1();//Texto F2 Puzzle 1 Part 1 Decisão 1
int Decisao2TextRenderFase2Puzzle1();//Texto F2 Puzzle 1 Part 1 Decisão 2

//PuzzleFase2 Puzzle 2
int PazzleFase21();
int PazzleFase210();

int matarmembro();
int naomatar();

int PuzzleFase2p2();

//fase 3:
//puzzle 5
int puzzle5();
int Puzzle5Texto();
//Puzzle6
int Puzzle6();
int Puzzle6Texto();
int Puzzle6p1Texto();

//puzzle7
int puzzle7();
int Puzzle7Texto();
int Puzzle7p1Texto();
//puzzle8
int puzzle8();

//puzzle9
//Historia
int HistoriaFase5P1();
int HistoriaFase5P2();
//Puzzle9
int puzzle9();
//puzzle 10
int Puzzle10p1();
int Puzzle10();
int Puzzle10p2();
//Final da historia
int FinalHistoria();


#endif // FUNCOES_H_INCLUDED
