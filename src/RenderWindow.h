//
// Created by saifs on 22/07/2020.
//

#ifndef GAME_RENDERWINDOW_H
#define GAME_RENDERWINDOW_H

#include <SDL2/SDL.h>

class RenderWindow {
public:
    void cleanUp();

    RenderWindow(const char *title, int w, int h);

    SDL_Texture *loadTexture(const char *filepath);

    void render(SDL_Texture* texture, int x, int y, int w, int h, int scale);

    SDL_Renderer *getRenderer();

private:
    SDL_Renderer *renderer;
    SDL_Window *window;
};


#endif //GAME_RENDERWINDOW_H
