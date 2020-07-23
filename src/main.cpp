//
// Created by saifs on 22/07/2020.
//
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "RenderWindow.h"
#include "GameLoopHandler.h"

using namespace std;

int main() {
    if (SDL_Init(SDL_INIT_EVERYTHING) > 0) {
        cout << "SDL Initialization failed. Error: " << SDL_GetError() << endl;
        return -1;
    }

    if (!IMG_Init(SDL_INIT_EVERYTHING)) {
        cout << "Image Initialization failed. Error: " << SDL_GetError() << endl;
        return -1;
    }
    RenderWindow window("Game", 1280, 720);
    GameLoopHandler gameLoopHandler;
    gameLoopHandler.start();
    window.cleanUp();
    SDL_Quit();
    return 0;
}
