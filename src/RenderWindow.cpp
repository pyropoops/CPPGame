//
// Created by saifs on 22/07/2020.
//

#include "RenderWindow.h"
#include <iostream>
#include <SDL_image.h>

RenderWindow::RenderWindow(const char *title, int w, int h) : window(nullptr), renderer(nullptr) {
    window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, w, h, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        std::cout << "Window failed to init. Error: " << SDL_GetError() << std::endl;
        return;
    }
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

SDL_Renderer *RenderWindow::getRenderer() {
    return renderer;
}

void RenderWindow::cleanUp() {
    SDL_DestroyWindow(window);
}

SDL_Texture *RenderWindow::loadTexture(const char *filepath) {
    SDL_Texture *texture = IMG_LoadTexture(renderer, filepath);
    if (texture == nullptr) {
        std::cout << "Error loading textures: " << SDL_GetError() << std::endl;
    }
    return texture;
}

void RenderWindow::render(SDL_Texture *texture, int x, int y, int w, int h, int scale) {
    SDL_Rect src;
    src.x = 0;
    src.y = 0;
    src.w = w;
    src.h = h;

    SDL_Rect dst;
    dst.x = x;
    dst.y = y;
    dst.w = w * scale;
    dst.h = h * scale;

    SDL_RenderCopy(renderer, texture, &src, &dst);
}
