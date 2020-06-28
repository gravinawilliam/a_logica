#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "SDL2/SDL_opengl.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_rect.h"
#include "rotasPuzzle.h"


int sdlPuzzle(){ //int sdlPuzzle(int argc, char* args[]){
//var definidas (algumas)
bool runSDLprincipal = true;
SDL_Window* janelaF2 = NULL; //Define a janela
SDL_Event eventos;

//iniciar o SDL tudo.
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
        fprintf(stderr, "\nImpossivel iniciar o video: %s\n", SDL_GetError());
        return 1;
    }
//Iniciar uma janela
    janelaF2 = SDL_CreateWindow("As Aventuras de Vincent e Ana", 570, 300, 700, 400, SDL_WINDOW_RESIZABLE);//RESIZABLE (pode ser redimensionada)
    if (janelaF2 == NULL){
        printf("Não foi possível criar a janela: %s", SDL_GetError());
        return 1;
    }
//Criar um renderizador.
    SDL_Renderer* Renderizador = SDL_CreateRenderer(janelaF2, -1, SDL_RENDERER_ACCELERATED);
        if (Renderizador == NULL) {
        printf("Erro ao criar o reder: %s", SDL_GetError());
        }



//Dimensão das imagens e localização delas
    SDL_Rect* IMGDesenhoL = new(SDL_Rect);
    IMGDesenhoL ->x = 0;
    IMGDesenhoL ->y = 0;
    IMGDesenhoL ->w = 700;
    IMGDesenhoL ->h = 400;






//Imagem carrega pela surface
    SDL_Surface* IMGDesenho = SDL_LoadBMP("img/b.bmp"); //Puxa Imagem do desenho principal da pasta.
    SDL_Surface* IMGPedra = SDL_LoadBMP("img/a.bmp"); //Puxa Imagem do desenho principal da pasta.
    if (IMGDesenho == NULL || IMGPedra == NULL) printf("Nao foi possivel carregar imagem");

//Renderiza imagem
    SDL_Texture* IMGDesenhoT = SDL_CreateTextureFromSurface(Renderizador, IMGDesenho); //Cria a imagem do desenho principal
    SDL_Texture* IMGPedraT = SDL_CreateTextureFromSurface(Renderizador, IMGPedra); //Cria a imagem do desenho principal


//Cria espaço na memoria para a imagem
    SDL_FreeSurface(IMGDesenho);
    SDL_FreeSurface(IMGPedra);

    SDL_RenderClear(Renderizador); //Limpa a tela






int pedrax = 100;
int pedray = 18;

//Sistema de repetição
        while (runSDLprincipal){
                SDL_Rect* IMGPedraL = new(SDL_Rect);
                IMGPedraL ->x = pedrax;
                IMGPedraL ->y = pedray;
                IMGPedraL ->w = 100;
                IMGPedraL ->h = 100;

            //Eventos Da janela Fase1
            while(SDL_PollEvent(&eventos)){
            //Fechar Janela com X
                if (eventos.type == SDL_QUIT){runSDLprincipal = 0;}
            //Fechar Janela com ESC
                if (eventos.type == SDL_KEYUP && eventos.key.keysym.sym == SDLK_ESCAPE){runSDLprincipal = 0;}//events.key.keysym.sym (referente a uma tecla == tipo de tecla)
            SDL_RenderPresent(Renderizador); //Atualiza a Tela
            //movimentação


            /*
            if (eventos.type == SDL_KEYDOWN){

            if (eventos.key.keysym.sym == SDLK_d && pedrax <= 501){pedrax = pedrax +4; printf("\nEixo + X: %d", pedrax);}
            if (eventos.key.keysym.sym == SDLK_a && pedrax >= 22){pedrax = pedrax -4; printf("\nEixo - X: %d", pedrax);}
            if (eventos.key.keysym.sym == SDLK_w && pedray >= 18){pedray = pedray -4; printf("\nEixo + Y: %d", pedray);}
            if (eventos.key.keysym.sym == SDLK_s && pedray <= 253){pedray = pedray +4; printf("\nEixo + Y: %d", pedray);}

            if (eventos.key.keysym.sym == SDLK_d && pedrax <= 501){pedrax = pedrax +4; printf("\nEixo + X: %d", pedrax);}
            if (eventos.key.keysym.sym == SDLK_a && pedrax >= 22){pedrax = pedrax -4; printf("\nEixo - X: %d", pedrax);}
            if (eventos.key.keysym.sym == SDLK_w && pedray >= 18){pedray = pedray -4; printf("\nEixo + Y: %d", pedray);}
            if (eventos.key.keysym.sym == SDLK_s && pedray <= 253){pedray = pedray +4; printf("\nEixo + Y: %d", pedray);}


            }*/

}
    SDL_RenderCopy(Renderizador, IMGDesenhoT, NULL, IMGDesenhoL);
    //SDL_RenderCopy(Renderizador, IMGPedraT, NULL, IMGPedraL);
    SDL_RenderPresent(Renderizador); //Atualiza a Tela
    //SDL_RenderClear(Renderizador); //Limpa a tela

    }


SDL_RenderPresent(Renderizador); //Atualizar a pagina
SDL_RenderClear(Renderizador); //lIMPAR A TELA




SDL_DestroyTexture(IMGDesenhoT);
SDL_DestroyRenderer(Renderizador);
SDL_DestroyWindow(janelaF2);


return 0;
}
