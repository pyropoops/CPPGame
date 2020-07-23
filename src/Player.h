//
// Created by saifs on 23/07/2020.
//

#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include <SDL_render.h>
#include "RenderWindow.h"

class Player {
public:
    Player(RenderWindow* window, const char* texturePath);

    double getX();

    double getY();

    SDL_Texture *texture;

    SDL_Rect getCurrentFrame();

    void render();
private:
    double x;
    double y;
    SDL_Rect currentFrame;
    RenderWindow* window;
};


#endif //GAME_PLAYER_H
