#ifndef ROTAQUIZ_H_INCLUDED
#define ROTAQUIZ_H_INCLUDED
//rotas fases

int EscolheDificuldade();
int TituloDoJogo();
int EscolheDificuldade();
int SteveIntroducao();
int SteveAcertouPergunta();
int SteveErrouPergunta();
int StevePerdeuJogo();
int SteveGanhouJogotext();
int StevePulaEtapas();
int PontuacaoQuiz();
int QuizParte1();
int QuizParte2();
int QuizParte3();
int QuizParte4();
int QuizParte5();
int QuizParte6();
int QuizParte7();
int QuizParte8();
int QuizParte9();
int QuizParte10();
int QuizParte11();
int QuizParte12();



//rotas textos
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
int QuizParte11text();
int QuizParte12text();

//Gravar dados em arquivo Quiz
void gravaPontos();
void PassaVQuiz(char nomeLogin[20]);

#endif // ROTAQUIZ_H_INCLUDED
